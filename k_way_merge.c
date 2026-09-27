#include <stdio.h>

#define K 3

typedef struct
{
    int value;
    int listIndex;
    int elementIndex;
} HeapNode;

void swap(HeapNode *a, HeapNode *b)
{
    HeapNode temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(HeapNode heap[], int size, int i, int *comparisons)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size)
    {
        (*comparisons)++;
        if (heap[left].value < heap[smallest].value)
            smallest = left;
    }

    if (right < size)
    {
        (*comparisons)++;
        if (heap[right].value < heap[smallest].value)
            smallest = right;
    }

    if (smallest != i)
    {
        swap(&heap[i], &heap[smallest]);
        minHeapify(heap, size, smallest, comparisons);
    }
}

int main()
{
    int L1[] = {10,30,50,70};
    int L2[] = {20,40,60,80};
    int L3[] = {15,35,55,75};

    int *lists[K] = {L1,L2,L3};
    int sizes[K] = {4,4,4};

    HeapNode heap[K];

    int comparisons = 0;
    int heapSize = K;

    for(int i=0;i<K;i++)
    {
        heap[i].value = lists[i][0];
        heap[i].listIndex = i;
        heap[i].elementIndex = 0;
    }

    for(int i=heapSize/2-1;i>=0;i--)
        minHeapify(heap,heapSize,i,&comparisons);

    printf("Merged Output:\n");

    while(heapSize>0)
    {
        HeapNode root = heap[0];

        printf("%d ",root.value);

        int li = root.listIndex;
        int next = root.elementIndex + 1;

        if(next < sizes[li])
        {
            heap[0].value = lists[li][next];
            heap[0].listIndex = li;
            heap[0].elementIndex = next;
        }
        else
        {
            heap[0] = heap[heapSize-1];
            heapSize--;

            if(heapSize==0)
                break;
        }

        minHeapify(heap,heapSize,0,&comparisons);
    }

    printf("\nComparisons = %d\n",comparisons);

    return 0;
}