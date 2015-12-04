/*

Plan
------------------------------------
1. Main asks the user if they want to decode morse code or encode to morse code

2. Tree Header will build the morse tree = Write a function that builds the morse tree shown in the figure above. The
information of the tree (the letters and the codes) is stored in a txt file. Use a binary search tree or a map to store the codes for letters.

//cin.get() morse.txt file

3. For Encoding: ab = .-

Call the map. Compare the morse nodes and print the English alphabet
	Read a character	print the value associated with the key
	continue until a non character is found.

4. For Decoding: .- = ab
Call the binary search tree or map. Compare the English Aplhabet and print the morse nodes
See the project as there is an explaination somewhere on the PDF. ~~~~
Notice that between the symbols (dots and dashes) is a space. The space is a delimiter that separates the codes for letters.

*/

#include <iostream>
#include <string>
#include <istream>
#include "Maps.cpp"
#include "Maps.h"


using namespace std;

void main()

{
	int userinput;
	string result;
	
	cout << "Please indicate if you would like to: \n" << "1. Decode Morse Code into English Alphabet" << "\n2. Encode English Alphabet into Morse Code. \n";
	cin >> userinput;

	switch (userinput)
	{
	case 1:
		// Decode Morse Code into Enligh Aplhabet
		Decode();
		break;
	case 2:
		//Encode English Alphabet into Morse Code
		Encode();
		break;
	}

	system("pause");
};

string Decode()
{
	string user_decode, result_decode;
	cin >> user_decode;
	bool counter = true;
	for (counter != false; int i = 0; i++)
	{
		if (user_decode[i] == null)
			counter = false;
		else
			result_decode += Map.find(user_decode[i]);
	}
	return result_decode;
};

string Encode()
{

	string user_encode, result_encode;
	while (cin)
	{
		cin >> user_encode;
		result_encode += Morse_Map[user_encode];
	}
	return result_encode;
};