#include <iostream>
#include <cstdlib>
#include "heap.h"
using namespace std;

Heap initialize(int n)
{
	struct Heap heap;
	heap.capacity = n;
	heap.size = 0;
	heap.H;
	return heap;
}

void buildHeap(Heap *heap, Element A[], int n) {
	heap->size[A] = heap->capacity[A];
	int i;

	for (i = (heap->capacity) / 2; i > heap->size; i++)
	{
		//minHeapify(heap, i, n);
	}

}

void insert(Heap heap, int flag, int *k)
{
	if (flag == 1)
	{
		heap.size[k]++;
		int i = heap.size[k];
		//A[i] = round_toward_neg_infinity;
		//IncreaseKey(heap heap, int index, int value, int flag)
	}

	if (flag == 2)
	{
		return;
	}
}


void DeleteMin(Heap heap, int flag)
{
	if (flag == 1)
	{
		//Nothing happens
		return;
	}

	if (flag == 2)
	{
		printHeap(heap); //print the node before it's deleted
		if (heap.size < 1)
		{
			cout << "\n Error: Heap is empty." << endl;
		}
		else
		{
			//int max = heap[A];
			//heap[A] = A[heap.size[A]];
			//heap.size[A]--;
			//free()
			//MaxHeapify(A, 1);
			return printHeap(heap);
		}
	}
}


void DecreaseKey(Heap heap, Element A[], int *key, int flag)
{
	
	if (flag == 1)
	{
		//nothing happens
		return;
	}

	if (flag == 2)
	{
		//printHeap(heap);
		if (*key < 2)
		{
			cout << "\n The new key is smaller than current key";
		}
	}


}

void printHeap(Heap heap)
{
	cout << "\n" << heap.capacity << endl;
	cout << "\n" << heap.size << endl;
	int i;
	for (i = 0; i < heap.size; i++)
	{
		cout << "\n" << i << endl;
	}
}



void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}