#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dia, mes;
int main()
{
	printf("ingrese el dia");
	scanf("%f",&dia);
	printf("ingrese el mes");
	scanf("%f",&mes);
	
	if ((mes== 1 &&(dia >=20 && dia<=31)) || (mes==2 && dia<=18))
	{
		printf("tu signo es acuario");
	}
	else
	if ((mes== 2 &&(dia >=19 && dia<=28)) || (mes==3 && dia<=20))
	{
		printf("tu signo es piscis");
	}
	else
	if ((mes== 3 &&(dia >=21 && dia<=31)) || (mes==4 && dia<=19))
	{
		printf("tu signo es aries");
	}
	else
	if ((mes== 4 &&(dia >=20 && dia<=30)) || (mes==5 && dia<=20))
	{
		printf("tu signo es tauro");
	}
	else 
	if ((mes== 5 &&(dia >=21 && dia<=31)) || (mes==6 && dia<=20))
	{
		printf("tu signo es geminis");
	}
	else
	if ((mes== 6 &&(dia >=21 && dia<=30)) || (mes==7 && dia<=22))
	{
		printf("tu signo es cancer");
	}
	else
	if ((mes== 7 &&(dia >=23 && dia<=30)) || (mes==8 && dia<=22))
	{
		printf("tu signo es leo");
	}
	else
	if ((mes== 8 &&(dia >=23 && dia<=31)) || (mes==9 && dia<=22))
	{
		printf("tu signo es virgo");
	}
	else
	if ((mes== 9 &&(dia >=23 && dia<=30)) || (mes==10 && dia<=22))
	{
		printf("tu signo es libra");
	}
	else
	if ((mes== 10 &&(dia >=23 && dia<=31)) || (mes==11 && dia<=21))
	{
		printf("tu signo es escorpio");
	}
	else
	if ((mes== 11 &&(dia >=22 && dia<=30)) || (mes==12 && dia<=21))
	{
		printf("tu signo es sagitario");
	}
	else
	if ((mes== 12 &&(dia >=22 && dia<=31)) || (mes==1 && dia<=19))
	{
		printf("tu signo es capricornio");
	}
	
getch();
return 0;	
}
