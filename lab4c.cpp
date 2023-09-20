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
	char again;
	do{ //used for reruning the program
	do{
		cout << "Enter the number of students ";
		cin >> students;
		if(students < 0 || students > 100){// getting a valid input
			cout << "Invalid range. Please enter range 0-100:" << endl;
			cin >> students;
			}
		}
	while (students < 0 || students > 100);
		cout << endl;
	for(int i = students; i > 0; i--){//for loop to get information about each student
		cout << "Enter name of student " << i << endl;
		cin.ignore();
		getline(cin, name);
		cout << "Enter score of student " << name << ":";
		cin >> score;
		while(score <0 || score > 100){ //entering a valid score
			cout << "Invalid range. Please enter range 0-100:" << endl;
			cin>> score;
			}
		if(score > max){//getting max value
			max = score;
			maxName = name;
		}
		if (score < min){//getting min value
			min = score;
			minName = name; 
			}
		sum += score; //gathering sum for later use in avg
		cout << name <<": " << score << endl;
		if(score > 60){
			passed++;
			}
		else{
			failed++;
			}
		avg = sum / students; //Equation for avg
		}
	cout << "Class Statistics:\n" << "Max:" << max <<" (student: " << maxName <<")\n" << "Min: " << min << " (student: " << minName << ")"<< endl;
	cout << "Average Score: " << avg<< endl;
	cout << "Number of students failed: " << failed << endl;
	cout << "Number of students passed: " << passed << endl;
	cout << "Do you want to continue running the program? (y/n)";//get user input if they want to rerun the program
	cin >>again;
	}while(again == 'y'); //condition for rerunning the program
	return 0;
}



