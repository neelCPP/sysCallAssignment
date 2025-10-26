#include<stdio.h>

int main(int argc, char *argv[]){
    if(argc < 2) printf("The format is ./cat.c <name_of_file> please input the argument");
    else{
        FILE *file = fopen(argv[1],"a");
        printf("Done the file %s is created %s",argv[1]);
    }
    return 0;
}



#include<stdio.h>

int main(int argc, char *argv[]){
    if(argc < 2 || argv[1] == "--c") printf("invalid format for more info use touch.c --help");
    else{
        if(argv[1] == "--help") printf("This helps you to make new file use it in format ./touch.exe <path_to_file>");
        else{FILE *fp = fopen(argv[1],"a");
        printf("Done the file %s is created %s",argv[1]);
        }
    }
    return 0;
}

