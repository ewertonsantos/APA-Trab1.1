#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void insertion_sort(char vetor[], int tamanhoVetor) {

int escolhido, j,i;

    for (i = 1; i < tamanhoVetor; i++) {
		escolhido = vetor[i];
		j = i - 1;
		
		while ((j >= 0) && (vetor[j] > escolhido)) {
			vetor[j + 1] = vetor[j];
			j--;
		}
		
		vetor[j + 1] = escolhido;
	}
	printf("%s\n", vetor);
}

int main(int argc, char const *argv[])
{
	int	len;
	char str[256];
	printf("digite a sequencia de numeros para ser ordenada: ");
	gets(str);
	len = strlen(str);
	insertion_sort(str,len);
	return 0;
}