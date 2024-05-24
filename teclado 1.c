#include <stdio.h>
#include <string.h>

char letras[8][4]= {
    "ABC",
    "DEF",
    "GHI",
    "JKL",
    "MNO",
    "PQRS",
    "TUV",
    "WXYZ"
};

char palavra[100][100];

int palavras(int num){

    int j, k, l;

    for(j=0; j < strlen(palavra[num]); j++){
        for(k=0;k<8;k++){
            for(l=0; l<4;l++){
                if(palavra[num][j] == letras[k][l]){
                    printf("%d", k+2);
                }
            }
        }
    }
}

int main(){

    int num, i, j, k, l;

    scanf("%d", &num);

    for(i =0; i < num; i++){
        scanf("%s", &palavra[i]);
    }

    for(i=0; i<num; i++){
        palavras(i);
        printf("\n");
    }

    return 0;
}
