#include "l180929  student.h"
#include <iostream>
using namespace std;

//static array print function
void printArr(student std[], int size){
	for(int i=0; i<size; i++)
		std[i].print();
}

//dynamic array print function
void printDyArr(student** std, int size){
	for(int i=0; i<size; i++)
		std[i]->print();
}


student* Above2GPA(student*& std, int size){
	int count=0;
	for( int i=0; i<size; i++){
		if(std[i].getGPA()>2)
			count++;
	}
	int index=0;
	student* temp=new student[count];
	for(int i=0; i<size; i++){
		if(std[i].getGPA()>2){
			temp[index]=student(std[i]);
			index++;
		}
	}
	delete[]std;
	return temp;
}

int main(){
	student stdArr[3]={student(3,2), student(3,3), student(4,2.33)};
	stdArr[0].addQuizScore(1); stdArr[0].addQuizScore(4); stdArr[0].addQuizScore(10);
	stdArr[1].addQuizScore(10); stdArr[1].addQuizScore(4); stdArr[1].addQuizScore(9);
	stdArr[2].addQuizScore(9); stdArr[2].addQuizScore(8); stdArr[2].addQuizScore(7);
	
	//Print function:
	printArr(stdArr,3);

	student** stds=new student*[4];
	stds[0]=new student(3,2);
	stds[1]=new student(3,3);
	stds[2]=new student(4,2.33);
	stds[3]=new student(4,1);


	stds[0]->addQuizScore(1); stds[0]->addQuizScore(4); stds[0]->addQuizScore(10);
	stds[1]->addQuizScore(10); stds[1]->addQuizScore(4); stds[1]->addQuizScore(9);
	stds[2]->addQuizScore(9); stds[2]->addQuizScore(8); stds[2]->addQuizScore(7);
	stds[3]->addQuizScore(2); stds[3]->addQuizScore(3);

	//print function:
	printDyArr(stds, 4);
	for(int i=0; i<4; i++)
		delete stds[i];
	delete[]stds;
}