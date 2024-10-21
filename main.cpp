#include "configApp.h"
#include "Login.h"
#include "ManageClass.h"
#include <conio.h>
#include <iostream>
using namespace std;


int main()
{
	ConfigApp config;
	config.init();

	Login* login = new Login();
	login->mainLogin();
	delete login;

	/*ManageClassroom* lop = new ManageClassroom();
	lop->mainClassroom();
	delete lop;*/

	_getch();
	system("pause");
	return 0;
}
