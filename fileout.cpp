#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	ofstream ofs("My file.txt")
		ofs<<"shlok"<<endl;
	ofs<<34<<endl;
	ofs<<"devops"<<endl;
	ofs.close();
}

