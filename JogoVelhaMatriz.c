#include<stdio.h>
#define DIM 3

int main(void){
    char velha[DIM][DIM]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int i,j;

    velha[0][0]='X';
    velha[0][2]='0';
    velha[1][1]='X';   
    velha[2][2]='0';
    

    for (i=0;i<DIM;i++){
        for (j=0;j<DIM;j++)
            printf("%c %c", velha[i][j],j==DIM-1?' ':'|');
        if (i!=DIM-1) printf("\n-----------\n");
    }
    printf("\n");
}