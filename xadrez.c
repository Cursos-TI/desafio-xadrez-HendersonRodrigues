#include <stdio.h>


// Variáveis globais
// Matriz do tabuleiro com 8 posições para as linhas e 8 para as colunas
    int posicao_atual_bispo[8][8],lb, cb; // lb refere-se à linha do bispo e cb refere-se à coluna do bispo
    int posicao_atual_torre[8][8], lt, ct; //...
    int posicao_atual_rainha[8][8], lr, cr; //...

    int tabuleiro[8][8], L, C; // Será usado para não ter peças na mesma posição sem que haja a "tomada" da peça

int main() {
    
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

    return 0;
}

void Bispo(void){
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
int direcaohorizontal = 0;
int direcaovertical = 0;

printf("O Bispo pode se mover na diagonal para direita ou para esquerda\nEscolha a direção e a quantidade de casas ele vai se movimentar\n");
printf("Qual direção? \n1 - Direita\n2 - Esquerda\n");
scanf("%d", &direcaohorizontal);
printf("Para cima ou para baixo? \n1 - Cima\n2 - Baixo\n");
scanf("%d", &direcaovertical);


}

void Torre(void){
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.




}

void Rainha(void){
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.





}