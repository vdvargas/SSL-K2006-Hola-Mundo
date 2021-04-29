#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int edad;
	char nombre [21];
	printf("%s","Ingrese su nombre:");
	scanf("%s", nombre);
	printf("%s","Ingrese su edad:");
	scanf("%d", &edad);
	printf("Hola %s, su edad es %d \n",nombre,edad);
	system("pause");
	return 0;
	}