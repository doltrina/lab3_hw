#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int year;
	puts("������� ��� ������ ��������:");
	scanf("%d", &year);
	printf("���� � ���� ���� � ��� ��� ���� ��������, �� ��� ������ %d ���/���(-�)\n���� �� ���� ��� ��� ���� �������� �� ��������, �� ��� ������ %d ���/���(-�)", 2023 - year, 2023 - year - 1);
}