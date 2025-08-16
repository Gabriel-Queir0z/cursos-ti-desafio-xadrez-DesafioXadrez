#include <stdio.h>
#include <string.h>

int main() {
    int peca, logica;
    printf ("Desafio: JOGO DE XADREZ\n");
    printf("Qual peça você deseja movimentar?\n 1 - Rainha\n2 - Bispo\n3 - Torre\n");
    scanf("%d", &peca);
    printf ("Qual lógica vc quer usar? \n 1 - FOR \n 2 - WHILE \n 3 - DO WHILE \n");
    scanf("%d", &logica);

    switch (logica)
    {
        // USO DA LÓGICA FOR --------------------------
    case 1:
      
    if (peca == 1) {
        for (int rainha = 8; rainha > 0; rainha--) {
            printf("Esquerda\n");
        }
    } 
    else if (peca == 2) {
        for (int bispo = 0; bispo < 5; bispo++) {
            printf("Para cima e para Direita\n");
        }
    } 
    else if (peca == 3) {
        for (int torre = 0; torre < 5; torre++) {
            printf("Direita\n");
        }
    } 
    else {
        printf("Peça inválida!\n");
    }
 
        break;
  case 2:
  // USO DA LÓGICA WHILE ------------------------------------
  if (peca == 1) {
    int rainha = 8;
    while (rainha > 0){
    printf ("Esquerda \n");
    rainha--;
    }
  }
  else if (peca==2){
int bispo = 0;
while (bispo < 5){
printf ("Para cima e Para Direita\n");
bispo++;
}
  }
  else if (peca==3){
int torre = 0;
while (torre < 5){
printf ("Direita\n");
torre++;
}
  }
  else {
   printf("Peça inválida!\n");
  }
   break;
case 3:
// USO DA LÓGICA DO WHILE ----------------------------------
if (peca == 1){
   int rainha = 8;
    do {
     printf ("Esquerda \n");
    rainha--;
    }while (rainha > 0);
}
else if (peca == 2){
   int bispo = 0;
    do {
     printf ("Para cima e Para Direita \n");
    bispo++;

    }while (bispo < 5);
}
else if (peca == 3){
   int torre = 0;
    do {
     printf ("Direita \n");
    torre++;
    }while (torre < 5);
}
 break;

default:
printf("Opção de lógica inválida!\n");
        break;
    }
    return 0;
}
