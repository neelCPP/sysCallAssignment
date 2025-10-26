#include<stdio.h>

int main(int argc, char *argv[]){
    if(argc < 2) printf("The format is ./touch.c <address_of_file> please input the required argument");
    else{
        FILE *fp = fopen(argv[1], "r");
        if(fp == NULL) printf("file not found please recheck the name!");
        else{
            char c;
            while((c = fgetc(fp)) != EOF){
                printf("%c",c);
                sleep(1);
            }
        }
    };
    return 0;
}
