#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string xfce4 = "xfce4-terminal --command='make.sh'";
	const char *xfce = xfce4.c_str();
	system(xfce);
	return 0;
}

	
