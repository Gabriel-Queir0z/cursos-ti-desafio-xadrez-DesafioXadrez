void rainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");  
        rainha(n - 1);
    }
}
    void torre(int n) {
     for(int i = 0; i < n; i++) {
        printf("Direita\n");
    }
}

    void bispo(int n) {
    for (int i = 0; i < n; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}

    
        void cavalo(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main() { 
    int escolha;
    printf("Jogo de xadrez\n");
    printf ("Qual peça deseja mover?\n");
    printf("1 - Rainha\n");
    printf("2 - Torre\n");
    printf("3 - Bispo\n");
    printf("4 - Cavalo\n");
    scanf ("%d", &escolha);
    if (escolha == 1) {
        printf("Você escolheu a Rainha.\n");
    rainha(8);
    return 0;
}
    else if (escolha == 2) {
        printf("Você escolheu a Torre.\n");
        torre(5);
        return 0;
    }
    else if (escolha == 3) {
        printf("Você escolheu o Bispo.\n");
        bispo(5);
        return 0;
    }
    else if (escolha == 4) {
        printf("Você escolheu o Cavalo.\n");
       cavalo(1);
        return 0;
    }
    else {
        printf("Opção inválida.\n");
        return 1;
    }
}
