#include <stdio.h>


// TODO: Implemente a função: Crie uma função que calcule área e perímetro de um retângulo usando ponteiros.
void calcular_retangulo(float largura, float altura, float *area, float *perimetro) {

// Calcule área e perímetro usando os ponteiros
    *area = largura * altura;
    *perimetro = 2 * (largura + altura);
}


int main() {

float l = 5.0, h = 3.0;
float area, perimetro;


calcular_retangulo(l, h, &area, &perimetro);


printf("Retângulo %.1f x %.1f\n", l, h);
printf("Área: %.2f\n", area);
printf("Perímetro: %.2f\n", perimetro);


return 0;
}