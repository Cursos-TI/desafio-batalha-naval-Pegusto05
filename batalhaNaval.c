#include <stdio.h>

/*
Desafio Batalha Naval - Nível Novato

Objetivo:
- Posicionar dois navios em um tabuleiro simples usando uma matriz bidimensional.
- Um navio será posicionado verticalmente e outro horizontalmente.
- Exibir as coordenadas de cada parte dos navios usando printf.

Requisitos:
- Usar matriz 2D para representar o tabuleiro.
- Os navios serão definidos manualmente no código.
- Mostrar as coordenadas das partes dos navios de forma organizada.
*/

// Definindo o tamanho do tabuleiro
#define LINHAS 5
#define COLUNAS 5

int main() {
    // Declaração do tabuleiro 5x5, inicialmente vazio (0 = sem navio)
    int tabuleiro[LINHAS][COLUNAS] = {0};

    // Posicionando navio vertical (tamanho 3) na coluna 1, linhas 1,2 e 3
    // Usamos valor 1 para representar partes do navio vertical
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][1] = 1;
    }

    // Posicionando navio horizontal (tamanho 4) na linha 3, colunas 0 a 3
    // Usamos valor 2 para representar partes do navio horizontal
    for (int j = 0; j <= 3; j++) {
        tabuleiro[3][j] = 2;
    }

    // Exibindo as coordenadas das partes do navio vertical
    printf("Coordenadas do navio vertical (valor 1):\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio vertical em: Linha %d, Coluna %d\n", i, j);
            }
        }
    }

    // Exibindo as coordenadas das partes do navio horizontal
    printf("\nCoordenadas do navio horizontal (valor 2):\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (tabuleiro[i][j] == 2) {
                printf("Navio horizontal em: Linha %d, Coluna %d\n", i, j);
            }
        }
    }

    return 0;
}
