#include<iostream>
#include<fstream>
#include<string>
#include"DataStruct.h"


using namespace std;
void read_nav_gps(string, BRDC_GPS);

int read_rinex_nav(string filename)
{
	ifstream fin;
	fin.open(filename);
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
			read_nav_gps(buf,brdc);
		fin.clear();
	}
	fin.close();
	return 0;
}

void read_nav_gps(string buf, BRDC_GPS brdc)
{
	cout << buf.substr(4, 19) << endl;
	brdc.a0 = stod(buf.substr(23, 19));
	brdc.a1 = stod(buf.substr(42, 19));
	brdc.a2 = stod(buf.substr(61, 19));
}