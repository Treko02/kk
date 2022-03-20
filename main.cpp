#include <iostream>
using namespace std;

int factorial(int);
float potencia(float, int);
int suma(int [],int);
float media(int [],int);
int maximo(int [],int);
int minimo(int [],int);


int main()
{
    int n;

    do {
        cout << "1. Dar de alta  un estudiante" << endl;
        cout << "2. Dar de alta  la nota de un estudiante en una asignatura" << endl;
        cout << "3. Mostrar informaciÃ³n de los estudiantes de una signatura" << endl;
        cout << "4. Salir" << endl;
        cin >> n;

        switch (n) {
            case 1:
            {
                //completar

                break;
            }
            case 2:
            {
                //completar

                break;
            }
            case 3:
            {


                break;
            }
            case 4: {

                break;
            }
            default:
            {
                cout << "Opcion no valida" << endl;
            }
        }
    } while (n != 4);
}
	return 0;
}




// Ejercicio 1. FunciÃ³n recursiva para calcular el factorial de un nÃºmero.
/*
{Pre: }
{Post: }
*/
int factorial(int n){
    int fact=1;
    if (n==0){
        return fact;
    }else{
        return fact=n*factorial(n-1);

    }

}


// Ejercicio 2. FunciÃ³n recursiva para calcular el cÃ¡lculo de la potencia de a elevado a n.
/*
{Pre: }
{Post: }
*/
float potencia(float a, int n){

}


// Ejercicio 3.a. Suma las componentes de un vector. Recuerda que el segundo parÃ¡metro de
// la funciÃ³n representa el tamaÃ±o del vector, no la posiciÃ³n de la Ãºltima componente.
/*
{Pre: }
{Post: }
*/
int suma(int v[],int n){

}


// Ejercicio 3.b. Calcula la media de los elementos de un vector.
/*
{Pre: }
{Post: }
*/
float media(int v[],int n){

}

// Ejercicio 3.c. Calcula el mÃ¡ximo de los elementos de un vector.
/*
{Pre: }
{Post: }
*/
int maximo(int v[],int n){

}

// Ejercicio 3.d. Calcula el mÃ­nimo de los elementos de un vector.
/*
{Pre: }
{Post: }
*/
int minimo(int v[],int n){

}









