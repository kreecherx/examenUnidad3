#include <iostream>

using namespace std;

//Calcula los numeros entre un rango comprendido
main () {
	char ch;
	int n1, n2, aux;
	int f=0, g=0;
	do{
		do{
			cout<<"Ingrese dos numeros\n\n";
			cout<<"Ingrese un numero\n";
			cin>>n1;
			cout<<"Ingrese otro numero\n";
			cin>>n2;
			if(n1==n2){
				cout<<"\n***ERROR 0x12833400c, Los dos numeros son iguales...***\n\n";
			}
		}while(n1==n2);
		if(n1>n2) {
			cout<<"\n\nEl primer numero es mayor al segundo... Cambiando el orden de los numeros...\n\n";
			aux=n1;
			n1=n2;
			n2=aux;
		}
		cout<<"Los numeros dentro del rango de "<<n1<<" y "<<n2<<" son:\n";
		for(int i=n1; i<=n2; i++) {
			cout<<i<<" ";
		}
		cout<<"\n\nDesea ver los numeros dentro de otro rango? (S/N) ";
		cin>>ch;
		if(ch=='N' || ch=='n'){
			cout<<"Adios :(\n";
			system("pause && exit");
		}
	}while(ch=='S' || ch=='s');
}
