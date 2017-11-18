
#include <stdio.h>
#include <conio.h>

int matriza[3][3], matrizb[3][3], matrizc[3][3];
int i, j;

main()
{
	printf("\t Matriz 1 \n");
	for(i=1; i<3 ; i=i+1)
	{
		
		for(j=1; j<3 ; j=j+1)
		{
		
		printf("[%d][%d]=  ", i,j);
		scanf("%d", &matriza[i][j]);
		
		}
		printf("\n");
	}
	printf("\t Matriz 2 \n");	
	for(i=1; i<3 ; i=i+1)
	{
		for(j=1; j<3 ; j=j+1)
		{
		
		printf("[%d][%d]=  ", i,j);
		scanf("%d", &matrizb[i][j]);
		
		}
		printf("\n");
	}
	
	for(i=1; i<3 ; i=i+1)
	{
		for(j=1; j<3 ; j=j+1)
		{
	
		matrizc[i][j]=matriza[i][j]+matrizb[i][j];
		}
		printf("\n");
	}
		for(i=1;i<3;i=i+1) {
			for(j=1;j<3;j=j+1){
				printf("\tResultado (%i,%i)= %i\n",i,j,matrizc[i][j]);
				
			}
		}
		
}
