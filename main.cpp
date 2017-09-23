#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>
#include <stdlib.h>


using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string GetActiveWindowTitle()
{
 char wnd_title[256];
 HWND hwnd=GetForegroundWindow(); // get handle of currently active window
 GetWindowText(hwnd,wnd_title,sizeof(wnd_title));
 return wnd_title;
}
int main() {
	time_t t = time(0); //aika tällä hetkellä
	struct tm * now = localtime( & t);
	cout << now->tm_mday << '-'
		<<	(now->tm_mon + 1) << '-'
		<< (now->tm_year + 1900)
		<< endl;
		while(true){
		
		cout << GetActiveWindowTitle() << endl;
		_sleep(1000);
		
}
}

