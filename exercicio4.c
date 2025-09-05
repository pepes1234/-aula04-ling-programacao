#include <stdio.h>

// Função para calcular estatísticas de um array de notas
void calcular_estatisticas(float *notas, int quantidade, float *media, float *maior, float *menor) {
    float soma = 0.0;
    *maior = notas[0];
    *menor = notas[0];
    for (int i = 0; i < quantidade; i++) {
        soma += notas[i];
        if (notas[i] > *maior) {
            *maior = notas[i];
        }
        if (notas[i] < *menor) {
            *menor = notas[i];
        }
    }
    *media = soma / quantidade;
}

int main() {
    float notas[] = {8.5, 7.2, 9.1, 6.8, 8.9, 7.7, 9.5, 8.2};
    int qtd_notas = sizeof(notas) / sizeof(notas[0]);int main() {
    float media, maior, menor;
    float notas[] = {8.5, 7.2, 9.1, 6.8, 8.9, 7.7, 9.5, 8.2};
    calcular_estatisticas(notas, qtd_notas, &media, &maior, &menor);

    printf("=== RELATÓRIO DE NOTAS ===\n");
    printf("Notas: ");    float media, maior, menor;
    for (int i = 0; i < qtd_notas; i++) {
        printf("%.1f ", notas[i]);
    }as, &media, &maior, &menor);
    printf("\n");    printf("=== RELATÓRIO DE NOTAS ===\n");
    printf("Média: %.2f\n", media);
    printf("Maior nota: %.2f\n", maior);    printf("Notas: ");
    printf("Menor nota: %.2f\n", menor);
    for (int i = 0; i < qtd_notas; i++) {
    return 0;
}

    return 0;

}