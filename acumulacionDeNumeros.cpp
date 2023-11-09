#include<iostream>

int main(){
	int suma =0;
	int numero=0;
	while(suma<=100){
		printf("ingresa un numero entero: ");
		scanf("%d", &numero);
		suma+=numero;
	}
	printf("el resultado de la acumulacion es:%d\n", suma);
	return 0;
}
