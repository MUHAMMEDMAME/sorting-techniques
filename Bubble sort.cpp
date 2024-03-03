/*
#include<iostream>
#include<vector>

using namespace std;

//void Swap(int* p, int* q) {
	//int temp = *p;
	//*p = *q;
	//*q = temp;
//}

void bubbleSort(vector <string> &vec ) {
	int flag;
	for (int i = 0;i < vec.size() - 1;i++) {
		flag = 0;
		for (int j = 0;j < vec.size() - 1 - i;j++) {
			if (vec[j] > vec[j + 1]) {
				swap(vec[j],vec[j+1]);
				flag = 1;
			}
		}
		if (flag == 0)
			break;

	}
}

void printArray(vector <string> A) {
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
	vector <string> vec = {"Ahmad","muhammed","mustafa","halil"};
	printArray(vec);
	bubbleSort(vec);
	printArray(vec);


}

*/