#include "pila.h"

/* Función que usa la sobrecarga de operadores definida en la clase
Pila. Se declara un objeto tipo Pila de enteros, luego se le insertan
MAX elementos y por último, mientras la pila no esté vacía, se quitan y
se imprimen cada uno de los valores almacenados en la misma. */ 
int main(){
    
    Pila <int> ObjPila;
    int Indice;

/* Si la pila está vacía se le agregan MAX elementos, usando el
operador sobrecargado +. */
    if (ObjPila.PilaVacia()){
        for (Indice= 0; Indice < MAX; Indice++){
            ObjPila + Indice*2;
        }
    }

/* Mientras la pila no se vacíe, se quita un elemento, usando el
operador – sobrecargado, y se imprime. */
    while (!ObjPila.PilaVacia()){
        ObjPila - &Indice;
        cout<< '\n'<<Indice;
    }
    return 0;
}