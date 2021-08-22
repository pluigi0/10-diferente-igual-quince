#include<stdio.h>
#include<math.h>

int main ()
{
	int numero;
	int i,s=1;
	int resultado = 1;
	
	while(s=1)
	{
		printf("\n\t PROGRAMA QUE IMPRIME QUINCE SI INGRESAS 15 Y SI INGRESAS UN # DIFERENTE DE 15... INTENTALO MEJOR");
		printf("\n\t Introduce cualquier numero que desees\n");
		scanf("%d", &numero);
		
		if (numero == 15)
		{
			printf ("quince\n");
		}
		
		else
		{
			for (i=1; i<=3;i++) 
			{
				resultado*= numero;
			}
			printf("La potencia al cubo de %d es: %d \n", numero, resultado);
		}

	}
	return 0;
}
