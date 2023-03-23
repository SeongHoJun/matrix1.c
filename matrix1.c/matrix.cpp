#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int row, col, value;
	scanf_s("%d %d %d", &row, &col, &value);

	int** matrix = (int**)malloc(sizeof(int*) * row);	//row칸짜리 인트포인터를 담는 배열 생성
	for (int i = 0; i < row; i++) 
	{
		matrix[i] = (int*)malloc(sizeof(int) * col);
	}
	for (int i = 0; i < row; i++)
	{
		free(matrix[i]); //가로공간 해제
	}
		free(matrix); //세로공간 해제

}
