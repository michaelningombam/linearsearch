#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int arr[10]={4 , 6 , 9 , 1 , 45 , 50 , 2 , 23 , 80 , 91};
	int s,i;
	printf("the number to be checked:");
	scanf("%d", &s);

	for(i=0;i<10;i++)
	{
		if (arr[i]== s)
		{
			printf ("the number is present in the array\n");
			break;
		}
		else
		{
		printf("the number is not present");
		break;
		}
		
	}
	
	return 0;
}
