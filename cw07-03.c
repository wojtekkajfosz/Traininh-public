#include <stdio.h>
#include <math.h>
struct punkt{
    float x;
    float y;
} punkt;
void odleglosc(struct punkt p1, struct punkt p2){
    float pom1, pom2,pom3, odl;
    float x1=p1.x;
    float x2=p2.x;
    float y1=p1.y;
    float y2=p2.y;
    pom1=x2-x1;
    pom2=y2-y1;
    pom3=pom1*pom1+pom2*pom2;
    odl=sqrt(pom3);
    printf("Odległość między punktami to %.2f",odl);
    
}
int main()
{   struct punkt p1;
    struct punkt p2;
    printf("Podaj wspolrzedne pierwszego punktu");
    scanf("%f%f",&p1.x,&p1.y);
    printf("Podaj wspolrzedne pierwszego punktu");
    scanf("%f%f",&p2.x,&p2.y);
    odleglosc(p1,p2);
    return 0;
}