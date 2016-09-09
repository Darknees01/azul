#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string cadena = 0;
    string aux_cadena = "";
 
    for (int i = cadena.size(); i >=0 ; i--)
         aux_cadena += cadena[i];
 
    cout<<"El texto normal es: "<<cadena<<endl;
    cout<<"El texto invertido es: "<<aux_cadena<<endl;
}
