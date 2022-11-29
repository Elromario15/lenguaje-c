#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int auxiliar,n1,n2;
int main()
{
	printf("ingresa el primer numero");
	scanf("%i",&n1);
	printf("ingresa el segundo numero");
	scanf("%i",&n2);
	
	if (n1>n2)
	{
		auxiliar=n1;
		n1 = n2;
		n2 = auxiliar;
		
		printf("el valor del primer numero es: %i",n1);
		printf("el valor del segundo numero es: %i",n2);	
	}
	
	if (n1 == n1)
	{
		printf("error no se pueden intercambiar los valores");
	}
	
	if (n1<n2)
	{
      printf("error los valores no se intercambian se quedan igual ");
	}
getch();
return 0;	
}


