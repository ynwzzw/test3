#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main()
{
	string line;
	int row =0;
	int count = 0;
	cout<<"������������";
	while(1){
		if((getline(cin,line))==0){
			break;
		}
		row++;
		count = count + line.length();
	}
	cout<<"����:"<<row<<endl;
	cout<<"�ַ���:"<<count<<endl;
	system("pause");
	return 0;
}