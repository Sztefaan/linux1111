#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int n;
    float p;
    printf("Podaj liczbe losowan: ");
    scanf("%d",&n);
    int tab[10];
    for(int i=0; i<n; i++){
        p=rand()/(2.0+RAND_MAX)*10+10;// jeżeli rand()/(1.0+RAND_MAX) nalezy do <0,1>, to rand()/(2.0+RAND_MAX) nalezy do <0,1)
        tab[(int)(p-10)]++; 
    }
    printf("\n");
    for(int i=0; i<10; i++){
        printf("Przedzial [%d, %d): %d\n",i+10, i+11,tab[i]);   
    }		

}
