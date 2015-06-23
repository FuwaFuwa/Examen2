// queue::push/pop

#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Celular.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;

//Escribe los datos del objeto celular (dado) en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varios celulares en un solo archivo
void escribir(string nombre_archivo, Celular*celular, int posicion)
{
    int x=22;


        ofstream out(nombre_archivo.c_str(),ios::in);
    out.seekp(posicion*x);
    out.write(celular->nombre.c_str(),20);
    out.write((char*)&celular->modelo,4);
    out.write((char*)&celular->precio,8);
    out.close();

}

//Devuelve un celular previamente escrito (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varios celulares de un solo archivo
Celular* leer(string nombre_archivo, int posicion)
{

int x=22;
        char*ch=new char[20];
    string name;
    int model=0;
    double price=0;
    ifstream in(nombre_archivo.c_str());
    in.seekg(posicion*x);
    in.read(ch,20);
    name=ch;
    in.read((char*)&model,4);
    in.read((char*)&price,8);
    in.close();
    Celular *c = new Celular(name,model,price);
    return c;
}

//Devuelve el precio del celular en la ultima posicion del archivo con nombre dado
double getUltimoPrecio(string nombre_archivo)
{



    return -1.0;
}

//Convierte la cola (dada) en una pila los datos deben de quedar en el mismo orden
//Nota: El tope de la pila debe de ser el frente de la cola
stack<char> convertirAPila(queue<char> mi_cola)
{
    stack<char> resultado;
    stack<char> temp;

    int x= mi_cola.size();


    for(int i=1;i<=x;i++){
    temp.push(mi_cola.front());


    mi_cola.pop();
   }

   int y = temp.size();


    for(int i=1;i<=x;i++){
    resultado.push(temp.top());
   temp.pop();
   }


    return resultado;
}

//Devuelve true si el set esta ordenado, de lo contrario devuelve false
bool estaOrdenado(set<int> mi_set)
{
    return true;
}

//Devuelve las tablas de los numeros del 1 al 10
//La llave es el numero de la tabla, el valor asociado es un vector que contiene la tabla de dicho numero
map<int,vector<int> > getTablas()
{
    map<int,vector<int> > mi_mapa;





    for(int i=1;i<=10;i++){
    vector<int> k6;
    for(int j=1;j<=10;j++){
    k6.push_back(i*j);

    }

    mi_mapa.insert(pair<int,vector <int> >(i,k6));
    }

    return mi_mapa;
}

//Devuelve la suma de todos los valores almacenados en el arbol con raiz dada
int getSuma(NodoBinario* raiz)
{


    return -1;
}

//Devuelve true si todos los valores de los nodos son primos, de lo contrario devuelve false
bool sonPrimos(NodoBinario* raiz)
{


    return false;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

