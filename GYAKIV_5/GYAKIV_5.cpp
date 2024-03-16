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
		be.get(bet);// beolvasás karakterenként
		cout << bet;
		//be.getline(szoveg, 80); -beolvasás soronként
		//cin << szoveg<< endl;
		//be >> szoveg;-beolvasás szóközig vagy sorvége jelig
		//cout<< szoveg<< " ";
	}
	be.close();
	system("pause");
	return 0;
}