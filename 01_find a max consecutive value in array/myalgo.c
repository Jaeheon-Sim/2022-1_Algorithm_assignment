#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

int* array;

void gen_nums(int n)
{
    srand(time(NULL));
    int i;
    for (i = 0; i < n; i++)
    {
        array[i] = rand() % 50 - 25;
    }
}

int main(int argc, char** argv)
{
    clock_t begin, end;
    int n;
    int max = 0;
    
    n = atoi(argv[1]);
    array = (int*)malloc(sizeof(int) * n);
  
    gen_nums(n);

    begin = clock();

    //* <------------------ [나만의 알고리즘]
    max = array[0];
    for (int m = 0; m < n;m++) {
        if (array[m]>max+array[m]) {
            max = array[m];
        }
        else {
            max = array[m]+max;
        }
    }
    //* ------------------------------------>

    end = clock();
    printf("max:%d\n",max);
    printf("Elapsed time: %f\n", (double)(end - begin) / CLOCKS_PER_SEC);
    return 1;
}