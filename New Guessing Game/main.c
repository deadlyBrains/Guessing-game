#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*
int main()
{
    int numberGuessed;
    int noOfGuesses;
    int secretNumber = "7";

    printf("Enter number: %d", numberGuessed);
    scanf("%d", &numberGuessed);
    /*printf("Your number is %d", numberGuessed);*/


/*    if(numberGuessed > secretNumber){
        printf("The number is greater");

    }
    else if (numberGuessed < secretNumber) {
        printf("The number guessed is smaller");
    }
    else if (numberGuessed == secretNumber) {
        printf("U have got it right\n");
        printf("Number of tries: %d", noOfGuesses);
    }

    while (numberGuessed > secretNumber) {
        printf("Your no. is big\n");
        printf("Please try again. Enter you Number: %d", numberGuessed);
        scanf("%d", &numberGuessed);
    }

    return 0;
}
*/

int main() {

    int numberGuessed;
    int noOfGuesses = 1;
    int number;
    srand(time(0));
    number = rand()%100 + 1;

    /*printf("The no. is %d\n", number);*/

    do {
        printf("Guess the right number : ");
        scanf("%d", &numberGuessed);
        if (numberGuessed > number) {
            printf("The secret number is lower.\n");
        }
        else if (numberGuessed < number) {
            printf("Higher number please\n");
        }
        else {
            printf("You have got it right!!! :D\n");
            printf("You took %d number of tries to attempt it\n", noOfGuesses);
        }
        noOfGuesses++;
    }
    while(numberGuessed != number);

    return 0;
}




























