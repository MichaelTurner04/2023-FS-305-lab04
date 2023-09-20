//Michael Turner
//18229090
//9-20-2023
//Lab:305
//Lab4.cpp

#include <iostream>
using namespace std;

int main (){
	int students;
	string name;
	int score;
	double sum;
	double avg;
	int passed = 0;
	int failed = 0;
	double min = 100;
	double max = 0;
	string maxName;
	string minName;
	do{
		cout << "Enter the number of students ";
		cin >> students;
		if(students < 0 || students > 100){
			cout << "Invalid range. Please enter range 0-100:" << endl;
			cin >> students;
			}
		}
	while (students < 0 || students > 100);
		cout << endl;
	for(int i = students; i > 0; i--){
	cout << "Enter name of student " << i << endl;
	cin.ignore();
	getline(cin, name);
	cout << "Enter score of student " << name << ":";
	cin >> score;
	while(score <0 || score > 100){
	cout << "Invalid range. Please enter range 0-100:" << endl;
	cin>> score;
	}
	if(score > max){
	max = score;
	maxName = name;
	}
	if (score < min){
	min = score;
	minName = name; 
	}
	sum += score;
	cout << name <<": " << score << endl;
	}
	avg = sum / students;
	if(score > 60){
	passed++;
	}
	else{
	failed++;
	}
	cout << "Class Statistics:\n" << "Max:" << max <<" (student: " << maxName <<")\n" << "Min: " << min << " (student: " << minName << ")"<< endl;
	cout << "Average Score: " << avg<< endl;
	cout << "Number of students failed: " << failed << endl;
	cout << "Number of students passed: " << passed << endl;
	return 0;
}
