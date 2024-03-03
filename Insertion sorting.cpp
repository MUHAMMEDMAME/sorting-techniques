/*#include<iostream>
#include<vector>
using namespace std;
void InsertSorting(vector<int> &vec) {
	for (int i = 1;i < vec.size();i++) {
		int j = i - 1;
		int x = vec[i];

		while (j > -1 &&vec[j]>x) {
			vec[j+1] = vec[j];
			j--;
		}

		vec[j + 1] = x;


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
	vector<int> vec = { 6,8,12,14,18,20,10 };
	printArray(vec);
	InsertSorting(vec);
	printArray(vec);
}
*/