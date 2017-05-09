#include <iostream>
 
 using namespace std;
 int main()
 {
     //variable normal
     
     int x = 10;
     cout<< x;
     cout << &x << endl; //direccion de una variable 
     cout << "la tamañio de x es :  " << sizeof(x) << endl;
     
    // variable puntero
    int* ptrX; // nomenclatura camello Ejemplo: nombreArchivo
                 // nomenclatur C  ejemplo: nombre_archivo
                 
                 
     // Asignando la direcion de x al puntero ptrX
     
    ptrX = &x;   
    cout << " el valor de ptrX es:" << ptrX << endl;
    cout << ""
                 
                 
                 
                 
                 
                 
 return 0;
 }