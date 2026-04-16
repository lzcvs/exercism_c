#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    unsigned int soma = 0;
    for (unsigned int i = 1; i <= number; i++){
        soma += i * i;
    }
    return soma;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int soma = 0;
    for (unsigned int i = 1; i <= number; i++){
        soma += i;
    }
    return soma * soma;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number) - sum_of_squares(number);
}