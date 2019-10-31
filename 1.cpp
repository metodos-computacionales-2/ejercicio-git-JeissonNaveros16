#include <iostream>
#include <math.h>

double diametro(double r);
double perimetro(double r);
double area(double r);
double pi = acos(-1.0);

// <Para poner comentarios>
// Comentario para hacer otro commit
int main(void)
{
    std::cout<<"Ingrese el radio del circulo:"<<std::endl;
    double R;
    std::cin>>R;
    std::cout<<"El diámetro es: "<<diametro(R)<<std::endl;
    std::cout<<"El perímetro es: "<<perimetro(R)<<std::endl;
    std::cout<<"El área es: "<<area(R)<<std::endl;
    return 0;
}

double diametro(double r)
{
    return 2.0*r;
}

double perimetro(double r)
{
    return 2.0*pi*r;
}

double area(double r)
{
    return pi*r*r;
}