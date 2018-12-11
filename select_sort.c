#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void select_sort (char num [],int tam){
	int i,j,k,min,aux;
	for (i = 0; i < (tam-1); i++)
	{
		min = i;
		for (j = 0; j < tam; j++)
		{
			if(num[j] < num[min])
			min = j;
		}
		if(num[i] != num[min]){
			aux = num[i];
			num[i] = num[min];
			num[min] = aux;
		}
	}
	printf("%s\n", num);
}


int main(int argc, char const *argv[])
{
	int	len;
	char str[256];
	printf("digite a sequencia de numeros para ser ordenada: ");
	gets(str);
	len = strlen(str);
	select_sort(str,len);
	return 0;
}