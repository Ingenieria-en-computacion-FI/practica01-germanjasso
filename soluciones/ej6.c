
#include <stdio.h>
int main(){
   int m[2][4];
    
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            printf("\nDireccion de m[%i][%i] : %p\n",i,j, &m[i][j]);
        }
    }

    return 0;
}
//2.-Determina si almacenamiento es por filas o columnas. Se almacena por filas
//3.-Deduce fórmula de dirección de m[i][j]: Base + ((i x columnas)+ j ) x tamaño
