#include <stdio.h>

int main (void){
    int i;

    for (i = 1; i <= 200; i = i + 1){
        if (i % 2 == 0){
            puts("Soh aprende a programar quem escreve programas");
        }else{
            puts("Quem nao escreve programas nao aprende a programar");
        }
    }

    return 0;
}
