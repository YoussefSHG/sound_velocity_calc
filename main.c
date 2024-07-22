#include <stdio.h>

int main(){

    int x1,x2;
    do{
        printf("Enter the begining temperature: ");
        scanf("%i", &x1);
        printf("Enter the ending temperature: ");
        scanf("%i", &x2);

        if (x1<=x2){
            break;
        }

        printf("please enter valid begining and ending temperatures\n\n");
    }while(1);    

    printf("\n");

    for(int i = x1; i <= x2; i++){
        int v;
        v = 331.3 + 0.61*i ;
        printf("At %i degrees Celsius the velocity of sound is %i m/s\n", i, v);
    }

    return 0;
}