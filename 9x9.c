#include <stdio.h>

int main_9x9_project(void){
    int i = 1, j =1;
    for (i=1; i<10; i++){
        for (j=1; j<10; j++){
        printf("%d x %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}