//
//  main.c
//  2-Calloc
//
//  Created by Miguel Garcia on 8/22/17.
//  Copyright © 2017 Miguel Garcia. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int num, i, *ptr, sum = 0;
    printf("Calloc: Enter number of elements: ");
    scanf("%d", &num);
    
    ptr = (int*) calloc(num, sizeof(int));
    if(ptr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }
    
    printf("Enter elements of array: ");
    for(i = 0; i < num; ++i)
    {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    
    printf("Sum = %d", sum);
    free(ptr);
    return 0;
}
