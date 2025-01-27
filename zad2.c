#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int n,max,r;
    scanf("%d",&n);
    int tab[n],spr[201];
    r=rand()%201;
    tab[0]=r-100;
    spr[r]=1;
    max=0;
    for(int i=1; i<n; i++){
        do{
            r=rand()%201;   //losuje, aż będzie różna od wcześniej wylosowanych
        }while(spr[r]==1);
        spr[r]=1;
        tab[i]=r-100;
        if(tab[i]>tab[max]){
            max=i;
        }  
    }
    for(int i=0; i<n; i++){
        printf("element [%d] = %+3d\n",i,tab[i]);    
    }
    printf("Maksymalny element to %d, wystepuje pod indeksem %d\n",tab[max],max);
}
    
