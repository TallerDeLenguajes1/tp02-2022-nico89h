#include <stdio.h>
#include <stdlib.h>
#define N 20
int main(){
    int i;
    double vt[N];
    for(i = 0;i<N; i++)
    {        
        vt[i]=rand () % 100 +1;
        printf("\n %f",vt[i]);
    }
}