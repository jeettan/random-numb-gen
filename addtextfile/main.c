//Made by Jeet Tan on 28/10/2022

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    FILE *fp;
    
    fp = fopen("file.txt", "w");

    for (int i =0; i< 101; i++){
    
    fprintf(fp, "This was using fprintif\n");

    fprintf(fp, "This second line was also made using fprintif\n");

}
    
    fclose(fp);
    
    return 0;
}
