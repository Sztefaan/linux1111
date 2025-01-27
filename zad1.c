#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main(){
    srand(time(NULL));
    int n,p,sem=0;
    scanf("%d",&n);
    int A[n],B[n],C[n];
    for(int i=0; i<n; i++){ // losowanie liczb binarnych
        A[i]=rand()%2;
        B[i]=rand()%2;
    }
    printf("A: ");
    for(int i=0; i<n; i++){
        printf("%d",A[i]);
    }
    printf("\nB: ");
    for(int i=0; i<n; i++){
        printf("%d",B[i]);
    }
  
    p=0;
    for(int i=n-1; i>=0; i--){
           C[i]=(A[i]+B[i]+p)%2;//obliczanie sumy
           p=(A[i]+B[i]+p)/2;
    }
    if(p==1){
        for(int i=n-1; i>=0&&sem==0; i--){//obsługa wyjścia poza zakres 
            if(C[i]==1){
                C[i]=0;
            } else{
                C[i]=1;
                sem=1;
            }
        }
    }
    if((A[0]==0&&B[0]==0&&C[0]==1)||(A[0]==1&&B[0]==1&&C[0]==0)){
        printf("\nPrzepełnienie!");
    } else{
        printf("\nSuma: ");
        for(int i=0; i<n; i++){
            printf("%d",C[i]);
        }
        printf("\n");
        int a,b,c;
        for(int i=n-1; i>0; i--){//obliczanie wartości dziesiętnej
            a+=A[i]*pow(2,n-1-i); 
            b+=B[i]*pow(2,n-1-i);   
            c+=C[i]*pow(2,n-1-i); 
        }
        a-=A[0]*(pow(2,n-1)-1);
        b-=B[0]*(pow(2,n-1)-1);
        c-=C[0]*(pow(2,n-1)-1);
        
        printf("Dziesietnie: %d + %d = %d",a,b,c);
    }
    printf("\n");
    return 0;	   
}
