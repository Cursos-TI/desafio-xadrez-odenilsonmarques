#include <stdio.h>

// Desafio de Xadrez - mestre
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para representar o movimento da Torre
void moveTorre(int movimentoTorre)
{
    if (movimentoTorre == 0)
    {
        return;
    }
    else
    {
        moveTorre(movimentoTorre - 1);
        printf("CASA %d: DIREITA \n", movimentoTorre);
    }
}

// Funcão recursiva para representar o movimento do Bispo
void moveBispo(int movimentoBispo)
{
    if (movimentoBispo == 0)
    {
        return;
    }
    else
    {
        moveBispo(movimentoBispo - 1);
        printf("CASA %d: CIMA, DIREITA\n", movimentoBispo);
    }
}

// Funcão recursiva para representar o movimento da Rainha
void moveRainha(int movimentoRainha)
{
    if (movimentoRainha == 0)
    {
        return;
    }
    else
    {
        moveRainha(movimentoRainha - 1);
        printf("CASA %d: ESQUERDA\n", movimentoRainha);
    }
}

int main()
{
    // ----------------MOVIMENTANDO A TORRE USANDO RECURSIVIDADE---------------------
    printf("------ MOVIMENTO DA TORRE ------\n");
    printf("A TORRE SE MOVE 5 CASAS PARA A DIREITA \n");

    moveTorre(5);
    printf("A TORRE TERMINOU O MOVIMENTO!\n\n");



    // ---------------- MOVIMENTANDO O BISPO USANDO RECURSIVIDADE------------------
    printf("------ MOVIMENTO DO BISPO ------\n");
    printf("O BISPO SE MOVE 5 CASAS NA DIAGONAL PARA CIMA E A DIREITA \n");

    moveBispo(5);
    printf("O BISPO TERMINOU O MOVIMENTO!\n\n");



    //----------------MOVIMENTANDO A RAINHA USANDO RECURSIVIDADE-------------------
    printf("------ MOVIMENTO DA RAINHA ------\n");
    printf("A RAINHA SE MOVE 8 CASAS PARA A ESQUERDA \n");

    moveRainha(8);
    printf("A RAINHA TEMINOU O MOVIMENTO \n\n");



    //----------------MOVIMENTO DO CAVALO USANDO OS LOOPS ANINHADOS COM MULTIPLAS VARIAVEIS-------------------
    printf("------ MOVIMENTO DO CAVALO ------\n");
    printf("O CAVALO SE MOVE 2 CASAS PARA BAIXO E 1 PARA A ESQUERDA \n");
    int c = 0;

    // Loop externo controla o movimento completo do cavalo
    while (c < 1)
    {
        // Primeiro, o cavalo anda 2 casas para baixo
        for (int i = 1, j = 2; i <= j; i++)
        {
            printf("CASA %d: PARA CIMA\n", i);
        }

        printf("MOVENDO UMA CASA PARA A DIREITA ESQUERDA (1/1)\n");
        c++;
    }

    printf("O CAVALO COMPLETOU O MOVIMENTO EM L \n\n");

    return 0;
}
