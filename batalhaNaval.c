#include <stdio.h>

int main() {

int tabuleiro1[5][5] = {0};

// novato - navio horizontal
for(int i=0;i<3;i++){
    tabuleiro1[1][i] = 1;
}

// novato - navio vertical
for(int i=0;i<4;i++){
    tabuleiro1[i][3] = 2;
}

printf("NIVEL NOVATO\n");
printf("Coordenadas navio horizontal:\n");
for(int i=0;i<3;i++){
    printf("(%d, %d)\n", 1, i);
}
printf("Coordenadas navio vertical:\n");
for(int i=0;i<4;i++){
    printf("(%d, %d)\n", i, 3);
}

printf("\n");

// -----------------------------

int tabuleiro2[10][10] = {0};

// aventureiro - navio horizontal
for(int i=0;i<4;i++){
    tabuleiro2[2][1+i] = 3;
}

// aventureiro - navio vertical
for(int i=0;i<3;i++){
    tabuleiro2[1+i][6] = 3;
}

// aventureiro - navio diagonal principal
for(int i=0;i<3;i++){
    tabuleiro2[5+i][0+i] = 3;
}

// aventureiro - navio diagonal secundaria
for(int i=0;i<3;i++){
    tabuleiro2[0+i][9-i] = 3;
}

printf("NIVEL AVENTUREIRO\n");
printf("Tabuleiro 10x10:\n");
for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
        printf("%d ", tabuleiro2[i][j]);
    }
    printf("\n");
}

return 0;
}
