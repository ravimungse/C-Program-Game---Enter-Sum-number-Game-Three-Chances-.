//define a game like program in which user has to enter an even number to win the game
//user will get at most atleast 3 chance  to win//
#include<stdio.h>
main()
{
	int a,i=1;
	while(i<=3)
	{
		printf("Enter The Even number = ");
		scanf("%d",&a);
		i++;
		if(a%2==0)
		{
		printf("You won");
		break;	
		printf("what");
		}
	}
	if(i==4)
	printf("You lost");
	
	getch();
}
