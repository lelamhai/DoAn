#include <windows.h>

#define ColorCode_Back			0
#define ColorCode_DarkBlue		1
#define ColorCode_DarkGreen		2
#define ColorCode_DarkCyan		3
#define ColorCode_DarkRed		4
#define ColorCode_DarkPink		5
#define ColorCode_DarkYellow	6
#define ColorCode_DarkWhite		7
#define ColorCode_Grey			8
#define ColorCode_Blue			9
#define ColorCode_Green			10
#define ColorCode_Cyan			11
#define ColorCode_Red			12
#define ColorCode_Pink			13
#define ColorCode_Yellow		14
#define ColorCode_White			15

#define ColorCodeDefault		7


void setBlackText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorCode_Back);
}

void setWhiteText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorCode_White);
}

void setBlueText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorCode_Blue);
}

void setGreenText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorCode_Green);
}

void setRedText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorCode_Red);
}

void setPinkText()
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorCode_Pink);
}

void setColorText(int x)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}

void BackgroundColor()
{
	system("COLOR BC");
}