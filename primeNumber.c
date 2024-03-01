// C program to check prime number or find between interval 
#include <stdio.h>

// funtion prototype
void getPrime(int);
void getPrimeBetween(int,int);


// main function
int main(){

    int n,m;

    // printf("Enter any number: ");
    // scnaf("%d", &n);
    
    printf("Enter Interval to get prime number : ");
    scanf("%d %d", &n,&m);

    //getPrime(n);
    getPrimeBetween(n,m);

    return 0;
}

void getPrime(int n){
    int i;
    for(i=2; i<n; ++i){
        if(n%i==0){
            printf("%d is not a prime Number",n);
            break;
        }
    }

    if(i==n){
        printf("%d is prime Number",n);
    }
}

void getPrimeBetween(int lower, int higher){
    int i,j;

    printf("Prime Numbers Are :: \n");

    for(i=lower; i<=higher; ++i){
        for(j=2; j<=i; ++j){
            if(i%j==0){
                //printf("%d is not prime ",i);
                break;
            }
        }

        if(j==i){
            printf("%d ",j);
        }
    }
}