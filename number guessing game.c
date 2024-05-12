#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    int i;
    int num;
    int min = 0;
    int max = 100;
    srand(time(NULL));
    int randomNumber = min + rand() % (max - min +1);
    
    printf("Welcome to the number guessing game!!!\n");
    printf("Instructions:\nyou have Ten(10) chances the guess the randomly generated number\nGOODLUCK!!!\n\n");
    
    for(i = 0; i<=10; i++){
        printf("Input number\n");
        scanf("%d",&num);
        
        if(num < randomNumber){
            printf("Higher!\n");
        }
        else if(num > randomNumber){
            printf("Lower!\n");
        }
        else if(num == randomNumber){
            printf("%d is the correct number\n",num);
            break;
        }
        
        if(i==10){
            printf("Game Over!!!\n");
            break;
        }
    }
    
}