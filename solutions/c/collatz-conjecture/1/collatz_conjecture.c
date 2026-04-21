#include "collatz_conjecture.h"
#include <stdio.h>

int steps(int start){
    int stepcounter = 0;
    if (start <= 0){
        return -1;
    }
    while(start!=1){
        if (start % 2 == 0){
            start = start / 2;
            stepcounter++;
        } else {
            start = start * 3 + 1;
            stepcounter++;
        }
    }
    
    return stepcounter;
}