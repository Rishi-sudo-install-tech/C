#include <stdio.h>
#include <stdbool.h>
int main(){

    bool LoggedIn = true;
    bool isAdministrator = false;
    int Level = 3;

    if (LoggedIn && ( isAdministrator || Level <=2)){
        printf("Granted");
    }
        else{
            printf("Access denied\n\n");
        }
        return 0;
}