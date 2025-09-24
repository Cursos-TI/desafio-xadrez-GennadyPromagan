#include <stdio.h>


// RECURIVIDADE DO BISPO
void recursivoEs(int diagonalBispoEsq) {
    if (diagonalBispoEsq > 0) {
        recursivoEs(diagonalBispoEsq - 1);
        printf("Bispo Diagonal Esquerda\n");
    }
}
    void recursivoDi(int diagonalBispoDir) {
        if (diagonalBispoDir> 0){
            recursivoDi(diagonalBispoDir - 1);
            printf("Bispo Diagonal Direita\n");
        }
    }

// RECURVISO TORRE

    void recurvisoEsqTorre(int TorreDir){
        if( TorreDir > 0){
            recurvisoEsqTorre(TorreDir - 1);
            printf("Torre a Direita\n");
        }
    }

//RECURSIVO CAVALO ESQUERDA

    void recursivoEsqCavalo(int CavaloEsq){
        if(CavaloEsq > 0){
            recursivoEsqCavalo(CavaloEsq - 2);
            printf("Cima\n");
            printf("cima\n");
            printf("Esquerda\n");
        }
    }

// RECURSIVO CAVALO DIREITA

    void recursivoDirCavalo(int CavaloDir){
        if(CavaloDir > 0){
            recursivoDirCavalo(CavaloDir - 2);
            printf("Cima\n");
            printf("cima\n");
            printf("Direita\n");
        }
    }

// RECURSIVO RAINHA

    void recursivoRainha(int RainhaDireita){
        if(RainhaDireita > 0){
            recursivoRainha(RainhaDireita - 1);
            printf("Rainha a Direita\n");
        }
    }

int main (){

    int rainha = 0;
    int bispo = 0;
    int opcao, opcao2;
    
// Torre movendo a Direita
    printf("------- Torre --------\n");
    recurvisoEsqTorre(5);

// Rainha movendo a esquerda
    printf("---- Rainha ----\n");
    recursivoRainha(8);
// Cavalo

    printf("---- Cavalo ----\n");
    printf("1. Cima, Cima e Esquerda\n");
    printf("2. Cima, Cima e Direita\n");
    printf("Escolha o Movimento do Cavalo: ");
    scanf("%d", &opcao2);

    switch(opcao2){
        case 1:
            recursivoEsqCavalo(1);
        {
        
        break;

        case 2:
            recursivoDirCavalo(1);
        {
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
            recursivoEs(5);
            break;

            case 6:
            recursivoDi(5);
            break;

        default:
            printf("Opcao invalida\n");

        }
}