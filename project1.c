#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//time(NULL) gets the current calendar time

int main(void){
    int n;
    char wish;
    int range,diff,attempt;
    srand(time(NULL));  //basically when i do just %100 is remainder so remainder after dividing by 100 but we need 1 to 100 so +1
    int guess;
    

   do{
    int win=0;
    printf("Enter the difficulty you want to play \n");
    printf("Enter your choice (1-3) \n");
    printf("1. Easy   (Range: 1-50,  10 attempts)\n");
    printf("2. Medium (Range: 1-100, 7 attempts)\n");
    printf("3. Hard   (Range: 1-200, 5 attempts)\n");
    scanf("%d",&diff);

    if (diff==1)
    {
        attempt=10;
        range=50;
    } 
    else if (diff==2)
    {
        attempt=7;
        range=100;
    }
    else if (diff==3)
    {
        attempt=5;
        range=200;
    }
    else{
        printf("Well you entered random difficulty so setting to medium \n");
        attempt=7;
        range=100;
    }
    
     n = rand() % range + 1;

    for(int i=0;i<attempt;i++){
    printf("\n[Attempt %d/%d | %d left] Enter your guess (1-%d): ", i + 1, attempt, attempt - i, range);
    scanf("%d",&guess);

    if(guess<1||guess>range){
        printf("Limit exceeded \n");
        i--;
        continue;
    }
    if (guess>n)
        printf("Guessed high \n");

    else if (guess<n)
        printf("Guessed low \n");
        
    else if (guess==n){
        printf("Correct guess \n");
        printf("total guesses take is %d \n",i+1);
        win=1;
        break;  //return 0 better or use exit(0) if using stdlib
    }
    }
    if(win==0){
    printf("Game Over , You couldnt guess it lol. Btw the number was %d",n);
    }
    printf("\n Well do you wish to play again ? (Y/N only):");
    scanf(" %c",&wish);
   } 
while (wish=='y'||wish=='Y');

    return 0;
}