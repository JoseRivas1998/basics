#include "sample.h"
#define SIZE 10

int main() {
	srand(time(NULL));
	int *a = malloc(SIZE * sizeof(int));
	int *b = malloc(SIZE * sizeof(int));
	int *c = malloc(SIZE * sizeof(int));
	for (int i = 0; i < SIZE; ++i) {
		a[i] = rand() % 100;
		b[i] = rand() % 100;
	}
	add(a, b, c, SIZE);
	for (int i = 0; i < SIZE; ++i) {
		printf("%d + %d = %d\n", a[i], b[i], c[i]);
	}
	free(a);
	free(b);
	free(c);
	printf("Added a nice message\n");
	return 0;
}

void add (int *a, int *b, int *c, int N) {
	for (int i = 0; i < N; ++i) {
		c[i] = a[i] + b[i];
	}
}
