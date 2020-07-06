#include <iostream>
#include "lista.h"
using namespace std;



int main(int argc, char** argv) {
	int pos=1;
	int index;
	lista<int> a(200);
	//enteros int clave, t info.
	a.insertar(1,2);
	/*
	
	while(pos<=a.len()){
		a.buscar(pos, &index);
		cout<<index<<endl;
		pos++;
	}
	cout<<endl<<"tam: "<<a.len()<<endl;*/
	
	return 0;
}


