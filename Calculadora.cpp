#include<stdio.h>
#include<stdlib.h>
int main (){
	float a,b,c;
	int obj;
	printf("1.Suma\n2.Resta\n3.Multiplicacion\n4.Divicion\n");
	printf("Elije una opcion: ");
	scanf("%d",&obj);
	printf("Elige el primer operador: ");
	scanf("%f",&a);
	printf("Elige el segundo operador: ");
	scanf("%f",&b);
	if(obj==1){
		c=a+b;
	}
	else if(obj==2){
		c=a-b;
	}
	else if(obj==3){
		c=a*b;
	}
	else if(obj==4){
		while(b==0){
			printf("Error el segundo operador tiene que ser diferente a 0\n");
			printf("Introdusca el segundo operador: ");
			scanf("%f",&b);
		}
		c=a/b;
	}
	else{
		printf("Error\n");
		c=0;
	}
	printf("El resultado es %f",c);
}
