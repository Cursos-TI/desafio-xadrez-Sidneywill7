#include <stdio.h>

int main() {
    // Movimentação da Torre (5 casas para a direita) usando for
    printf("Movimentação da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do Bispo (5 casas na diagonal para cima e à direita) usando while
    printf("Movimentação do Bispo:\n");
    int bispo = 1;
    while (bispo <= 5) {
        printf("Cima Direita\n");
        bispo++;
    }
    printf("\n");

    // Movimentação da Rainha (8 casas para a esquerda) usando do-while
    printf("Movimentação da Rainha:\n");
    int rainha = 1;
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
    
    return 0;
}
