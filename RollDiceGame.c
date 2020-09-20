#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// Jamil Matheny
// 04.01.2020


int main()
{
	// Variables 
	int i;
	int dice;
	int countTime;
	srand(time(NULL));
	
	printf("Let's Play! How many times you wanna roll? ");
	scanf("%d", &countTime);
	
	// For loop for running how many times the program will run... 
	for(i=0; i<countTime; i++)
	{
		
		dice = ( (rand() % 6) + 1);
	
	// If statement - if the countTime is equal to 0 then exit the program...
	if(countTime != 0)
		{
		printf("Dice: %d\t\t", dice);
		
		}
	}
	
	// Exit program... and message by yours truly!
	system("pause");
	puts("");
	puts("||==Thank you for playing! Roll Dice game by Jamil Matheny==||\n");

    
	return;
}
