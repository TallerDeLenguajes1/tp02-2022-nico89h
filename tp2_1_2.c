#include <stdio.h>
#include <stdlib.h>
#define N 20
int main(){
    int i;
    double vt[N];
    double *Pvt;
    Pvt=vt;//apunta al primer elemento de la cadena
    //se tiene que recorrer la cadena por puntero 
    for(i = 0;i<N; i++)
    {        
        *Pvt=rand () % 100 + 1;
        printf("\n %f",*Pvt);
        Pvt++;//recorro el vector
    }
}