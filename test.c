#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>

#include "range.h"

#define PI 3.14159265359
#define arrLen 2001

double formula(double t){
    return cos(2 * PI * 10 * t) * exp(-PI * t * t);
}

int main(void){
    double timeArray[arrLen];
    double valArray[arrLen];

    DRANGE(&timeArray[0], -2.0, 2.0, arrLen);

    for(int i = 0; i < arrLen; i++){
        valArray[i] = formula(timeArray[i]);
    }

    FILE* fp =fopen("output.csv", "w+");
    if(fp == NULL){
        printf("Something went wrong at output.csv!\n");
        return EXIT_FAILURE;
    }

    for(int i = 0; i < arrLen; i++){
        fprintf(fp, "%f,%f\n", timeArray[i], valArray[i]);
    }

    fclose(fp);
    return EXIT_SUCCESS;
}