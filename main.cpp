#include"Array.h"

int main(){
    Array arr = Array(1);
    arr.Append(2);
    arr.Append(4);
    arr.Append(3);
    arr.Append(1);
    arr.Append(5);
    std::cout << arr.GetMax() << std :: endl;
    std::cout << arr.GetMin() << std :: endl;
    std::cout << arr.FindElem1(5) << std :: endl;
    std::cout << arr.FindElem2(3) << std :: endl;
return 0;
}