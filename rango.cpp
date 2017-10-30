#include <iostream>
#include <conio.h>

using namespace std;

//Calcula los numeros entre un rango comprendido
main () {
	int n1, n2, aux;
	int f=0, g=0;
	do{
		cout<<"Ingrese dos numeros\n";
		cin>>n1>>n2;
		if(n1==n2){
			cout<<"\n***ERROR 0x12833400c, Los dos numeros son iguales...***\n\n";
		}
	}while(n1==n2);
	if(n1>n2) {
		aux=n1;
		n1=n2;
		n2=aux;
	}
	cout<<"Los numeros dentro del rango de "<<n1<<" y "<<n2<<" son:\n";
	for(int i=n1; i<=n2; i++) {
		cout<<i<<" ";
	}
	getch();
}
