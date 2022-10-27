
//This program takes an input, and generates a random number between 1 and 1 million, X amount of times. X is the input of how many iterations you want.

//After calculation, the program lists how many of the numbers generated that were above the number 500,000 and proceeds to list all of the numbers.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define size 12

int main(int argc, const char * argv[]) {

    int x = 0;
    int input;
    int randomCount = 0;
    int data[100];
    
    //int Data is used to store the numbers that are over 500,000
    
    srand(time(NULL));
    
    //srand to randomize the rand() function
    
    printf("How many randomly generated numbers:\n");
    scanf("%d", &input);

    for (int i=1;i < input + 1; i++){
        
    x = rand() % 1000001;
    
    printf("%i. Randomly generated number: %d \n",i, x);
        
        if (x > 500000) {
            data[randomCount] = x;
            randomCount = randomCount + 1;
            
            //records a count if the number is over 500,000
        }
    
    }
    
    
    //Randomcount counts how many numbers are over 500,000
    printf("The program had %d numbers that were over 500,000\n", randomCount);
    printf("The numbers are:\n");
    
    
    //For loop in y to loop through the array and display the data.
    
    for (int y = 0; y < randomCount; y++){
    printf(" %i : %i \n", y+1, data[y]);
    
    }
    
    //They store the numbers that were over 500,000 into an array and print it.
    return 0;
}

//Possible improvements: Random numb generator is not random enough.
