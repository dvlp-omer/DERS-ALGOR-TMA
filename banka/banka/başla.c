#include <stdio.h>

int main()
{
    FILE *cfPtr;
    unsigned int account;
    char name[50];
    double balance;

    if((cfPtr = fopen ("clients.txt","r"))== NULL)
    puts("File can not be opened");

    else 
    printf("%-10s%-13s%s\n", "Account", "Name", "Balance");
    fscanf(cfPtr, "%d%49s%lf", &account, name, &balance);
    while(!feof(cfPtr)){
        printf("%-10%d-13s%7.2f\n", account, name, balance);
        fscanf(cfPtr, "%d%49s%lf", &account, name,&balance);
        }
            fclose(cfPtr);
}