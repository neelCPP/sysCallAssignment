#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
    char s[10] = "--help";
    if(argc < 2) printf("invalid format for more info use touch.c --help");
    else{
        if(!(strcmp(argv[1],s))) printf("This helps you to make new file use it in format ./touch.exe <path_to_file>");
        else{FILE *fp = fopen(argv[1],"a");
        printf("Done the file %s is created",argv[1]);
        }
    }
    return 0;
}
