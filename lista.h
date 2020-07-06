#ifndef LISTA_H
#define LISTA_H
#include <iostream>

using namespace std;

template <class T>
struct nodo{
	T info;
	int clave;
	nodo<T> * sig;
};


template <class T>
class lista{
	nodo <T> *cab, *z;
	int tam;
			
	public: lista(T infomax){
		cab->sig=z;
		z->info = infomax; 
		z->sig = z;
		tam=0;		
	}
	
	bool lista_vacia();
	void insertar(int clave, T info);
	void buscar (int clave, T *infoRet);
	int len(){return tam;}			
};

template <class T>
bool lista<T>::lista_vacia()
{if(cab->sig == z)
    return true;
 else
 	return false;
}

template <class T>
void lista <T>::insertar(int cla, T info){
	nodo<T> *ant, *pos, *nuevo;
	
 	nuevo = new nodo <T>;
 	nuevo->clave = cla;
 	nuevo->info = info;
	ant=cab;
    pos = cab->sig;
	while(nuevo->clave > pos->clave){
		ant = pos;
		pos = ant->sig;
	}
	ant->sig = nuevo;
	nuevo->sig = pos;
	tam++; 
}	



template <class T>
void lista<T>::buscar(int clave, T *infoRet){
	nodo<T> *aux=cab;
	while(aux->clave < clave){
		aux = aux->sig;
    }
    *infoRet = aux->info;
}

#endif
