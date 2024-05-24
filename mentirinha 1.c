#include <stdio.h>

void primo(int num){
    int i, cont=0;

    for(i = num; i > 0; i=i-1){
        if(num % i == 0){
            cont++;
        }
    }

    if(cont == 3){
        printf("sim");
        getchar();
    }
    else{
        printf("nao");
        getchar();
    }
}

int main (){

    int num;

    scanf("%d", &num);

    primo(num);
    printf("\n");

    return 0;
}
