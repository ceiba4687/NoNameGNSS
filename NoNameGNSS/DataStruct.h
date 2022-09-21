#pragma once
//data and struct used in the GNSS
const double GM = 3.986005e14;

struct RINEX_Nav

{
	int PRN;
	double a0, a1, a2;//time gaizheng
	double IODE, Crs, Deltan, M0;// ORBIT - 1
	double Cuc, e, Cus, SqrtA;// ORBIT - 2
	double Toe, Cic, OMEGA, Cis;// ORBIT - 3
	double i0, Crc, omega, OMEGAdot;// ORBIT - 4
	double IDOT, GpsWeekNumber, L2C, L2P;// ORBIT - 5
	double SatAccuracy, SatHealth, TGD, IODC;// ORBIT - 6
};

struct GPSTime
{
	int WeekNo;
	double WeekSecond;
};

struct NTime
{
	int Year;
	int Month;
	int Day;
	int Hour;
	int Minute;
	double Second;
};