// this is the version of bubblesort in c
// its not the most efficient way of writing it
// but you can at least compare the code in
// baabnq with this one

#include <stdio.h>

#define listSize 10

void printList(int*);

int main()
{
    int list[listSize] = {10, 16, 8, 12, 15, 6, 3, 9, 5, 99};
    printList(list);

    for(int j = 0; j < listSize; j++)
    {
        for(int i = 0; i < listSize; i++)
        {
            if(list[i] > list[i + 1])
            {
                int aVal = list[i];
                int bVal = list[i + 1];
                list[i] = bVal;
                list[i + 1] = aVal;
            }
        }
    }
    
    printList(list);

}

void printList(int* list) 
{
    for(int i = 0; i < listSize; i++)
    {
        printf("%d, ", list[i]);
    }
    printf("\n");
}
