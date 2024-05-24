#include <stdio.h>
int verificaMaior(int *pn){
    if(*pn > *(pn+1) && *pn > *(pn + 2)){
        if(*(pn+1) > *(pn+2)){
            return *(pn+1);
        }
        else{
            return *(pn+2);
        }
    }
    else if(*(pn+1) > *pn && *(pn+1) > *(pn + 2)){
        if(*pn > *(pn+2)){
            return *pn;
        }
        else{
            return *(pn+2);
        }
    }
    else{
        if(*pn > *(pn+1)){
            return *pn;
        }
        else{
            return *(pn+1);
        }
    }
}
int main (){

    int num, nums[3], i;
    int *pn;
    pn = &nums[0];

    scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);

    printf("%d\n", verificaMaior(pn));

    return 0;
}
