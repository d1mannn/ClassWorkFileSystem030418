#include "Header.h"

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int task;
	do
	{
		task = TaskNumb();
		switch (task)
		{
			case 1:
			{
				/*1.	Создать типизированный файл и записать в него :
				a.число 500
					b.число 4, 5
					c.слово Привет*/
				FILE *file = NULL;
				printf("Введите 1 для записи числа 500\n2 - для чисел 4 и 5\n3 - для слова Привет\n");
				int n;
				scanf_s("%d", &n);
				switch (n)
				{
					case 1:
					{
						if ((file = fopen("500.txt", "w")) == NULL)
						{
							printf("Ошибка при открытии\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("Был создан файл\n");
							int symb = 500;
							fprintf(file, "%d", symb);
						}
						if (fclose(file) == 0)
						{
							printf("Поток был закрыт\n");
						}
						else
						{
							printf("ERROR\n");
							exit(EXIT_FAILURE);
						}
					} break;

					case 2:
					{
						if ((file = fopen("4 5.txt", "w")) == NULL)
						{
							printf("Ошибка при открытии\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("Был создан файл\n");
							int symb = 4;
							int symb2 = 5;
							fprintf(file, "%d , %d", symb, symb2);
						}
						if (fclose(file) == 0)
						{
							printf("Поток был закрыт\n");
						}
						else
						{
							printf("ERROR\n");
							exit(EXIT_FAILURE);
						}
					} break;

					case 3:
					{
						if ((file = fopen("Привет.txt", "w")) == NULL)
						{
							printf("Ошибка при открытии\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("Был создан файл\n");
							char hello[10] = "Hello";
							fputs(hello, file);
						}
						if (fclose(file) == 0)
						{
							printf("Поток был закрыт\n");
						}
						else
						{
							printf("ERROR\n");
							exit(EXIT_FAILURE);
						}
					} break;
				}

			} break;

			case 2:
			{
				/*2.	Создать типизированный файл и записать в него(Записываемые числа и слова вводятся с клавиатуры)
					a.	5 одинаковых целых чисел
					b.	5 одинаковых вещественных чисел
					c.	5 одинаковых слов*/
				FILE *file = NULL;
				int n;
				printf("Введите 1 для создания одинаковых целых чисел\n");
				printf("Введите 2 для создания одинаковых вещественных чисел\n");
				printf("Введите 3 для создания одинаковых слов\n");
				scanf_s("%d", &n);
				switch (n)
				{
					case 1:
					{	
						if ((file = fopen("The same numbs.txt", "w")) == NULL)
						{
							printf("Ошибка при открытии\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("Всё кул\n");
							int numbs[5];
							printf("Введите число для записи - ");
							scanf_s("%d", &n);
							for (int i = 0; i < 5; i++)
							{
								numbs[i] = n;
								fprintf(file, "%d\n", numbs[i]);
							}
						}
						if (fclose(file) == 0)
						{
							printf("Поток был закрыт\n");
						}
						else
						{
							printf("ERROR\n");
							exit(EXIT_FAILURE);
						}
						
					} break;

					case 2:
					{
						if ((file = fopen("The same double numbs.txt", "w")) == NULL)
						{
							printf("Ошибка при открытии\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("Всё кул\n");
							double numbs[5];
							printf("Введите число для записи - ");
							double n2;
							scanf_s("%fl", &n2);
							for (int i = 0; i < 5; i++)
							{
								numbs[i] = n2;
								fprintf(file, "%fl\n", numbs[i]);
							}
						}
						if (fclose(file) == 0)
						{
							printf("Поток был закрыт\n");
							getchar();
						}
						else
						{
							printf("ERROR\n");
							exit(EXIT_FAILURE);
						}
					} break;

					case 3:
					{
						if ((file = fopen("The same words.txt", "w")) == NULL)
						{
							printf("Ошибка при открытии\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("Всё кул\n");
							char numbs[20];
							printf("Введите слово для записи - ");
							getchar();
							gets_s(numbs, 20);
							for (int i = 0; i < 5; i++)
							{
								fputs(numbs, file);
							}
						}
						if (fclose(file) == 0)
						{
							printf("Поток был закрыт\n");
							getchar();
						}
						else
						{
							printf("ERROR\n");
							exit(EXIT_FAILURE);
						}
					} break;
				}

			} break;

			case 3:
			{
				//3.	Дан массив из двадцати вещественных чисел.Записать все числа массива в типизированный файл в том же порядке
				FILE *file;
				
				if ((file = fopen("Массив Чисел.txt", "w")) == NULL)
				{
					printf("Ошибка при открытии\n");
					exit(EXIT_FAILURE);
				}
				else
				{
					printf("Был создан файл\n");
					double numbs[20];
					for (int i = 0; i < 20; i++)
					{
						numbs[i] = (1.0 + rand() % 500) * 0.5;
						fprintf(file, "%lf\n", numbs[i]);
					}
				}
				if (fclose(file) == 0)
				{
					printf("Поток был закрыт\n\n");
				}
				else
				{
					printf("ERROR\n");
					exit(EXIT_FAILURE);
				}
			} break;

			case 4:
			{
				/*4.	В конец существующего типизированного файла записать
					a.число 0
					b.фразу До свидания!*/
				FILE *file;
				if ((file = fopen("Массив Чисел.txt", "a+")) == NULL)
				{
					printf("Ошибка при открытии\n");
					exit(EXIT_FAILURE);
				}
				else
				{
					printf("ВСЁ КУЛ\n");
					fprintf(file, "%d", 0);
				}
				if (fclose(file) == 0)
				{
					printf("Поток был закрыт\n");
				}
				else
				{
					printf("ERROR\n");
					exit(EXIT_FAILURE);
				}

			} break;

			case 5:
			{
				/*5.	В конец существующего файла записать
					a.	6 целых чисел
					b.	5 вещественных чисел
					c.	4 слова*/
				FILE *file;
				if ((file = fopen("Массив Чисел.txt", "a+")) == NULL)
				{
					printf("Ошибка при открытии\n");
					exit(EXIT_FAILURE);
				}
				else
				{
					printf("ВСЁ КУЛ\n");
					char word[] = "Hello world\n";
					for (int i = 0; i < 4; i++)
					{
						fputs(word, file);
					}
				}
				if (fclose(file) == 0)
				{
					printf("Поток был закрыт\n");
				}
				else
				{
					printf("ERROR\n");
					exit(EXIT_FAILURE);
				}
			} break;
//
			case 6:
			{
//				/*1.	Дан типизированный файл, элементами которого являются числа.Напечатать
//					a.n - й элемент
//					b.последний элемент*/
//
				FILE *file;
				if ((file = fopen("Case6.txt", "w")) != NULL);
				{
					for (int i = 0; i < 10; i++)
					{
						fprintf_s(file, "%d\n", i);
					}
					if (fclose(file) == NULL)
					{
						printf("Поток был закрыт\n");
					}
					else
					{
						printf("ERROR\n");
						exit(EXIT_FAILURE);
					}
				}
				int n;
				do
				{
					printf("Введите числа от 1 до 10 --> ");
					scanf_s("%d", &n);
				} while (n < 1 || n > 10);
//				/*if ((file = fopen("Case6.txt", "r")) != NULL)
//				{	
//					int count = 0;
//					int codeN = fgetc(file);
//					int ch = fscanf_s(file, "%d");
//					while (!feof(file))
//					{	
//						count++;
//						if (count == n)
//						{
//							printf("%d - %c\n", ch, ch);
//						}
//						ch = fgetc(file);
//					}
//					if (fclose(file) == NULL)
//					{
//						printf("Поток был закрыт\n");
//					}
//					else
//					{
//						printf("ERROR\n");
//						exit(EXIT_FAILURE);
//					}
//				}*/
//
////				FILE *file;
////				if ((file = fopen("Массив Чисел.txt", "r")) == NULL)
////				{
////					printf("Ошибка при открытии\n");
////					exit(EXIT_FAILURE);
////				}
////				else
////				{
////					printf("Всё кул\n");
////					printf("введите число - ");
////					int numb;
////					scanf_s("%d", &numb);
////
////					int ch = fscanf(file, "%s");
////					
////					int count = 0;
////					while (fgetc(file) != EOF)
////					{
////					/*	count++;
////						if (count == numb)
////						{
////							printf("%d - %c", ch, ch);
////							break;
////						}
////*/
////						printf("%d - %c\n", ch, ch);
////						ch = fgetc(file);
////					}
////
//					//printf("%d\n", count);
//
//					//int codeError = getc(fp);
//					////while (codeError != EOF)
//					//while (!feof(fp) == 1) // если не равен 1, т.е. равен 0 т.е. не достиг конца файла будем считывать 
//					//{
//					//	printf(" - %c\n", codeError);
//					//	codeError = getc(fp); // функция getc() сама делает fp++;
//					//}
//				}
//
			} break;

			case 7:
			{
				//2.	Изменить все элементы существующего типизированного файла, 
				//в котором записаны числа.Новые значения вводятся с клавиатуры.
				FILE *file;
				int n, count = 0;
				if ((file = fopen("Case7.txt", "w")) != NULL)
				{	
					printf("Файл создан\n");
					do
					{	
						count++;
						printf("Введите любое число - ");
						scanf_s("%d", &n);
						fprintf(file, "%d\n", n);
					} while (count != 5);
					fclose(file);
				}
				else
				{
					printf("ERROR\n");
					exit(EXIT_FAILURE);
				}
			} break;

			case 8:
			{
				/*3.	Имеется типизированный файл с числами.Поменять местами :
				a.первое и третье число
					b.второе и последнее число
					c.n1 - е и n2 - е число*/
				FILE *file;
				int n1 = 0, n3 = 0, count = 0;
				printf("%d and %d\n", n1, n3);
				if ((file = fopen("Case6.txt", "r")) != NULL)
				{	
					//rewind(file);
					do
					{
						count++;
						if (count == 1)
							fscanf(file, "%d", &n1);
						if (count == 3)
							fscanf(file, "%d", &n3);
						getc(file);
					} while (getc(file) != EOF);
					fclose(file);
					printf("%d and %d\n", n1, n3);
					fclose(file);
				}
				else
				{
					printf("ERROR\n");
					exit(EXIT_FAILURE);
				}
				if ((file = fopen("Case6.txt", "a")) != NULL)
				{	
					//rewind(file);
					fseek(file, 0, SEEK_END);
					rewind(file);
					count = 0;
					do
					{
						count++;
						if (count == 1)
							fprintf(file, "%d\n", n3);
						if (count == 3)
							fprintf(file, "%d\n", n1);
						//getc(file);
					} while (getc(file) != EOF);
					fclose(file);
				}
			} break;
			system("pause");
		}
	} while (task != 0);
}