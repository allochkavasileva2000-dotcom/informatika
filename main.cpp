#include <iostream>
#include <locale>
#include <cmath>


int main() {
    setlocale(LC_ALL,"Russian");
    float x,y;
    std::cout<< "введите x , y" << std::endl;
    std::cin >> x >> y;
    float R = (-x-sqrt(pow(x,2) - 4*x*y))/(2*y);
    float S = log(pow(2,x)) - tan(fmin(x,y));
    std::cout<< "R = "<< R << std::endl;
    std::cout<< "S = "<< S << std::endl;
    float C = fmax(R,S);
    std::cout<<"C = "<< C <<std::endl;
    
    
    
return 0;
}
