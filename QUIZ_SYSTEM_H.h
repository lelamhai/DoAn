#ifndef QUIZ_SYSTEM_H
#define QUIZ_SYSTEM_H

#include<iostream>
#include<cstring>
#include <string>
using namespace std; 

const int MAX_NUMBER_CLASS = 1000;

// Struct question with question id, 4 option and answer;
struct Question {
	int questionId;
	string content;
	string optionA;
	string optionB;
	string optionC;
	string optionD;
	char answer;
};

struct NodeQuestion {
	Question info;
	NodeQuestion *next;
};

typedef NodeQuestion *PTRQUESTION;

struct Subject {
	char subjectCode[15];
	string subjectName;
	PTRQUESTION listQuestion;
	
};

struct SubjectNode {
	int key;
	Subject info;
	int height;
	SubjectNode *left;
	SubjectNode *right;
};

typedef SubjectNode *PTRSUBJECT;

struct Score {
	char subjectCode[15];
	float diem;
};

struct NodeScore {
	Score info;
	NodeScore *next;
};

typedef NodeScore *PTRSCORE;

struct Student {
	char studentCode[15];
	char firstName[30];
	char lastName[30];
	char gender;
	char password[30];
	PTRSCORE scoreList;
};

struct NodeStudent {
	Student info;
	NodeStudent *next;
};

typedef NodeStudent *PTRSTUDENT;

struct Classroom {
	char classCode[15];
	string className;
	PTRSTUDENT studentList;
};

struct ClassList {
	Classroom* classes[MAX_NUMBER_CLASS];
	int countClass;
};
 #endif
