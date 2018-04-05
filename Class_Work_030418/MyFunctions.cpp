#include "Header.h"

int TaskNumb()
{
	printf("Введите номер задания. Для выхода введите 0\n---->  ");
	int task;
	scanf_s("%d", &task);
	return task;
}