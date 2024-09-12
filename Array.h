#pragma once
#include <algorithm>
#include <iostream>
#include<cmath>

class Array{
private:
    size_t _size; 
    int* _array; 
    int _count;
public:
Array(){
    _size = 10;
    _array = new int[_size];
    _count = 0;
}

Array(size_t size){
    _size = size;
    _array = new int[_size];
    _count = 0;
}

void Append(int elem){
    if (_count == _size){
        _array = (int*) realloc(_array, _size + sizeof(int));
    }
    _array[_count++] = elem;
}

int FindElem1(int elem){
    int i = -1;
    auto n = std::find(_array, _array+_count, elem);
    if(n != (_array + _count))
        i = n - _array;
    return i;
}

int FindElem2(int elem){
    return std::find(_array, _array+_count, elem)!=(_array +_count);
}

int GetMax(){
    return *std::max_element(_array, _array+_count);
}

int GetMin(){
    return *std::min_element(_array, _array+_count);
}

~Array(){
    delete [] _array;
}

};