#include <iostream>

bool triangulo(int L1, int L2, int L3);

// Comentario para hacer otro commit
int main(void)
{
    std::cout<<"Ingrese la longitud de los lados del triangulo:"<<std::endl;
    int L1;
    int L2;
    int L3;
    std::cout<<"Lado 1:"<<std::endl;
    std::cin>>L1;
    std::cout<<"Lado 2:"<<std::endl;
    std::cin>>L2;
    std::cout<<"Lado 3:"<<std::endl;
    std::cin>>L3;
    if(triangulo(L1, L2, L3) == 1)
    {
        std::cout<<"¿Se puede formar un triangulo rectangulo? Sí"<<std::endl;
    }
    else
    {
        std::cout<<"¿Se puede formar un triangulo rectangulo? No"<<std::endl;
    }        
    return 0;
}

bool triangulo(int L1, int L2, int L3)
{
    return (L1*L1 + L2*L2 == L3*L3) || (L1*L1 + L3*L3 == L2*L2) || (L2*L2 + L3*L3 == L1*L1);
}
