#include<stdio.h>

int main(int argc, char *argv[]){
    if(argc < 2) printf("The format is ./cat.c <name_of_file> please input the argument");
    else{
        FILE *file = fopen(argv[1],"a");
        printf("Done the file %s is created %s",argv[1]);
    }
    return 0;
}

