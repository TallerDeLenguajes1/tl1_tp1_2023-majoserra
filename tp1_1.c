#include<stdio.h>

int main(){
    int *puntero, num;

    num = 2;
    puntero = &num;

    printf("\nContenido del puntero: %i", *puntero);
    printf("\nDirección de memoria almacenada por el puntero: %i", puntero);
    printf("\nDirección de memoria de la variable: %i", puntero);
    printf("\nDirección de memoria del puntero: %i", &puntero);
    
    return 0;
}