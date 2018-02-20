/*
@author:
 * Jhon velasco
 * @frediv0406
 * Estudiante: Ing.Sistemas UDI
*/
//sf=serie fibonacci
#include <stdio.h>
int main () {
	int a=1,b=1,c,n,contador=0,i;
	printf("Digite n\n");
	scanf("%d",&n);
	while(c<=n){//recorera la sf hasta un valor dado
		if(c%2!=0)//comprueba si es impar
		contador+=c;//lleva la suma de los numeros impares dentro la sf
		c=a+b;
		a=b;
		b=c;
	}
	printf("Suma de numeros primos: %d ",contador );
}

