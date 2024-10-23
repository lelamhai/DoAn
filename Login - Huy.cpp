
#include <iostream>
#include <cstring> 
#include "QUIZ_SYSTEM_H.h"
using namespace std;

Student* logIn(PTRSTUDENT student) {
    char user[15];
    char password[30];
    bool isUserCorrect;

    while (true) {
        isUserCorrect = false;
		cout << "Nhap tai khoan dang nhap: ";
        cin >> user;
        cout << "Nhap mat khau: ";
        cin >> password;

        if (strcmp(user, "GV") == 0) {
            if (strcmp(password, "GV") == 0) {
                cout << "Dang nhap thanh cong tai khoan Giao Vien" << endl;
                return NULL; 
            }
			else {
                cout << "Mat khau khong dung, vui long nhap lai" << endl;
            }
        }

        else {
            for (PTRSTUDENT p = student; p != NULL; p = p->next) {  
                if (strcmp(user, p->info.studentCode) == 0) {
					isUserCorrect = true; 
                    if (strcmp(password, p->info.password) == 0) {
                        cout << "Dang nhap thanh cong!" << endl;
                        return &(p->info); 
                    } 
					else {
                        cout << "Mat khau khong dung, vui long nhap lai" << endl;
                    }
                }
            }
            
			if (!isUserCorrect) {
				cout << "Tai khoan khong ton tai, vui long thu lai" << endl;	
			}
        }
    }
}

PTRSTUDENT newNodeStudent(Student x) {
    PTRSTUDENT tmp = new NodeStudent();
    tmp->info = x;
    tmp->next = NULL;
    return tmp;
}

void insertFirst(PTRSTUDENT &p, Student x) {
    PTRSTUDENT tmp = newNodeStudent(x);
    if (p == NULL) {
        p = tmp;
    } else {
        tmp->next = p;
        p = tmp;
    }
}

Student inputStudent() {
    Student sv;
    cout << "Nhap ma sinh vien: ";
    cin >> sv.studentCode;
    cout << "Nhap ho sinh vien: ";
    cin >> sv.firstName;
    cout << "Nhap ten sinh vien: ";
    cin >> sv.lastName;
    cout << "Nhap gioi tinh (M/F): ";
    cin >> sv.gender;
    cout << "Nhap mat khau: ";
    cin >> sv.password;
    sv.scoreList = NULL;
    return sv;
}

void createStudentList(PTRSTUDENT &stdList) {
    int n;
    cout << "Nhap so luong sinh vien can nhap: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i+1 << ":" << endl;
        Student sv = inputStudent();
        insertFirst(stdList, sv);
    }
}

int main() {
    PTRSTUDENT stdList1 = NULL;
    
    createStudentList(stdList1);
    
    Student* stdPtr;
	stdPtr = logIn(stdList1);
    
    cout << "Sinh vien da dang nhap thanh cong la Sv co ma " << stdPtr->studentCode << endl;

    return 0;
}

