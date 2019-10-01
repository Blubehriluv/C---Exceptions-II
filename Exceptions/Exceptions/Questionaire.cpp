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
	cout << "This is question two." << endl;
	system("Pause");
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

void main()
{
	string playerName;
	cout << "Enter your name!" << endl;
	cin >> playerName;
	system("CLS");
	
	Introduction();
}








