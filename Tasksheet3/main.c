//
//  main.c
//  Tasksheet3
//
//  Created by Sadir Abdulhadi on 2/7/16.
//  Copyright (c) 2016 UCL. All rights reserved.
//

#include <stdio.h>

void hanoi(int n, int init, int fin, int aux){
    if (n==1){
        printf("move from %d to %d\n", init, fin);
    }
    
    else{
        hanoi(n-1, init, aux, fin);
        printf("move from %d to %d\n", init, fin);
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

