#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int year;
	puts("¬ведите год вашего рождени€:");
	scanf("%d", &year);
	printf("≈сли в этом году у вас был день рождени€, то вам сейчас %d лет/год(-а)\n≈сли же пока что ваш день рождени€ не наступил, то вам сейчас %d лет/год(-а)", 2023 - year, 2023 - year - 1);
}