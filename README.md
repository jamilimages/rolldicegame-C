# Roll Dice Game
A roll dice game created in C


# What I've learned
- Using Dev-C++ to create this C program
- the use of the 'time.h' library to randomly generate the integer for user input

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

```
- I used a for loop to calculate the 'counttime' variable based on user input
- using the 'rand' function to calculate the number of sides of a dice = totaling 6 sides
```c
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

```
- If statement - if the countTime is equal to 0 then exit the program.
```c
	// If statement - if the countTime is equal to 0 then exit the program...
	if(countTime != 0)
		{
		printf("Dice: %d\t\t", dice);
		
		}
	}
```

# Example of the game
![rolldicegame](https://user-images.githubusercontent.com/36749450/93713522-819d7680-fb2a-11ea-9cae-bf1b3f3f685c.PNG)

