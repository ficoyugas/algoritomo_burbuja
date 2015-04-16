#include <iostream>
using namespace std;

void imprimeVectorReales(const double vector[], int util){

	cout << "[";

	for (int i=0;i<util;i++)
	{
		if (i<util-1)
			cout << vector[i] << "|";
		else
			cout << vector[i] << "]" << endl;
	}
}

int main(){
	const int DIM=100;
	double vector_reales[DIM]={5.30,6.50,1.20,4.98,45.10,12.00,3.14};
	int util=7;
	int i, izq;
	double aux;
	bool cambio=true;

	cout << endl << "Vector Desordenado: ";
	imprimeVectorReales(vector_reales,util);

	cout << endl;
	for (izq=0; izq<util && cambio; izq++){
		cambio=false;
		for(i=util-1;i>izq;i--){
			if(vector_reales[i]<vector_reales[i-1]){
				cambio=true;

				aux=vector_reales[i];
				vector_reales[i]=vector_reales[i-1];
				vector_reales[i-1]=aux;
			}
		}

		cout << "   Ordenando Vector ";
		imprimeVectorReales(vector_reales,util);

	}
}