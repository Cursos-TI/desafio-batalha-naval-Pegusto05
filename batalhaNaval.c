#include <stdio.h>

/*
Desafio Batalha Naval - Nível Mestre

Objetivo:
- Implementar habilidades especiais representadas por padrões em matrizes.
- Usar loops aninhados para percorrer e preencher as áreas atingidas.
- Três padrões: cone, cruz e octaedro.
- Exibir as matrizes mostrando 0 para não afetadas e 1 para áreas atingidas.

Novidades:
- Manipulação de matrizes para representar áreas de efeito.
- Uso de loops aninhados para preencher padrões complexos.
- Impressão clara dos padrões para fácil visualização.
*/

#define TAM 5  // Tamanho das matrizes de habilidade

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int cone[TAM][TAM] = {0};
    int cruz[TAM][TAM] = {0};
    int octaedro[TAM][TAM] = {0};

    // Preenchendo padrão CONE
    /*
    Exemplo do padrão cone:
    0 0 1 0 0
    0 1 1 1 0
    1 1 1 1 1
    */
    // Para facilitar, vamos preencher a parte inferior da matriz centralizada.
    for (int i = 2; i < TAM; i++) {
        int inicio = 2 - (i - 2);
        int fim = 2 + (i - 2);
        for (int j = inicio; j <= fim; j++) {
            cone[i][j] = 1;
        }
    }

    // Preenchendo padrão CRUZ
    /*
    Exemplo do padrão cruz:
    0 0 1 0 0
    1 1 1 1 1
    0 0 1 0 0
    */
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            // Linha do meio e coluna do meio preenchidas
            if (i == 2 || j == 2) {
                cruz[i][j] = 1;
            }
        }
    }

    // Preenchendo padrão OCTAEDRO
    /*
    Exemplo do padrão octaedro:
    0 0 1 0 0
    0 1 1 1 0
    0 0 1 0 0
    */
    // Preenchendo uma espécie de "diamante" no meio
    for (int i = 1; i <= 2; i++) {
        for (int j = 2 - (i - 1); j <= 2 + (i - 1); j++) {
            octaedro[i][j] = 1;
        }
    }
    // Linha do meio completa no meio do octaedro
    for (int j = 2; j <= 2; j++) {
        octaedro[2][j] = 1;
    }
    // Parte inferior igual a parte superior (simetria)
    for (int i = 3; i < 4; i++) {
        for (int j = 2 - (4 - i - 1); j <= 2 + (4 - i - 1); j++) {
            octaedro[i][j] = 1;
        }
    }

    // Imprimindo os padrões
    printf("Habilidade - Cone:\n");
    imprimirMatriz(cone);

    printf("Habilidade - Cruz:\n");
    imprimirMatriz(cruz);

    printf("Habilidade - Octaedro:\n");
    imprimirMatriz(octaedro);

    return 0;
}
