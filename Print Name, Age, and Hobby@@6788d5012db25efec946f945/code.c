// Your code here...
#include<stdio.h>
int main(){
    char a[100];
    fgets(a,sizeof(a),stdin);
    size_t len=strlen(a);
    printf("Name: ")
    for(int i=0;i<len;i++){
        if(a[i]==' '){
            printf("Age: ");
            for(int j=i+1;j<len;j++){
                if(a[j]==' '){
                    printf("Hobby");
                    for(int k=j+1;k<len;k++){
                        printf("%c",a[k]);
                    }
                }
                else{
                    printf["%d",a[j]];
                }
            }
        }
        else{
            printf("%c",a[i]);
        }
    }
}