#include<stdio.h>

int main(void){

    int i, j;
    int mx[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int my[2][3] = {{6, 3, 4}, {5, 1, 2}};
    int mz[2][3];

    for(i = 0; i < 2; i++){
        for(j = 0; j < 3; j++) {
            mz[i][j] = mx[i][j] - my[i][j];
        }
    }

    for(i=0;i<2;i++){
        for(j = 0; j < 3; j++){
            printf("%3d", mz[i][j]);
        }
        putchar('\n');
    }

    return 0;
}