#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int row, col, value;
	scanf_s("%d %d %d", &row, &col, &value);

	int** matrix = (int**)malloc(sizeof(int*) * row);	//rowĭ¥�� ��Ʈ�����͸� ��� �迭 ����
	for (int i = 0; i < row; i++) 
	{
		matrix[i] = (int*)malloc(sizeof(int) * col);
	}
	for (int i = 0; i < row; i++)
	{
		free(matrix[i]); //���ΰ��� ����
	}
		free(matrix); //���ΰ��� ����

}
