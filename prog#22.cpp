#include <stdio.h>
int i,j,es;
int matriz[3][3], matrizb[3][3];

main ()
{
	printf("Dame lo valores de la matriz\n");
	for(i=1; i<3; i=i+1)
	{
		for(j=1; j<3; j=j+1)
		{
			printf("[%d][%d]= ", i,j);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	printf("Dame el valor del numero escalar");
	scanf("%d",&es);
	for(i=1; i<3; i=i+1)
	{
		for(j=1; j<3; j=j+1)
		{
			matriz[i][j]= matriz[i][j]*es;
		}
		printf("\n");
	}
	for(i=1; i<3; i=i+1)
	{
		for(j=1; j<3; j=j+1)
		{
			printf("el resultado es = [%d]\n", matriz[i][j]);
		}
	}
}
