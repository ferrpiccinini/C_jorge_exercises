#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0;
    printf("digite o numero N");
    scanf("%d", &num);

    for(int i = 1; i <= num;i++){
        printf("%d ",i);
    }
}