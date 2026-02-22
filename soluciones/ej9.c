
#include <stdio.h>
int main(){
    int a[5];
    
    
    printf("Direccion de memoria de: %p",&a[-1]);
    printf("\n");
    printf("Direccion de memoria de: %p",&a[5]);
    
    return 0;
}
//Explica:
//por qué compila: porque C solo aplica la formula para guardar direcciones y simplemente lo guarda
//por qué es peligroso: Corromper datos de otros arreglos y puede causar que el programa se cierre (Segmentation Fault)
//qué revela sobre memoria: que la memoria es continua y lineal
