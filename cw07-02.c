#include <stdio.h>
#include <stdlib.h>
void dod(float a, float b){
    int suma=a+b;
    printf("%f",suma)
}
void ode(float a, float b){
    int roznica=a-b;
    printf("%f",roznica)
}
void mno(float a, float b){
    int ilo=a*b;
    printf("%f",ilo)
}
void ilor(float a, float b){
    int ilo=a/b;
    printf("%f",ilo)
}
int main()
{   float a,b;
    char o;
    int n=0;
    FILE *wejscie;
    wejscie=fopen("dane.txt","r");
    while(!feof(wejscie)){
        fscanf(wejscie,"%f%c%f",&a,&o,&b);
        printf("%.2f %c %.2f",a,o,b);
        switch(c){
            case '+': {dod(a,b);
            break;
            }
            case '-': {ode(a,b);
            break;
            }
            case '/': {ilor(a,b);
            break;
            }
            case '*': {mno(a,b);
            break;
            }
            
        }
    }
    return 0;
}