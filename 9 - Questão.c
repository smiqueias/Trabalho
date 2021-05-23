#include <stdio.h>
#include <stdlib.h>

int main(){

    int valores[5];

    for(int i = 0; i < 5; i++){
        printf("- Informe o valor %d: ", i + 1);
        scanf("%d", valores + i);
    }

    for(int j = 0; j < 5; j++){
        printf("%d", *(valores + j) *2);
    }

    for(int k = 0; k < 5; k++){
        if(*(valores + k) %2 == 0){
            printf("\n%p", valores + k);
        }
    }
    return 0;
}