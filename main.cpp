#include <iostream>
#include <stdio.h>
#include <cmath>

int main(){
    float x = 3.5f;
    if(std::floor(x) == x){
        std::cout << x << " is a whole number" << std::endl; 
    } else {
        std::cout << x << " is not a whole number" << std::endl; 
    }
    return 0;
}

