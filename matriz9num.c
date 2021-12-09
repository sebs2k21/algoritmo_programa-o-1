/* Faça um programa que leia 9 números e armazene em uma matriz de inteiros
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	int X[3][3], i, j;
	
	printf("Digite 9 valores: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d", &X[i][j]);
		}
	}

	printf("A Matriz Lida foi:\n ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("[%d]", X[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	system("Pause");
	return(0);
}

