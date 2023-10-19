#include<iostream> //Inserting all libraries that will be used
#include<cstdlib>
#include<iomanip>
#include<ctime>
#include<string>

using namespace std;
int countWords(string str);
int main()
{
	string str;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q") break;
		int x = countWords(str);
		cout << "number of words = " << x << endl;
	}
	return 0;

}
int countWords(string str)
{
	int words = 1;
	for (int i = 0; str[i] >= i; i++)
		if (str[i] == ' ')
			words++;
	return words;
}