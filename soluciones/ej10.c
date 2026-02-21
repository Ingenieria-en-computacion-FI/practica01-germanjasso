#include <stdio.h>

int main(){
    int gigante[1000000];
   
    return 0;
}
//Si falla:
//explica la causa: falla porque el arreglo es mas grande de lo que puede guardar la memoria stack (pila)
//indica dónde se almacena: en la memoria stack
//propone solución sin memoria dinámica: guardarlo en la memoria global, basicamente poner la variable fuera del main()
