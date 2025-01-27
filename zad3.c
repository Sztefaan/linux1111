#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int n;
    scanf("%d",&n);
    float tab[n],buf1,buf2;
    for(int i=0; i<n; i++){
        tab[i]=rand()/(1.0+RAND_MAX)*200-100;
    }
    for(int i=0; i<n; i++){
        printf("A[%d] = %6.2f\n",i,tab[i]);
    }
    printf("\n");
    buf1=tab[0];
    for(int i=1; i<=n; i++){ //obsługa "przesunięcia"
        buf2=tab[i%n];
        tab[i%n]=buf1;
        buf1=buf2;
    }
    for(int i=0; i<n; i++){
        printf("A[%d] = %6.2f\n",i,tab[i]);
    }
}
