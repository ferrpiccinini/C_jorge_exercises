#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0; int y = 0;
    printf("insira o valor de x e y");
    scanf("%d %d", &x,&y);
    if(x<y){
        for(x; x <= y;x++){
            printf("%d ",x);
        }
    }
    else{
        printf("INVALIDO");
    }
}