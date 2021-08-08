#include <iostream>
#include <math.h>

using namespace std;

void kilometrosametros(){
	int kilometros,metros;
	
	cout<<"****************************"<<endl;
	cout<<"*    kilometros a metros   *"<<endl;
	cout<<"****************************"<<endl;
	cout<<"cuantos kilometros desea invertir: ";
	cin>>kilometros;
	metros = kilometros * 1000;
	cout<<kilometros<<" kilometros equivale a: "<<metros<<" metros "<<endl;
	
	system("pause");
	system("cls");
}

void metrosapulgadas(){
	int metros,pulgadas;
	
	cout<<"****************************"<<endl;
	cout<<"*     metros a pulgadas    *"<<endl;
	cout<<"****************************"<<endl;
	cout<<"cuantos metros desea convertir: ";
	cin>>metros;
	pulgadas = metros * 39.37;
	cout<<metros<<" metros equivale a: "<<pulgadas<<" pulgadas "<<endl;
	
}

int main(int argc, char** argv) {
	kilometrosametros();
	metrosapulgadas();

return 0;
}


