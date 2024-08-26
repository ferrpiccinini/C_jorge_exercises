#include<stdio.h>
#include<stdlib.h>


int search(int *vector, int n, int x){
    for(int i = 0; i < n; i++){
        if(vector[i] == x){
            return 1;
        }
    }
    return 0;
}

int index_of(int *vector, int n, int x){
    for(int i = 0; i < n; i++){
        if(vector[i] == x){
            return i;
        }
    }
    return -1;
}

int append(int *vector, int n, int x){
    return vector[n-1] = x;
}

int insert(int *vector, int n, int x,int i){
    return vector[i] = x;
}

int remove(int *vector, int n, int x){
    return vector.erase(2);
} 




int main(){
    int arr[6] = {1,2,3,4,5};
    const int MAX = sizeof(arr)/sizeof(arr[0]);

    int retorno = search(arr,MAX,3);
    printf("%d",retorno);
    
    printf("\n");

    int retorno1 = index_of(arr,MAX,3);
    printf("%d",retorno1);
    
    printf("\n");

    append(arr,MAX,10);
    printf("%d",arr[5]);

    printf("\n");

    insert(arr,MAX,10,1);
    printf("%d",arr[1]);

}