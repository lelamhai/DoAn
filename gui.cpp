//#include "headers/color.h"
//#include "headers/keyboard.h"
//#include "headers/window.h"
//#include "headers/mylib.h"
//#include <windows.h>
//#include <conio.h>
//#include <iostream>
//using namespace std;
//void Page();
//void Frame();
//void LeftFrame(int x, int y, int w, int h);
//void RightFrame(int x, int y, int w, int h);
//void Sidebar();
//
//
//int main()
//{
//	ShowCur(0);
//	Page();
//}
//
//void Page()
//{
//	Frame();
//	Sidebar();
//	//Content();
//}
//
//void Frame()
//{
//	LeftFrame(0, 0, 24, 24);
//	RightFrame(26, 0, 90, 24);
//}
//
//void LeftFrame(int x, int y, int w, int h)
//{
//	if (h <= 1 || w <= 1)
//	{
//		return;
//	}
//
//	for (int i = x; i <= x + w; i++)
//	{
//		gotoXY(i, y);
//		cout << char(196);
//		gotoXY(i, y + h);
//		cout << char(196);
//	}
//
//	for (int i = y; i <= y + h; i++)
//	{
//		gotoXY(x, i);
//		cout << char(179);
//		gotoXY(x + w, i);
//		cout << char(179);
//	}
//
//	gotoXY(x, y);
//	cout << char(218);
//
//	gotoXY(x + w, y);
//	cout << char(191);
//
//	gotoXY(x, y + h);
//	cout << char(192);
//
//	gotoXY(x + w, y + h);
//	cout << char(217);
//}
//
//void RightFrame(int x, int y, int w, int h)
//{
//	if (h <= 1 || w <= 1)
//	{
//		return;
//	}
//
//	for (int i = x; i <= x + w; i++)
//	{
//		gotoXY(i, y);
//		cout << char(196);
//		gotoXY(i, y + h);
//		cout << char(196);
//	}
//
//	for (int i = y; i <= y + h; i++)
//	{
//		gotoXY(x, i);
//		cout << char(179);
//		gotoXY(x + w, i);
//		cout << char(179);
//	}
//
//	gotoXY(x, y);
//	cout << char(218);
//
//	gotoXY(x + w, y);
//	cout << char(191);
//
//	gotoXY(x, y + h);
//	cout << char(192);
//
//	gotoXY(x + w, y + h);
//	cout << char(217);
//}
//
//void Sidebar()
//{
//	int hover = 0;
//	int active = 0;
//	int menu[4] = { 5, 10, 20, 30 };
//	int y = 1;
//	while (true)
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			setWhiteText();
//			if (hover == i)
//			{
//				setBlueText();
//			} 
//
//			if (active == i)
//			{
//				setGreenText();
//			}
//
//			gotoXY(2, y + i*2);
//			cout <<"Menu " << i + 1 << endl;
//		}
//
//		int key = _getch();
//		int input = KeyArrow(key);
//
//		switch (input)
//		{
//		case UP:
//			hover -= 1;
//			break;
//		case DOWN:
//			hover += 1;
//			break;
//		default:
//			break;
//		}
//
//		if(ENTER == key)
//		{
//			active = hover;
//		}
//	}
//}
