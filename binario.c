#include <stdio.h>
int and (int a, int b);
int or (int a, int b);
int xor (int a, int b);
void ToBinary(int r);

int main(void) {
	int a, b, c;
	scanf("%d%d", &a, &b);

	c = and(a, b);
	c = or (a, b);
	c = xor(a, b);

	return 0;
}
int and (int a, int b) {
	int r = a & b;

	printf("\nAND: ");
	ToBinary(r);
	
	return 0;
}

int or (int a, int b) {
	int r = a | b;
	
	printf("\n OR: ");
	ToBinary(r);

	return 0;
}

int xor (int a, int b) {
	int r = (int)a ^ b;

	printf("\nXOR: ");
	ToBinary(r);

	return 0;
}

void ToBinary(int r){
	int quoc, resto, i = 0, j, aux, bin[32];
	
	do {
		quoc = r / 2;
		bin[i] = r % 2;
		r = quoc;
		i++;
	} while (quoc != 1 && quoc > 0);
	bin[i] = r; // Atribuindo o último quociente
	
	for (j = i; j >= 0; j--) { // Laço para impressão inversa sem trash
		printf("%d", bin[j]);
	}
}
