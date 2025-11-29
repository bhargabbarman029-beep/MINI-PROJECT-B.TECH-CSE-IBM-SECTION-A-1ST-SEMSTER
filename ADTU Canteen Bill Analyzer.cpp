**Problem Title: ADTU Canteen Bill Analyzer
Story:

At Assam Down Town University (ADTU), the hostel canteen records the daily food expenses of each student.
Each row in a 2D array represents a student, and each column represents a day of the day week (from Monday to Friday).
The value bill[i][j] is the amount in ₹ spent by student i on day j.
You, as the Canteen Manager of ADTU, have been asked to analyze the weekly canteen records.

🧠 Your Tasks:

Given the 2D array bill, write a program to:

Print the total amount spent by each student in the week.

Find the day with the highest total collection.

Identify the student (or students) who spent the most overall.

Input Format:

The first line contains two integers:
n → number of students
m → number of days

The next n lines each contain m integers — the daily bill amounts.

📤 Output Format:

Print each student’s total weekly spending.

Print which day had the highest total collection.

Print which student(s) spent the most overall.
Input :
4 5
30 40 50 60 20
10 20 30 10 40
50 60 40 30 20
20 10 10 20 30

Output:

Student 1 total: ₹200  
Student 2 total: ₹110  
Student 3 total: ₹200  
Student 4 total: ₹90  

Highest collection on Day 2  
Highest spender: Student 1 and Student 3













#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	
	int bill[10][10];
	
	for(int i=0; i<n; ++i)
	for(int j=0; j<m; ++j)
	cin>>bill[i][j];
	
	int max_total=0;
	for(int i=0; i<n; ++i){
		int total=0;
		for(int j=0; j<m; ++j)
		total+=bill[i][j];
		
		cout<<"Student "<<(i+1)<<"total: Rs."<<total<<endl;
		
		if(total>max_total)
		max_total=total;
	}
	
	int day_max=0, highest_collection=0;
	for(int j=0; j<m; ++j){
		int day_total=0;
		for(int i=0; i<n; ++i)
		day_total+=bill[i][j];
		if(day_total>highest_collection){
			highest_collection=day_total;
			day_max=j;
		}
	}
	cout<<"Highest collection on Day "<<(day_max+1)<<endl;
	
	cout<<"Highest spender: ";
	bool first=true;
	for(int i=0; i<n; ++i){
		int total=0;
		for(int j=0; j<m; ++j)
		total+=bill[i][j];
		if(total==max_total){
			if(!first)cout<<" and ";
			cout<<"Student "<<(i+1);
			first=false;
		}
	}
	cout<<endl;
	
	return 0;
}