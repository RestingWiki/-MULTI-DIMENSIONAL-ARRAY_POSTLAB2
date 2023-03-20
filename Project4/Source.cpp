#include <iostream>
using namespace std;




int subMatrix(int arr[][1000], int row, int col);
int calSum(int[4]);
int main() {
	int arr[][1000] = { {44,45,89},{82,91,34},{83,87,33},{65,51,66} };
	cout << subMatrix(arr, 4, 3);

	return 0;
}


int subMatrix(int arr[][1000], int row, int col) {
	int HN4 = 0;
	for (int i = 0; i < row - 1; i++)
	{
		for (int j = 0; j < col - 1; j++)
		{
			int tempMtx[4] = { arr[i][j],arr[i][j + 1], arr[i + 1][j], arr[i + 1][j + 1] };
			int s = calSum(tempMtx);

			if (s % 2 == 1)
				HN4++;
			
		}
	}


	return HN4;
}

int calSum(int arr[4]) {
	int s = 0;
	for (int i = 0; i < 4; i++)
	{
		s += arr[i];
	}

	return s;
}
