#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    srand(time(NULL));

    int acertosSeguidos = 0;
    int caminhoCorreto;
    char direcaoCorreta[10];
    char escolha[10];

    printf("Bem-vindo ao jogo FUGA DO LABIRINTO!\n");
    printf("Voce precisa acertar 2 caminhos seguidos para escapar.\n");
    printf("Escolha entre: direita ou esquerda.\n\n");

    // Enquanto o jogador não acertar 3 vezes seguidas
    while (acertosSeguidos < 3) {
          caminhoCorreto = rand() % 2 + 1;  // 1 ou 2
          
          // Define a direção correta com base no número
          if (caminhoCorreto == 1)
            strcpy(direcaoCorreta, "direita");
        else 
            strcpy(direcaoCorreta, "esquerda");

        printf("Tentativa %d/2\n", acertosSeguidos + 1);
        printf("Qual direcao voce escolhe? ");
        scanf("%s", escolha);

        if (strcmp(escolha, direcaoCorreta) == 0) {
            acertosSeguidos++;
            printf("Voce avancou para a proxima sala.\n\n");
        } else {
            printf("Errado. O correto era: \n", direcaoCorreta);
            printf("Voce voltou ao inicio do labirinto.\n\n");
            acertosSeguidos = 0;
        }
    }

    printf("PARABENS! Voce escapou do labirinto com sucesso!\n");

    return 0;
}
