#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7
int main(){
    int i,j;
    int mt[N][M];
    //punteros
    int *Pmt;
    Pmt=&(mt[0][0]);
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *Pmt= rand() % 100 + 1;//si anda
            printf("--%d--", *Pmt);
        }
        printf("\n");
        Pmt=Pmt + (i * N + j);
    }
}