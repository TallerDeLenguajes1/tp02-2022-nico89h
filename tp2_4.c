//inicio del ejercicio 4 de el tp2 de taller
#include <stdio.h>
#include <stdlib.h>
struct compu {
    int velocidad;//entre 1 y 3 Gherz
    int anio;//entre 2000 y 2017
    int cantidad;//entre 1 y 4
    char *tipo_cpu; //valores del arreglo tipos
};
void listaPC(struct compu *nose);
void vieja(struct compu *nose);
void mayorVelocidad(struct compu *nose);
int main(){
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    struct compu arreglo[5];//aca se guardaran las 5 pc
    int contador=0;
    for (int i = 0; i < 5; i++)
    {
        printf("Velocidad de la pc en  Gherz, el valor tiene que estar entre 1 y 3");
        scanf("%d",&arreglo[i].velocidad);
        while (arreglo[i].velocidad>3 || arreglo[i].velocidad<1)
        {
            printf("Velocidad de la pc en  Gherz, el valor tiene que estar entre 1 y 3");
            scanf("%d",&arreglo[i].velocidad);
        }
        
        printf("Año de la fabricacion de la pc, considere que el año tiene que estar entre 2000 y 2017");
        scanf("%d",&arreglo[i].anio);
        while (arreglo[i].anio<2000 || arreglo[i].anio>2017)
        {
            printf("Año de la fabricacion de la pc, considere que el año tiene que estar entre 2000 y 2017");
            scanf("%d",&arreglo[i].anio);
        }
        
        printf("Cantidad de nucleos de la pc, considere que la cantidad debe ser entre 1 y 4");
        scanf("%d",&arreglo[i].cantidad);
        while (arreglo[i].cantidad<1 || arreglo[i].cantidad>4)
        {
            printf("Cantidad de nucleos de la pc, considere que la cantidad debe ser entre 1 y 4");
            scanf("%d",&arreglo[i].cantidad);
        }
        printf("Cual es tu procesador?, 1-Intel ,2-AMD ,3-Celeron ,4-Athlon, 5-Cor 6-Pentium");
        scanf("%d",&contador);
        while (contador>6 || contador<1)
        {
            printf("Cual es tu procesador?, 1-Intel ,2-AMD ,3-Celeron ,4-Athlon, 5-Cor 6-Pentium");
            scanf("%d",&contador);
        }
        switch (contador)
        {
        case 1:
            arreglo[i].tipo_cpu=tipos[1];
            break;
        case 2:
            arreglo[i].tipo_cpu=tipos[2];
            break;
        case 3:
            arreglo[i].tipo_cpu=tipos[3];
            break;
        case 4:
            arreglo[i].tipo_cpu=tipos[4];
            break;
        case 5:
            arreglo[i].tipo_cpu=tipos[5];
            break;
        default:
            arreglo[i].tipo_cpu=tipos[6];
            break;
        }
    }
    listaPC(&arreglo[0]);
    mayorVelocidad(&arreglo[0]);
    vieja(&arreglo[0]);
}
void listaPC(struct compu *nose){
    //tengo que mostrar por pantalla las distintas pc
    for (int i = 0; i < 5; i++)
    {
        printf("\nEl año de la pc es: %d",nose->anio);
        printf("\nLa velocida de la pc es: %d",nose->velocidad);
        printf("\nla cantidad de nucleos que posee la pc es: %d",nose->cantidad);
        printf("\nEl procesador de la pc es: %s",nose->tipo_cpu);
        nose++;
    }
}
void mayorVelocidad(struct compu *nose){
    int velocidades[5];
    for (int i = 0; i < 5; i++)
    {
        nose[i].velocidad=velocidades[i];
    }
    //la maxima velocidad puede ser 3
    int mayor=3;
    int ola=0;
    int i=0;
    for ( int j = 4; j>= 0; j--)//con el e determino la posicion en la que se encuentra la mayor velocidad
    {
        for (i; i < 5; i++)
            {
                if (velocidades[j]>=velocidades[i] && velocidades[j]>=ola)
                {
                    ola=velocidades[j];
                }else if(velocidades[i]>=velocidades[j] && velocidades[i]>=ola)
                {
                    ola=velocidades[i];
                }
            }
            i=0;
    }
    int contador=0;
    for (int e = 0; e < 5; e++)
    {
        if (nose->velocidad==ola && contador==0)
        {
            printf("La pc con mayor velocidad tiene estas caracteristicas: ");
            printf("\nEl año de la pc es: %d",nose->anio);
            printf("\nLa velocida de la pc es: %d",nose->velocidad);
            printf("\nla cantidad de nucleos que posee la pc es: %d",nose->cantidad);
            printf("\nEl procesador de la pc es: %s",nose->tipo_cpu);
            contador++;            
        }
        nose++;
    }
    
}
void vieja(struct compu *nose){
    int anio[5];
    for (int i = 0; i < 5; i++)
    {
        nose[i].anio=anio[i];
    }
    //la maxima velocidad puede ser 3
    int mayor=3;
    int ola=0;
    int i=0;
    for ( int j = 4; j>= 0; j--)//con el e determino la posicion en la que se encuentra la mayor velocidad
    {
        for (i; i < 5; i++)
            {
                if (anio[j]>=anio[i] && anio[j]>=ola)
                {
                    ola=anio[j];
                }else if(anio[i]>=anio[j] && anio[i]>=ola)
                {
                    ola=anio[i];
                }
            }
            i=0;
    }
    int contador=0;
    for (int e = 0; e < 5; e++)
    {
        if (nose->anio==ola && contador==0)
        {
            printf("La pc mas vieja tiene estas caracteristicas: ");
            printf("\nEl año de la pc es: %d",nose->anio);
            printf("\nLa velocida de la pc es: %d",nose->velocidad);
            printf("\nla cantidad de nucleos que posee la pc es: %d",nose->cantidad);
            printf("\nEl procesador de la pc es: %s",nose->tipo_cpu);
            contador++;            
        }
        nose++;
    }
}