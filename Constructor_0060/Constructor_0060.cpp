#include <iostream>
using namespace std;
#include <string>

class mahasiswa
{
public:
	static int nim;
	int id;
	string nama;

	void setID();

	void printAll();
	mahasiswa(string pnama) : nama(pnama)
	{
		setID();
	}
};

int mahasiswa::nim = 20;

void mahasiswa::setID()
