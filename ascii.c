#include<stdio.h>

int initializebox(){

int dash = 151;
int line = 124;
//ASCII values for a dash and line.

//i is equivalent to row
//j is equivalent to column
//We have a 7x5 square

int row = 20;
int column = 14;

int ziterate = round(column * 1.91);

for (int i=0; i<row;i++){
    if(i ==0 || i == row - 1){
    for(int j=0; j< column;j++){
            printf("%c", dash);
    }
    }
    if(i>0 && i< row-1){
            //if my column is 5 lines, then I will need 8 blank spaces. If my column is 6 lines, I will need 10
        printf("%c", line);
            for(int z=0; z<ziterate;z++){
                printf("*");
            }
        printf("%c\n", line);
        }else{
        printf("\n");
    }
}

}

int main()
{
    initializebox();

}



/*
printf("%c", dash);
printf("%c", dash);
printf("%c", dash);
printf("%c", dash);
printf("%c\n", dash);

printf("%c", line);
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf("%c\n", line);

printf("%c", line);
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf("%c\n", line);

printf("%c", line);
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf("%c\n", line);

printf("%c", line);
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf("%c\n", line);

printf("%c", line);
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf(" ");
printf("%c\n", line);

printf("%c", dash);
printf("%c", dash);
printf("%c", dash);
printf("%c", dash);
printf("%c", dash);
*/
