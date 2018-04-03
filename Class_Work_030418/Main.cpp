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
				/*1.	������� �������������� ���� � �������� � ���� :
				a.����� 500
					b.����� 4, 5
					c.����� ������*/
				FILE *file = NULL;
				printf("������� 1 ��� ������ ����� 500\n2 - ��� ����� 4 � 5\n3 - ��� ����� ������\n");
				int n;
				scanf_s("%d", &n);
				switch (n)
				{
					case 1:
					{
						if ((file = fopen("500.txt", "w")) == NULL)
						{
							printf("������ ��� ��������\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("��� ������ ����\n");
							int symb = 500;
							fprintf(file, "%d", symb);
						}
						if (fclose(file) == 0)
						{
							printf("����� ��� ������\n");
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
							printf("������ ��� ��������\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("��� ������ ����\n");
							int symb = 4;
							int symb2 = 5;
							fprintf(file, "%d , %d", symb, symb2);
						}
						if (fclose(file) == 0)
						{
							printf("����� ��� ������\n");
						}
						else
						{
							printf("ERROR\n");
							exit(EXIT_FAILURE);
						}
					} break;

					case 3:
					{
						if ((file = fopen("������.txt", "w")) == NULL)
						{
							printf("������ ��� ��������\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("��� ������ ����\n");
							char hello[10] = "Hello";
							fputs(hello, file);
						}
						if (fclose(file) == 0)
						{
							printf("����� ��� ������\n");
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
				/*2.	������� �������������� ���� � �������� � ����(������������ ����� � ����� �������� � ����������)
					a.	5 ���������� ����� �����
					b.	5 ���������� ������������ �����
					c.	5 ���������� ����*/
				FILE *file = NULL;
				int n;
				printf("������� 1 ��� �������� ���������� ����� �����\n");
				printf("������� 2 ��� �������� ���������� ������������ �����\n");
				printf("������� 3 ��� �������� ���������� ����\n");
				scanf_s("%d", &n);
				switch (n)
				{
					case 1:
					{	
						if ((file = fopen("The same numbs.txt", "w")) == NULL)
						{
							printf("������ ��� ��������\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("�� ���\n");
							int numbs[5];
							printf("������� ����� ��� ������ - ");
							scanf_s("%d", &n);
							for (int i = 0; i < 5; i++)
							{
								numbs[i] = n;
								fprintf(file, "%d\n", numbs[i]);
							}
						}
						if (fclose(file) == 0)
						{
							printf("����� ��� ������\n");
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
							printf("������ ��� ��������\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("�� ���\n");
							double numbs[5];
							printf("������� ����� ��� ������ - ");
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
							printf("����� ��� ������\n");
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
							printf("������ ��� ��������\n");
							exit(EXIT_FAILURE);
						}
						else
						{
							printf("�� ���\n");
							char numbs[20];
							printf("������� ����� ��� ������ - ");
							getchar();
							gets_s(numbs, 20);
							for (int i = 0; i < 5; i++)
							{
								fputs(numbs, file);
							}
						}
						if (fclose(file) == 0)
						{
							printf("����� ��� ������\n");
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
				//3.	��� ������ �� �������� ������������ �����.�������� ��� ����� ������� � �������������� ���� � ��� �� �������
				FILE *file;
				
				if ((file = fopen("������ �����.txt", "w")) == NULL)
				{
					printf("������ ��� ��������\n");
					exit(EXIT_FAILURE);
				}
				else
				{
					printf("��� ������ ����\n");
					double numbs[20];
					for (int i = 0; i < 20; i++)
					{
						numbs[i] = (1.0 + rand() % 500) * 0.5;
						fprintf(file, "%lf\n", numbs[i]);
					}
				}
				if (fclose(file) == 0)
				{
					printf("����� ��� ������\n");
				}
				else
				{
					printf("ERROR\n");
					exit(EXIT_FAILURE);
				}
			} break;

			case 4:
			{
				/*4.	� ����� ������������� ��������������� ����� ��������
					a.����� 0
					b.����� �� ��������!*/
				FILE *file;
				if ((file = fopen("������ �����.txt", "a+")) == NULL)
				{
					printf("������ ��� ��������\n");
					exit(EXIT_FAILURE);
				}
				else
				{
					printf("�Ѩ ���\n");
					fprintf(file, "%d", 0);
				}
				if (fclose(file) == 0)
				{
					printf("����� ��� ������\n");
				}
				else
				{
					printf("ERROR\n");
					exit(EXIT_FAILURE);
				}

			} break;

			case 5:
			{
				/*5.	� ����� ������������� ����� ��������
					a.	6 ����� �����
					b.	5 ������������ �����
					c.	4 �����*/
				FILE *file;
				if ((file = fopen("������ �����.txt", "a+")) == NULL)
				{
					printf("������ ��� ��������\n");
					exit(EXIT_FAILURE);
				}
				else
				{
					printf("�Ѩ ���\n");
					char word[] = "Hello world\n";
					for (int i = 0; i < 4; i++)
					{
						fputs(word, file);
					}
				}
				if (fclose(file) == 0)
				{
					printf("����� ��� ������\n");
				}
				else
				{
					printf("ERROR\n");
					exit(EXIT_FAILURE);
				}
			} break;

			case 6:
			{
				/*1.	��� �������������� ����, ���������� �������� �������� �����.����������
					a.n - � �������
					b.��������� �������*/
				FILE *file;
				if ((file = fopen("������ �����.txt", "r")) == NULL)
				{
					printf("������ ��� ��������\n");
					exit(EXIT_FAILURE);
				}
				else
				{
					printf("�� ���\n");
					printf("������� ����� - ");
					int numb;
					scanf_s("%d", &numb);

					int ch = fscanf(file, "%s");
					
					int count = 0;
					while (fgetc(file) != EOF)
					{
					/*	count++;
						if (count == numb)
						{
							printf("%d - %c", ch, ch);
							break;
						}
*/
						printf("%d - %c\n", ch, ch);
						ch = fgetc(file);
					}

					//printf("%d\n", count);

					//int codeError = getc(fp);
					////while (codeError != EOF)
					//while (!feof(fp) == 1) // ���� �� ����� 1, �.�. ����� 0 �.�. �� ������ ����� ����� ����� ��������� 
					//{
					//	printf(" - %c\n", codeError);
					//	codeError = getc(fp); // ������� getc() ���� ������ fp++;
					//}
				}

			} break;
		}
	} while (task > 0);
}