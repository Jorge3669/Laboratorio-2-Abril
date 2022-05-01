#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int i, NOTAS[4], Totsumnot, PROM;
	printf("Promedio de notas de los 4 ciclos cursados: \n\n");
	for(i=1;i<5;i++){
		printf("Ingrese la nota del ciclo numero:%d \n", i);
		scanf("%d", &NOTAS[i]);
		printf("\n");
	}
	for(i=1;i<5;i++){
	Totsumnot +=NOTAS[i];
	}
PROM=Totsumnot/4;
	printf("El promedio de los 4 ciclos es: %d \n", PROM);
	system("pause");
}
