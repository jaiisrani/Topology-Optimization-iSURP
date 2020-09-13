
//program to find the square root of any number x

#include <iostream>

int main() {
    double x, dummy;
    std::cin >> x;
    dummy = x;
    while(dummy*dummy - x > 0.0001){
        dummy -= 0.0001;
    };
    std::cout << dummy << std::endl;
}
