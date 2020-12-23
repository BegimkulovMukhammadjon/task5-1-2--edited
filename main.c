#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int zadanye1(int w) {
	//printf(" %d ", w);
	if (w / 10 != 0) {

	  return w%10  + zadanye1(w/10);

	}
	else {
		return w ;
	}

}

int 	zadanye2(int a,int b,int c) {
	if (b > 1) {
		a = a * c;
		b = b - 1;
		zadanye2(a,b,c);
	}
	else {

		return a;
	}
}

int main()
{
	int q=-1;

	printf("\n\n1) (1) - Dano naturalnoe chislo N. Vichislite summu ego tsifr. Pri reshenii etoy zadachi nelzya ispolzovat sikli i massivi. Razreshena tolko rekursiya i tselochislennaya arifmetica.");
	printf("\n\n2) (1) - Rekursivno opisat funktsiyu pow(x,n), vichislyayushuyu xn dlya lyubogo veshestvennogo x (¡Ù0) i lyubogo tselogo n.");
	while (q != 0) {
		printf("\n\nVvedite nomer zadaniya: ");
		scanf_s("%d", &q);
		switch (q) {

		case 1: {
			int w;
			printf("Vvedite chislo: ");
			scanf_s("%d", &w);
			printf("%d",zadanye1(w));
			break;
		}
		case 2: {
			int a;
			int b;

			printf("Vvedite chislo: ");
			scanf_s("%d", &a);
			printf("Vvedite ego stepen: ");
			scanf_s("%d", &b);
			if (b % 2 == 0) {
				abs(a);
			}
			printf("Otvet: %d",zadanye2(a,b,a));
			break;
		}
		}
	}
	return 0;
}
