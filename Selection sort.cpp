#include<iostream>
#include<vector>

using namespace std;


void selectionSort(vector<int>& A) {
	int i, j, k;
	for (i = 0;i < A.size() - 1;i++) {
		for (k = i, j = i + 1;j < A.size();j++) {
			if (A[j] < A[k])
				k = j;
		}
		swap(A[i], A[k]);
	}
}


void printArray(vector <int> A) {
	cout << "[";
	for (int i = 0;i < A.size();i++)
	{
		cout << A[i];
		if (i != A.size() - 1)
			cout << ",";
	}
	cout << "]\n";
}
int main() {
	vector<int> A = { 8,5,7,3,2 };
	
	selectionSort(A);
	printArray(A);
}