#include <iostream>
#include "mathUtils.h"
int main() {
    double x = 5.0, y = 3.0;
    int num = 42;

    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    std::cout << "Square of " << x << " is " << square(x) << std::endl;
    
    std::cout << num << " is " << (isEven(num) ? "even" : "odd") << std::endl;

    return 0;
}
