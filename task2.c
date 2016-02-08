#include "abdrive.h"
#include "simpletools.h"
#include <stdio.h>

    int towalk = 154; //50cm
    int pos = 1;

void movedisk(start, end){
    drivegoto((start-pos)*towalk, (start-pos)*towalk);
    high(26);
    drivegoto((end-start)*towalk, (end-start)*towalk);
    low(26);
    pause(100);
    pos=end;}

void hanoi(int n, int init, int fin, int aux){

    if (n==1){
        printf("move from %d to %d\n", init, fin);
        movedisk(init,fin)
    }
    
    else{
        hanoi(n-1, init, aux, fin);
        printf("move from %d to %d\n", init, fin);
        movedisk(init,fin)
        hanoi(n-1, aux, fin, init);
    }
}


int main() {
    int n;
    int init;
    int aux;
    int fin;
    printf("Enter the number of disks\n");
    scanf("%d", &n);
    printf("Enter initial\n");
    scanf("%d", &init);
    printf("Enter final\n");
    scanf("%d", &fin);
    printf("Enter auxiliary\n");
    scanf("%d", &aux);
    hanoi(n,init,fin,aux);
    return 0;
}

