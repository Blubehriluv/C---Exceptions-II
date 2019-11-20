#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

void QuestionFive()
{
	
}

void QuestionFour()
{
	
}

void QuestionThree()
{
	
}

void QuestionTwo()
{
	char playerChar[] = "";
	
	cout << "" << endl;
	cout << "This is question two." << endl;
	cout << "What letter does your last name start with?" << endl;
	cin >> playerChar;
	
	try
	{
		//The user's input is passed to a string for testing to make sure it's only a character
		string tester = playerChar;
		//tester = *playerChar;

		if(tester.length > 0)
		{
			cout << tester << " is not a char." << endl;
			cout << "TOO MANY LETTERS." << endl;
			//throw playerChar;
			system("Pause");
		}
			
		else if (tester == "m")
		{
			cout << "Our last names begin with the same letter." << endl;
			cout << "On to the next question." << endl;
			system("Pause");
		}
		
		else if (isalpha(*playerChar))
		{
			cout << "Nice! " << playerChar << " is an interesting letter!" << endl;
			system("Pause");
		}
	}
	catch (string e)
	{
		cout << "I only asked for one letter :)" << endl;
		cout << "Try again!" << endl;
		QuestionTwo();		
	}
}

void QuestionOne()
{
	string playerColor;
	
	cout << "" << endl;
	cout << "First question:" << endl;
	cout << "What's your favorite color?" << endl;
	cin >> playerColor;

	try
	{
		if (playerColor == "blue" || playerColor == "Blue")
		{
			cout << "" << endl;
			cout << "Correct!" << endl;
			cout << "On to the next question." << endl;
			system("Pause");
			QuestionTwo();
		}
		if (playerColor == "purple" || playerColor == "Purple")
		{
			cout << "" << endl;
			cout << "Correct!" << endl;
			cout << "On to the next question." << endl;
			system("Pause");
			QuestionTwo();
		}
		if (playerColor == "green" || playerColor == "Green")
		{
			cout << "" << endl;
			cout << "Correct!" << endl;
			cout << "On to the next question." << endl;
			system("Pause");
			QuestionTwo();
		}
		else
		{
			throw playerColor;
		}
	}
	catch(string a)
	{
		cout << "Wrong! I don't like that color!" << endl;
		cout << "Try again!" << endl;
		QuestionOne();
	}
	
	
}

void Introduction()
{
	cout << "Welcome to the Unfair Questionnaire!" << endl;
	cout << "Where you probably won't have the right answers!" << endl;
	cout << "Every single time!" << endl;

	QuestionOne();
}

int main()
{
	string playerName;
	cout << "Enter your name!" << endl;
	cin >> playerName;
	system("CLS");
	
	Introduction();
}








