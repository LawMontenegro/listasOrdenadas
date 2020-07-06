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
	T buscar (int clave, T *infoRet);
	bool borrar(int clave);
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
T lista<T>::buscar(int clave, T infoRet){
	nodo<T> *nuevo, *ant;
	bool respuesta = false;
	nuevo = new nodo<T>
	nuevo->clave = clave;
	nuevo->info = infoRet;
	while((ant->sig != NULL) && (ant->clave <= nuevo->clave)){
		if(ant->clave == nuevo->clave) {
			respuesta = true;
		}
		ant = ant->sig;
	}
	if(respuesta == true){
		return nuevo->info;
	} else {
		return false;
	}
    
}

template <class T>
bool borrar<T>::borrar(int clave){
	nodo<T> *nuevo, *ant,*pos;

}


#endif
