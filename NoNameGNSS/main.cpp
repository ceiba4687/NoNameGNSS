#include<iostream>
#include<fstream>
#include<string>
#include"DataStruct.h"
#include"ReadRINEX.h"
using namespace std;
int main()
{
	cout << "Hello GNSS!" << endl;
	string RNXNavFile;
	cout << "Input Nav File:";
	cin >> RNXNavFile;
	read_rinex_nav(RNXNavFile);
	return 0;
}