
#include <stdio.h>
#include <stdlib.h>
void dod(float a, float b){
    float suma=a+b;
    printf("%f",suma);
}
void ode(float a, float b){
    float roznica=a-b;
    printf("%f",roznica);
}
void mno(float a, float b){
    float ilo=a*b;
    printf("%f",ilo);
}
void ilor(float a, float b){
    float ilo=a/b;
    printf("%f",ilo);
}
int main()
{   float a,b;
    char o;
    int n=0;
      printf("Podaj a:\n");
      scanf("%f",&a);
      printf("\nPodaj b:\n");
      scanf("%f",&b);
      printf("\nPodaj dzialanie:\n");
      scanf("%s",&o);
  
    printf("\nWynik dzialania:\n");
        switch(o){
            case '+': {dod(a,b);
            break;
            }
            case '-': {ode(a,b);
            break;
            }
            case '/': {ilor(a,b);
            break;
            }
            case 'x': {mno(a,b);
            break;
            }
            
        } 
        return 0;
}
    



