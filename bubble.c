#include <stdio.h>
const int MAX=9;

void printValues(int*);
void sort(int*);
void swap(int*, int*);

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  /* test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);
*/
  sort(values);
  printf("After: \n");
  printValues(values);
 
  return(0);
} // end main

void printValues(int* values){
	printf("[");
	for (int i = 0; i < MAX; i++){
		printf("%d ", values[i]);
	} // end for
	printf("] \n");
} // end printValues

void swap(int* a, int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
} // end Swap

void sort(int* array){
	for (int i = 0; i < MAX-1; i++){
		for (int j = 0; j < MAX-1-i; j++){
			if (array[j] > array[j+1])
				swap(&array[j], &array[j+1]);
				printValues(array);
		}
	}
} // End sort

