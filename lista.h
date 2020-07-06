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
	bool pertence(int clave);
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
bool lista<T>::pertenece(int clave){
	nodo<T> *nuevo, *ant;
	bool respuesta = false;
	nuevo = new nodo<T>
	nuevo->clave = clave;
	while((ant->sig != NULL) && (ant->clave <= nuevo->clave)){
		if(ant->clave == nuevo->clave) {
			respuesta = true;
		}
		ant = ant->sig;
	}
	return respuesta;
}


template <class T>
bool lista<T>::borrar(int num)
{      
  	if(cab->sig!=z)
	  {
  		nodo <T> *pos,*ant=NULL;
		cab=cab->sig;
       	pos=cab;
		      
		while(pos!=z && pos->Dato!=num)
		{
			ant = pos;
			pos= pos->sig;
		}
		if(pos==z){
			cout<<"El elemento no se encuentra en la lista"<<endl;
			return false; 	
		}
	  	else if(ant == NULL){
	  		cab=cab->sig;delete pos;
	  		tam --;
	  		return true;
		  	}
	 	else{
     		ant->sig= pos->sig;
     		delete pos;
     		tam --;
	  		return true;
			}
		}else{
			cout<<"No hay lista"<<endl;
		}
		
}


template <class T>
void lista<T>::recorrer()
{
	nodo <T> *actual;
	actual=cab;
	while(actual->Dato!=z ){
		//cout<<actual->dato<<end;
	actual=actual->sig;

	}	
}


#endif
