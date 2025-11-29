Question Title: “The College Topper in Every Subject”

Story:
At Assam Down Town University, the results for the semester exams have just been announced.
The marks of 5 students in 3 subjects — Mathematics, Physics, and Computer Science — are stored in a 2D array.

Each row of the array represents one student, and each column represents one subject.
The class teacher wants to identify the highest marks in each subject so that those students can receive academic excellence awards.

Write a program that reads the marks of 5 students in 3 subjects and prints the highest marks in each subject.

Enter marks of 5 students in 3 subjects:

Student 1: 70 80 90
Student 2: 85 60 75
Student 3: 88 92 70
Student 4: 65 89 95
Student 5: 78 85 88

Highest marks in Mathematics: 88
Highest marks in Physics: 92
Highest marks in Computer Science: 95










#include<iostream>
using namespace std;

int main(){
	const int students=5;
	const int subjects=3;
	int marks[students][subjects];
	
	for(int i=0; i<students; i++){
		cout<<"Student "<<i+1<<": ";
		for(int j=00; j<subjects; j++){
			cin>>marks[i][j];
		}
	}
	
	for(int j=0; j<subjects; j++){
		int max_mark=marks[0][j];
		for(int i=1; i<students; i++){
			if(marks[i][j]>max_mark){
			max_mark=marks[i][j];
		}
	}
	
	if(j==0)
	cout<<"Highest marks in Mathematics: "<<max_mark<<endl;
	else if(j==1)
	cout<<"Highest marks in Physics: "<<max_mark<<endl;
	else if(j==2)
	cout<<"Highest marks in Computer Science: "<<max_mark<<endl;
	}
	
	return 0;
}