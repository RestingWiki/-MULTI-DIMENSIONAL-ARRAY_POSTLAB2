#include <iostream>
using namespace std;




int specialCells(int arr[][1000], int row, int col);
int rowSum(int arr[][1000], const int& row, const int& col);
int colSum(int arr[][1000], const int& row, const int& col);
bool isPrime(int n);


int main() {
	int arr[][1000] = { {37,53,74},{12,37,60},{98,13,15} };
	cout << specialCells(arr, 3, 3);

	return 0;
}


int specialCells(int arr[][1000],  int row,  int col) {
	int rSum;
	int cSum;
	int HN3 = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				rSum = rowSum(arr,i,col);
				cout << "ROW SUM = " << rSum << endl;
				cSum = colSum(arr,row,j);
				cout << "COL SUM = " << cSum << endl;

				if (isPrime(rSum) && isPrime(cSum))
					HN3++;

			}
		}



		return HN3;
}
int rowSum(int arr[][1000], const int& row, const int& col) {
	int n = 0;
	for (int i = 0; i < col; i++)
	{
		cout << arr[row][i] << endl;
		n += arr[row][i];
	}
	return n;
}
int colSum(int arr[][1000], const int& row, const int& col) {
	int n = 0;
	for (int i = 0; i < row; i++)
	{
		cout << arr[i][col];
		n += arr[i][col];
	}
	return n;
}
bool isPrime(int n) {
	if (n <= 1)
		return false;
	else if (n == 2)
		return true;
	else
	{
		for (int i = 2; i <= n / 2; i++)
		{
			if (n % i == 0)
				return false;
		}


		return true;
	}

}