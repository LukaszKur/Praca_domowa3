#include <stdio.h>



int main()
{
	int a,b,temp;
	printf("Podaj a: \n");
	scanf("%i",&a);
	printf("Podaj b: \n");
	scanf("%i",&b);
	while(b)
	{
		temp=b;
		b=a%b;
		a=temp;		
	}
	printf("NWD podanych liczb wynosi: %i",a);  
}
