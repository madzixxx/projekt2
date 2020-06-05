#include <stdio.h>
//#include "pole.h"
//#include "obj.h"

int main(){
    float b1, b2, b3;
    printf("Podaj dlugosci trzech bokow\n");
    scanf("%f %f %f",&b1, &b2,&b3);
    while(b1<=0 || b2<=0 || b3<=0)
    {   
        printf("Podano niewlasciwa wartosc. Wszystkie dlugosci musza byc wieksze od zera\n");
        printf("Podaj dlugosci trzech bokow\n");
        scanf("%f %f %f",&b1, &b2,&b3);
    }
   
   
    printf("Pole prostokata = %f\n",p_prostokat(b1, b2));
    printf("Pole prostopadloscianu = %f\n",p_prostopadloscian(b1,b2,b3));
    printf("Objetosc prostopadloscianu = %f\n",obj_prost(b1,b2,b3));
    //printf("b1 %f, b2 %f, b3 %f", b1,b2,b3);
    return 0;
}
   
