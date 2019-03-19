#pragma once
struct Element {
	int *key;
};

struct Heap {
	int capacity;
	int size;
	Element *H[];

};

Heap initialize(int n);
void printHeap(Heap heap);
void BuildHeap(Heap heap, Element A[], int n, int flag);
void Insert(Heap heap, Element *k, int flag);
//int DeleteMax(heap heap, int flag);
//void IncreaseKey(heap heap, element index, element value, int flag);