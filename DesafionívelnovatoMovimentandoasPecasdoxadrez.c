#include <stdio.h>

int main (){

    int rainha = 0;
    int bispo = 0;
    int opcao;
    

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