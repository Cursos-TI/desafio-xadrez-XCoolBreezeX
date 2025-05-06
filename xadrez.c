#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    int b = 1;
    int r2 = 1;
    int r = 8;
    int movimentoemL = 1; //Movimento em L do Cavalo
    
    //Mover a Torre 5 casas para a direita
    printf("Torre\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    //Mover o Bispo 5 casas para diagonal direita
    printf("Bispo\n");
    while (b <= 5){
        
        printf("Cima Direira\n", b); // Imprime a direção do movimento

        b++;
    }

    //Mover a Rainha 8 casas para a esquerda
    printf("Rainha\n");
    do {
        
        printf("Esquerda\n", r2); // Imprime a direção do movimento
        r2++;

    } while ( r2 <= r);

    //Mover o Cavalo 2 casas para baixo e 1 para a esquerda
    printf("Cavalo\n");
    while (movimentoemL--)
    {
        for (int i = 0; i < 2; i++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }




    return 0;
}
