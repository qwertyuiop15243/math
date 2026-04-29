#include <iostream>
#include "mathUtils.h"
int main() {
    int x = 8, y = 4;
    int num = 23;

    std::cout << x<<" + "<< y << " = " << add(x, y) << std::endl;
    std::cout <<"Square of "<< x<< " is " << square(x) << std::endl;
    if(isEven(num) == 1){
    std::cout << num << " is even" << std::endl;
    }else{
    std::cout << num << " is odd" << std::endl;
    }
    return 0;
}
