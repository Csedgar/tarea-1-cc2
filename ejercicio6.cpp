#include <iostream>
using namespace std;
void MostCad(int cad[],int tam){
	for(int i=0;i<tam;i++){
		cout<<cad[i]<<" ";}
}
void CopCad(int cad1[],int tam1,int cad2[],int tam2){
	for(int i=0;i<tam2;i++){
		cad1[tam1]=cad2[i];
		tam1++;}
}
void Copcadptr(int cad1[],int tam1,int cad2[],int tam2){
	int *ptr = cad1;
	ptr+=tam1;
	for(int i=0;i<tam2;i++){
		*ptr=cad2[i];
		ptr++;}
}
int main(){
	int cad1[30]={2,3,4,5,6};
	int cad2[25]={4,3,1,5,8};
	int tam1=5,tam2=5;
	MostCad(cad1,tam1);
	cout<<endl;
	MostCad(cad2,tam2);
	CopCad(cad1,tam1,cad2,tam2);
	cout<<"\nsin punteros= ";
	MostCad(cad1,tam1+tam2);
	cout<<"\ncon punteros=";
	Copcadptr(cad1,tam1,cad2,tam2);
	MostCad(cad1,tam1+tam2);
	return 0;
}

