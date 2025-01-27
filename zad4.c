#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int n, p, k=1, licznik=1, max;
    n=rand()%151;
    printf("ciag wylosowanych liczb: %d ",n);
    while(n!=0 && n!=150){
        k++;
        p=n;
        n=rand()%151;
        printf("%d ",n);
        if(n>=p){ //sprawdzenie, czy n (wylosowana liczba) jest większa lub równa p (poprzednio wylosowanej liczbie)
            licznik++;
        } else{
            if(licznik>max)
                max=licznik;
            licznik=1;
        }
    }
    printf("wylosowano %d liczb, najdluzszy ciag niemalejacy ma %d elementow\n",k, max);
    

}
