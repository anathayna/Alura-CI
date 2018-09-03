#include <stdio.h>

int main() {
  printf("******************************************\n");
  printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
  printf("******************************************\n\n");

  int numerosecreto = 42;
  int chute;
  int ganhou = 0;
  int tentativas = 1;

  while(ganhou == 0){ 
    printf("Tentativa %d\n", tentativas);
    printf("Qual é o seu chute? ");
    scanf("%d", &chute);

    if(chute < 0) {
      printf("Você não pode chutar números negativos!\n");
      continue;
    }

    int acertou = (chute == numerosecreto);
    int maior = chute > numerosecreto;

    if(acertou) {
      printf("\nParabéns! Você acertou!\n");
      ganhou = 1; //l00p
    }
    
    else if(maior) {
      printf("Seu chute foi MAIOR que o número secreto\n\n");
    }
      
    else {
        printf("Seu chute foi MENOR que o número secreto\n\n");
    }
    tentativas++;
  }
  printf("Fim de jogo!\n");
  printf("Você acertou em %d tentativa(s)!\n", tentativas-1);
} 
