/*

Plan
------------------------------------
1. Main asks the user if they want to decode morse code or encode to morse code

2. Tree Header will build the morse tree = Write a function that builds the morse tree shown in the figure above. The
information of the tree (the letters and the codes) is stored in a txt file. Use a binary search tree or a map to store the codes for letters.

//cin.get() morse.txt file

3. For Encoding: ab = .-

Call the binary search tree or map. Compare the morse nodes and print the English alphabet

4. For Decoding: .- = ab
Call the binary search tree or map. Compare the English Aplhabet and print the morse nodes
See the project as there is an explaination somewhere on the PDF. ~~~~
Notice that between the symbols (dots and dashes) is a space. The space is a delimiter that separates the codes for letters.

*/

#include <iostream>
#include <string>

using namespace std;

void main()

{
	int userinput;
	string result;
	cout << "Please indicat if you would like to: \n" << "1. Decode Morse Code into English Alphabet" << "\n 2. Encode English Alphabet into Morse Code.";
	cin >> userinput;

	switch (userinput)
	{
	case 1:
		//
		break;
	case 2:
		//call function for English Alphabet into Morse Code
		break;

	}
	result = "Words or things go here!";

	cout << result << endl;


	system("pause");
}