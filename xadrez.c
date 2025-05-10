#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    void moverTorre(int casas) {
        if (casas > 0) {
            printf("Direita\n");
            moverTorre(casas -1);
       }
    }

    void moverBispo(int casas) {
        if (casas > 0) {
            printf("Cima Direita\n");
            moverBispo(casas -1);
        }
    }

    void moverRainha(int casas) {
        if (casas > 0) {
            printf("Esquerda\n");
            moverRainha(casas -1);
        }
    }

    int main() {
        //Movimentação da Torre, Bispo e Rainha
        printf("Torre:\n"); moverTorre(5), 
        printf("\n"); 
        printf("Bispo:\n"); moverBispo(5), 
        printf("\n"); 
        printf("Rainha:\n"); moverRainha(8); 
        printf("\n"); 
        
        // Movimentação do cavalo usando loops aninhados com múltiplas condições
        printf("Cavalo:\n");
        for (int c = 2, d = 1; c <= 2 && d <= 1; c++, d--) {
        printf("Cima: %d\nDireita: %d\n", c, d);
        printf("\n");
    }

        //Movimento do Bispo usando loop aninhado
        printf("Bispo:\n");
        for ( int c = 1; c <= 5; c++){

            for (int d = 5; d <= 5; d++){
                printf("Cima\n");
                printf("Direita\n");

        }
        
    }

        return 0;
        
    }