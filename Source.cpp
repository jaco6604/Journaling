#include<iostream>
#include "inotify.h"
#include<fstream>
#define IN_ATTRIB

using namespace std;
string dat;
int main() {


	struct Journal 
	{
		bool addRemove;
		string timestamp;
		string line;

	};
	struct Journal j;
	j.timestamp = IN_ATTRIB(utimensat(2));


	ofstream MyFile("sample.txt");

		MyFile << "This is the first line" << endl;
		MyFile << "This is the second line" << endl;
		MyFile << "This is the third line" << endl;



		cout << "Enter file to track: " << endl;
		//cin >> dat;
		dat = ("Sample.txt");
		if (dat == ("sample.txt")) {
			ofstream MyFile("j1_sample_text<123>.DAT");

		}






}

//for timestamp add/remove and line make a struct for it. these will be contained in the struct. 
	//create vector for struct as it is easy to manipulate. 
	//relevant inotify functions include in_create, in_delete, in_attrib, in_modify, in_move_self, in_moved_from, in_moved_to




}
