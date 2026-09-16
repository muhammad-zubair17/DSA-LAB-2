/*#include <iostream>
using namespace std;
int main() {
	int rows, cols;
	do {
		cout << "Enter number of students: ";
		cin >> rows;
	} while (rows <= 0);
	do {
		cout << "Enter number of subjects: ";
		cin >> cols;
	} while (cols <= 0);
	int** marks = new int*[rows];
	for (int r = 0; r < rows; r++) {
		marks[r] = new int[cols];
	}
	cout << "\nEnter marks (0 to 100):\n";
	for (int r = 0; r < rows; r++) {
		cout << "Student " << r + 1 << ": ";
		for (int c = 0; c < cols; c++) {
			cin >> *(*(marks + r) + c);
		}
	}
	cout << "\nMarks Matrix:\n";
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < cols; c++) {
			cout << *(*(marks + r) + c) << "\t";
		}
		cout << endl;
	}
	int bestTotal = 0;
	for (int c = 0; c < cols; c++) {
		bestTotal += marks[0][c];
	}
	int bestStudent = 1;
	cout << "\nStudent Totals:\n";
	cout << "Student 1: " << bestTotal << endl;
	for (int r = 1; r < rows; r++) {
		int total = 0;
		for (int c = 0; c < cols; c++) {
			total += marks[r][c];
		}
		cout << "Student " << r + 1 << ": " << total << endl;
		if (total > bestTotal) {
			bestTotal = total;
			bestStudent = r + 1;
		}
	}
	cout << "\nTop student: " << bestStudent << endl;
	cout << "Highest total: " << bestTotal << endl;
	for (int r = 0; r < rows; r++) {
		delete[] marks[r];
	}
	delete[] marks;
	marks = nullptr;
	return 0;
}
*/