#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char szoveg[80], bet;
	ifstream be;
	be.open("szoveg.txt");
	if (be.fail() == 1)
	{
		cout << "Hiba";
		system("pause");
		exit(1);
	}
	while (!be.eof())
	{
		be.get(bet);// beolvas�s karakterenk�nt
		cout << bet;
		//be.getline(szoveg, 80); -beolvas�s soronk�nt
		//cin << szoveg<< endl;
		//be >> szoveg;-beolvas�s sz�k�zig vagy sorv�ge jelig
		//cout<< szoveg<< " ";
	}
	be.close();
	system("pause");
	return 0;
}