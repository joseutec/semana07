#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "limite maximo de random" << RAND_MAX << endl<< endl;
    
    // genewrar 10m numewro random
    for(int i=0; i<10; i++)
    {
      cout << "numero" << i+1 << ":"<< rand() << endl; 
    }
    
    // generar 10 numeros  entre el rango de 0 a 99
     for(int i=0; i<10; i++)
     {
         cout << "numero"
     }
    
    
    
    
// generar 10 numeros randoms entre el rango de 0 a 1
for(int i=0; i<10; i++)
cout << "numero" <<  i+1 << ":"<< rand()/floatRAND_MAX << endl; 
    
    
    
    
    return 0;
}