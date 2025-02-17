/*
Asignacion 2: Suma de dos fracciones 
Nombre: Maria A. Nieves Rivera
Num. Est: 801-19-5581
Colaboraciones:
- I. Gonzalez Albino
*/

#include <iostream>
using namespace std;

/* Se estara realizando una suma de fracciones por lo que iniciamos 
definiendo la funcion para calcular el minimo comun multiplo(mcm).
*/
int mcm(int a, int b) {
    int maximo = a; 

    // Buscamos el primer numero que sea divisible por 'a' y 'b'.
    while (true) {
        // Comprobamos si 'maximo' es divisible por ambos.
        if (maximo % a == 0) {
            if (maximo % b == 0) {
                return maximo;  
            }
        }
        /*Si no se devuelve un valor eso indica que no es divisible por ambos,
        se procede a aumentar el numero hasta alcanzar el numero minimo que sea divisible por 'a' y 'b'
        */
        maximo++;  
    }
}

int main() {
   // Descripcion
   cout << "Este programa suma dos fracciones." << endl; 

   // Variables para numeradores y denominadores
   int num1, den1, num2, den2;

   // Pedir entrada a usuario
   cout << "Entre el numerador de la primera fraccion: ";
   cin >> num1;
   cout << "Entre el denominador de la primera fraccion: ";
   cin >> den1;
   cout << "Entre el numerador de la segunda fraccion: ";
   cin >> num2;
   cout << "Entre el denominador de la segunda fraccion: ";
   cin >> den2;

   // Calcular denominador comun
   int den_comun = mcm(den1, den2);
   
   // Ajustar numerador
   int num_nuevo = (num1 * (den_comun/den1)) + (num2 * (den_comun/den2));

   // Exportar resultado
   cout << "La suma es " << num_nuevo << "/" << den_comun << ".\n";

   return 0;
        
}
