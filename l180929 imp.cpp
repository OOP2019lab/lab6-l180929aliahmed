#include "l180929  student.h"
#include <iostream>
using namespace std;
//Assigning default value to counter:
int student::counter=0;

//Default Constructor
student::student(){
	counter++;
	ID=counter;
	quizTaken=0;
	GPA=-1;
	quizCap=3;
	quizScore=new float[quizCap];
}

//Copy constructor
student::student(const student& x){
	ID=x.ID;
	quizCap=x.quizCap;
	quizTaken=x.quizTaken;
	GPA=x.GPA;
	quizScore=new float[quizCap];
	for(int i=0; i<quizTaken; i++){
		quizScore[i]=x.quizScore[i];
	}
}

//Overloaded contructor for quiz capacity and gpa
student::student(int qc, float gpa){
	counter++;
	ID=counter;
	quizCap=qc;
	GPA=gpa;
	quizTaken=0;
	quizScore=new float[quizCap];
}

//Destructor
student::~student(){
	delete [] quizScore;
	GPA=-1;
	ID=-1;
	quizTaken=-1;
	quizCap=-1;
}

//GPA setter
void student::setGPA(float gpa){
	GPA=gpa;
}

//GPA getter
float student::getGPA() const{
	return GPA;
}

//Class print function
void student::print() const {
	cout<<endl;
	cout<<"Student ID: "<<ID<<endl;
	cout<<"GPA: "<<GPA<<endl;
	cout<<"Quizzes taken: "<<quizTaken<<endl;
	for(int i=0; i<quizTaken; i++){
		cout<<"Quiz "<<i<<" Score: "<<quizScore[i]<<endl;
	}
	cout<<endl;
}

//Student compare function
bool student::compare(student otherStudent){
	if(GPA>otherStudent.GPA)
		return true;
	else 
		return false;
}

//update quiz score function
void student::updateScore(int qn, float score){
	if(qn<=quizTaken-1){
		quizScore[qn]=score;
	}
	else 
		cout<<"Quiz "<<qn<<" not taken."<<endl;
}

//Add new quiz score function
void student::addQuizScore(float score){
	if(quizTaken<quizCap){
		quizScore[quizTaken]=score;
		quizTaken++;
	}
	else
		cout<<"No space to add new score!" <<endl;
}