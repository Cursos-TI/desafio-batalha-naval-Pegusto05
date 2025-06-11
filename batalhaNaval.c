#include <stdio.h>

/*
Desafio Batalha Naval - Nível Aventureiro

Objetivo:
- Expandir o tabuleiro para 10x10.
- Posicionar quatro navios: dois na vertical/horizontal e dois na diagonal.
- Usar o valor 3 para marcar as posições ocupadas no tabuleiro.
- Exibir o tabuleiro inteiro, mostrando 0 para posições livres e 3 para ocupadas.

Novidades:
- Trabalho com matriz maior.
- Posicionamento de navios na diagonal, que exige controle cuidadoso dos índices.
- Impressão completa do tabuleiro para visualização clara do posicionamento.
*/

// Definindo tamanho do tabuleiro 10x10
#define LINHAS 10
#define COLUNAS 10

int main() {
    int tabuleiro[LINHAS][COLUNAS] = {0}; // Inicializa tudo com zero

    // Posicionando navio vertical (tamanho 4) na coluna 2, linhas 1 a 4
    for (int i = 1; i <= 4; i++) {
        tabuleiro[i][2] = 3;
    }

    // Posicionando navio horizontal (tamanho 5) na linha 6, colunas 3 a 7
    for (int j = 3; j <= 7; j++) {
        tabuleiro[6][j] = 3;
    }

    // Posicionando navio diagonal (tamanho 3) a partir da posição (2,5) descendo para a direita
    for (int k = 0; k < 3; k++) {
        tabuleiro[2 + k][5 + k] = 3;
    }

    // Posicionando outro navio diagonal (tamanho 4) a partir da posição (7,1) subindo para a direita
    // Como sobe, linha diminui e coluna aumenta
    for (int k = 0; k < 4; k++) {
        tabuleiro[7 - k][1 + k] = 3;
    }

    // Exibindo o tabuleiro completo
    printf("Tabuleiro completo (0 = livre, 3 = navio):\n\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
