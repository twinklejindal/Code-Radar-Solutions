#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(!n){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}