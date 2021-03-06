//10.Write a C program to accept an array and reverse it using pointers.

#include<stdio.h>
#include<stdlib.h>

void reverse(int*, int);
void printarray(int*, int);

int main()
{
    int i, list[3], size;

    size=sizeof(list)/sizeof(int);

    for(i=0;i<size;i++)
    {
        printf("Input number %d: ", i+1);
        scanf("%d", &list[i]);
    }

    reverse(&list, size);

    printf("\n\n");
    printf("\t");printarray(&list, size);
    printf("\n");

    return 0;
}

void reverse(int* ar_adress, int size)
{
    int t;
    int* realbase;

    realbase=ar_adress+size-1;

    while(ar_adress<realbase)
    {
        t=*ar_adress;
        *ar_adress=*realbase;
        *realbase=t;

        realbase--;
        ar_adress++;
    }
}

void printarray(int* array_adress, int size)
{
    while(size)
    {
        printf("%d%s", *array_adress, size-1?", ":".");

        array_adress++;
        size--;
    }
}
