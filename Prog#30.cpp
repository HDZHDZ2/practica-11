#include<stdio.h>
#include<conio.h>

float gastos[13],p=0;
int cont;
const char *mes[]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
main()
{	
	for(cont=1;cont<13;cont++)
	{	
		printf("Ingrese los gastos de %s :",mes[cont-1]);
		scanf("%f",&gastos[cont]);
		p=p+gastos[cont];
	}
	p=p/12;
	printf("\nEl promedio de gastos anual es: %.2f",p);
	
	printf("\nGastos de %s son: %f",mes[6-1],gastos[6]);
	printf("\nGastos de %s son: %f",mes[12-1],gastos[12]);
getch();
}
