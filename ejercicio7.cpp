#include <iostream>
using namespace std;

void concatena(char *, char *);

int main ()
{
   char cadena[100],cadena2[25];
   cout << "Escriba una cadena de caracteres  ";
   cin.getline(cadena,80);
   cout << "Escriba otra cadena  ";
   cin.getline(cadena2,80);
   concatena(cadena,cadena2);
   cout << cadena << endl;
}

void concatena(char *a, char *b) //a�ade la segunda cadena al final de la primera
{
    while(*a)
    {
       a++;      //llevamos el puntero hasta el final de la primera cadena
    }
    while(*b)    //mientras no lleguemos al final de la segunda cadena
    {
       *a=*b;    //copiamos el caracter
       a++;      //siguiente posici�n de la primera cadena
       b++;      //siguiente posici�n de la segunda cadena
    }
    *a='\0';     //a�adimos el nulo al final
}
