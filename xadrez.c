#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int atual = 0;
    int tabuleiro[8][8];
    int escolha = 0;
    printf("Em nosso jogo de Xadrez, voce poderá mover o Bispo, a Torre ou a Rainha\n   Escolha uma peça:\n      1 - Bispo\n      2 - Torre\n      3 - Rainha\n");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        printf ("A peça escolhida foi: Bispo\n");
        Bispo();
        break;
    case 2:
        printf ("A peça escolhida foi: Torre\n");
        Torre();
        break;
    case 3:
        printf ("A peça escolhida foi: Rainha\n");
        Rainha();
        break;

    default:
        break;
    }

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

   
    return 0;
}

void Bispo(void){




}

void Torre(void){




}

void Rainha(void){





}