#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    int n= 0;
    // pedir el nombre del archivo
    string narchivo;
    cout << "ingrese el nombre del archivo";
    cin >> narchivo;
    
    ofstream archivo(narchivo);
    
    // pedir la cantidad de numeros a generar
    //archivo << rand() << endl;
    // pedir el limite del rango y validar que no sea mayor a RAND_MAX
    
    
    cout << "ingrese la cantidad "<< endl;
    cin>>n;
    for(int i= 0; i<n; i++)
    {
        archivo << "numero" <<  i+1 << ":"<< rand()%3 << endl;
    }
   
    
   
    
    
   archivo.close();
    
    
    return 0;
}