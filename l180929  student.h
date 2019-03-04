#include <iostream>
#include <string>
using namespace std;

class student{
private:
	static int counter;
	int ID;
	float* quizScore;
	int quizCap;
	int quizTaken;
	float GPA;

public:
	student();
	student(int qc, float gpa);
	student(const student& x);
	~student();

	void addQuizScore(float score);
	void setGPA(float gpa);
	float getGPA()const;
	void print()const;
	bool compare(student otherStudent);
	void updateScore(int qn, float score);
};

