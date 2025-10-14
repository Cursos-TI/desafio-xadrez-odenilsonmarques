#include <stdio.h>

// Desafio de Xadrez - novato
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    // ----------------MOVIMENTANDO A TORRE USANDO O LAÇO FOR---------------------
    printf("------ MOVIMENTO DA TORRE ------\n");
    printf("A TORRE SE MOVE 5 CASAS PARA A DIREITA \n");

    for (int t = 1; t <= 5; t++)
    {
        printf("Casa %d: Direita \n", t);
    }

    printf("A TORRE TERMINOU O MOVIMENTO!\n\n");


    // ---------------- MOVIMENTANDO O BISPO USANDO O LAÇO WHILE------------------
    printf("------ MOVIMENTO DO BISPO ------\n");
    printf("O BISPO SE MOVE 5 CASAS NA DIAGONAL PARA CIMA E A DIREITA \n");

    // variavel para controlar o laço(movimentação do Bispo)
    int b = 1;

    while (b <= 5)
    {
        printf("Casa %d: Cima, Direita\n", b);
        b++;
    }
    printf("O BISPO TERMINOU O MOVIMENTO!\n\n");



    //----------------MOVIMENTANDO A RAINHA USANDO LAÇO DO WHILE-------------------
    printf("------ MOVIMENTO DA RAINHA ------\n");
    printf("A RAINHA SE MOVE 8 CASAS PARA A ESQUERDA \n");

     // variavel para controlar o laço(movimentação da Rainha)
     int r = 1;

     do{
        printf("Casa %d: Esquerda\n", r);
        r++;
     }
     while(r <= 8);

     printf("A RAINHA TEMINOU O MOVIMENTO \n\n");

    return 0;
}
