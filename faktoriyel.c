#include <stdio.h>
#include <conio.h>
int fact(int);
int main() {
	printf("Bir sayı giriniz\n");
	int x;
	scanf("%d", &x);
	printf("faktöriyeli: %d", fact(x));
	getch();
}
int fact (int x) {
	int sonuc = 1;
	for (int i = 1; i <= x; i++) {
		sonuc *= i;
	}
	return sonuc;

}
