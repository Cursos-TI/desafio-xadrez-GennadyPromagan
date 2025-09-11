#include <stdio.h>

int main (){

    int rainha = 0;
    int bispo = 0;
    int opcao, opcao2;
    

// Torre movendo a Direita
    printf("------- Torre --------\n");
    for( int Torre = 0; Torre < 5; Torre++){
        printf("Torre para a direita\n");
    }


// Rainha movendo a esquerda
    printf("---- Rainha ----\n");
    while (rainha <= 8){
        
        printf("Rainha para a esquerda\n");
        rainha++;
    }

// Cavalo

    printf("---- Cavalo ----\n");
    printf("1. Cima, Cima e Direita\n");
    printf("2. Cima, Cima e Esquerda\n");
    printf("Escolha o Movimento do Cavalo: ");
    scanf("%d", &opcao2);

    switch(opcao2){
        case 1:
            printf("Duas casas para cima, uma casa para Direita\n");
            for(int i = 0; i < 2; i++){
            printf("Cima\n");

            for(int j = 0; j < i; j++){
            printf("Direita\n");
        }
        break;

        case 2:
            printf("Duas casas para cima, uma casa para Esquerda\n");

            for(int i = 0; i < 2; i++){
            printf("Cima\n");

          int j = 0;

            while(j < 1 && i == 1){
            printf("Esquerda\n");

            j++;
        }
    }
        break;
    default:
        printf("Opcao invalida\n");
    break;
    }

}

// Escolher para onde o bispo se move

        printf("---- Bispo ----\n");    
        printf("1. Cima\n");
        printf("2. Baixo\n");
        printf("3. Esquerda\n");
        printf("4. Direita\n");
        printf("5. Diagonal Esquerda\n");
        printf("6. Diagonal Direita\n");
        printf("Escolha o movimento do bispo: ");
        scanf("%d", &opcao);

    do{
        switch(opcao){
            case 1:
            printf("Bispo para Cima\n");
            break;

            case 2:
            printf("Bispo para Baixo\n");
            break;

            case 3:
            printf("Bispo para a Esquerda\n");
            break;

            case 4:
            printf("Bispo para a Direita\n");
            break;

            case 5:
            printf("Bispo par Diagonal Esquerda\n");
            break;

            case 6:
            printf("Bispo para Diagonal Direita\n");
            break;

        default:
            printf("Opcao invalida\n");

        }
    bispo++;

    }while(bispo < 5);

    printf("*** Fim ***");
}