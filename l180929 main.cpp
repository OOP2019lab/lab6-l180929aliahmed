#include "l180929  student.h"
#include <iostream>
using namespace std;

int main(){
	student s1;
	//Adding scores 10, 3, 7 and 1 in s1:
	s1.addQuizScore(10); s1.addQuizScore(3); s1.addQuizScore(7); s1.addQuizScore(1);
	//printing s1:
	s1.print();
	
	student s2(4, 2);
	//Adding score 9, 4 and 6 in s2:
	s2.addQuizScore(9); s2.addQuizScore(4); s2.addQuizScore(6);
	//Printing s2:
	s2.print();

	//Invoking copy constructor for s3:
	student s3(s1);
	s3.print();

	//update score of s3:
	//changing score of quiz 2 to 3:
	s3.updateScore(2,3);
	s3.print();

	//checking for invalid input:
	s3.updateScore(10, 3);

	//Comparing s1 with s2:
	cout<<"Comparison: "<<endl<<s1.compare(s2)<<endl;

	//Setting the GPA of s3 to 3:
	s3.setGPA(3);
	s3.print();
	s1.print();

}

/*
Answers:
-Whenever an object is declared without mentioning any overloaded constructors, the default construstor is called or invoked. If we pass arguments while declaring the object, the overloaded constructor is invoked. If we pass an object of the same type as an argument, the copy constructor is invoked.
-