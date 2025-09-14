#include <stdio.h>
#include <math.h>
struct punkt{
    float x;
    float y;
} ;

struct okrag{
    float x;
    float y;
    float r;
} ;

void odleglosc(struct okrag p1, struct punkt p2){
    float pom1, pom2,pom3, odl;
    float x1=p1.x;
    float x2=p2.x;
    float y1=p1.y;
    float y2=p2.y;
    float pr=p1.r;
    pom1=x2-x1;
    pom2=y2-y1;
    pom3=pom1*pom1+pom2*pom2;
    odl=sqrt(pom3);
    if(odl<pr){
        printf("Punkt leży wewnątrz");
    }else if(pr==odl){
        printf("Punkt leży na");
    }else
    printf("Punkt leży poza");
    
}
int main()
{   struct okrag kolog;
    struct punkt p;
    printf("Podaj wspolrzednesrodku okegu i jego promień");
    scanf("%f%f%f",&kolog.x,&kolog.y,&kolog.r);
    printf("Podaj wspolrzedne  punktu");
    scanf("%f%f",&p.x,&p.y);
    odleglosc(kolog,p);
    return 0;
}