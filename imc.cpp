#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float k,m,imc;


int main(){
	printf("escribe tu peso en kilogramos");
	scanf("%f",&k);
	printf("escribe tu altura en metros");
	scanf("%f",&m);
	imc=k/(m*m);
	
	
	if(imc<=15){
      printf("delgades muy severa");
	}
	
	if((imc>15) && (imc<15.9)){
		printf("delgadez severa");
	}
 
	if((imc>=16) && (imc<18.4)){
		printf("delgadez");
	}
	
	if((imc>=18.5) && (imc<24.9)){
		printf("peso normal");
	}
	
	if((imc>=25) && (imc<29.9)){
		printf("sobrepeso");
	}
	
	if((imc>=30) && (imc<34.9)){
		printf("obesidad moderada");
	}
	
	if((imc>=35) && (imc<39.9)){
		printf("obesidad severa");
	}
	
	if(imc>=40){
		printf("obesidad mórbida");
    }
    
    printf("tu imc es:%f",imc);
    
getch();
return 0;	
	
}
