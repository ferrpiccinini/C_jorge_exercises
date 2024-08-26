#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,y;
    printf("digite dois numeros: ");
    scanf("%d %d", &x,&y);
    if(x>y){
        printf("numero maior: %d, menor: %d",x,y);
    }
    else{
        printf("numero maior: %d, menor: %d",y,x);
    }
}
