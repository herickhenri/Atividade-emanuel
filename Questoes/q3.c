#include <stdio.h>

int main()
{
    float altura = 0;
    float raio = 0;
    double volume = 0;
    
    
    printf("Escreva a altura da lata:");
    scanf("%f", &altura);
    
    printf("Escreva o raio da lata:");
    scanf("%f", &raio);
    
    volume = 3.14159 * pow(raio, 2) * altura;
    
    printf("O volume da lata é: %f\n", volume);

    return 0;
}