#include<iostream>

using namespace std;

void pedirDatos();
int calSuma(int vec[],int);
int vec[100],tam;

int main(){
	pedirDatos();
	cout<<"\nLa suma es: "<<calSuma(vec,tam)<<endl;
	return 0;
}

void pedirDatos(){
	cout<<"numero de elementos ";
	cin>>tam;

	for(int i=0;i<tam;i++){
		cin>>vec[i];
	}
}

int calSuma(int vec[],int tam){
	int suma=0;
	for(int i=0;i<tam;i++){
		suma += vec[i];
	}
	return suma;
}
