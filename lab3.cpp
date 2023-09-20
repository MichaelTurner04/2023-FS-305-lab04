//Michael Turner
//18229090
//9-20-2023
//Lab:305
//Purpose

#include <iostream>
using namespace std;

int main (){
	int students;
	double grade;
	do{
		cout<<"Enter the number of students" << endl;
		cin>>students;
		while (students < 0 || students > 100){
			cout << "Invalid range. Please enter range 0-100:\n";
			cin >> students;
			}
	return 0;
}
