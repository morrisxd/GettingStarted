// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>


using namespace std;

int main()
{
	istream_iterator<int> eof;
	ifstream infile("c:\\batch\\flower.txt");

	istream_iterator<int> input(infile);

	cout << "The first element : " << *input << endl;
	input++;
	cout << (input == eof ? "EOF" : "others") << endl;

	// ------- from cin stream, method 1 --------
	cout << "input float number, seperated by space or return, press ctrl+z to end:" << endl;

	istream_iterator<float> f_iter(cin);
	istream_iterator<float> eoff;
	vector<float> vecf(f_iter, eoff);

	while (f_iter != eoff)
	{
		vecf.push_back(*f_iter++);
	}

	vector<float>::iterator iter;
	cout << "Replay now:";
	for (iter = vecf.begin(); iter != vecf.end(); iter++)
	{
		cout << *iter << '\0';
	}

	// printf("Hello world!\n");
    return 0;
}

