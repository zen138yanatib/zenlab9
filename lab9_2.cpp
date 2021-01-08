#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("C:\\temp\\cheerbook.txt") ;
	dest.open("C:\\temp\\cheerbook_copy.txt");
    string text = "";
	string x;
	while(getline(source,x))
	{
		text += x;
		text += "\n";
	}
	dest << "-------------------- BOOM ---------------------\n";
    dest << text;
    dest << "-------------------- HA!! ---------------------";
    source.close();
    dest.close();
	return 0;
}   

