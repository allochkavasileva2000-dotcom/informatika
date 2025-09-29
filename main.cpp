#include <iostream>
#include <locale>
#include <cmath>


int main() {
    setlocale(LC_ALL,"Russian");
    float x,y;
    std::cout<< "введите x , y" << std::endl;
    std::cin >> x >> y;
    float r = (-x-sqrt(pow(x,2) - 4*x*y))/(2*y);
    float s = log(pow(2,x)) - tan(fmin(x,y));
    std::cout<< r<< s<< std::endl;
    float c = fmax(r,s);
    std::cout<< c <<std::endl;
    
    
    
    
    return 0;
}
    
