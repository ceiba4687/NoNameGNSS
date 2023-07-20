#include<iostream>
#include<fstream>
#include<string>
#include"DataStruct.h"


using namespace std;
void ReadNav_G(string buf);

int ReadRINEX_Nav(string File)
{
	ifstream fin;
	fin.open(File);
	string buf;
	BRDC_GPS brdc{};
	while (!fin.eof())
	{
		getline(fin,buf);
		//cout << buf << endl;
		fin.clear();
		if (buf.ends_with("END OF HEADER"))
			break;
	}
	while (!fin.eof())
	{
		getline(fin, buf);
		if (buf.starts_with("G"))
			ReadNav_G(buf);
		fin.clear();
	}
	fin.close();
	return 0;
}

void ReadNav_G(string buf)
{
	cout << buf << endl;
}