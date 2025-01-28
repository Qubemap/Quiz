// Quiz.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "Question.h"

int main()
{
	std::vector<Question> questions;

	questions.push_back(Question("In which game did Waluigi first make his appearance?", std::vector<const char*> {"Mario Tennis", "Super Smash Bros. Melee", "Silent Hill", "Mario Golf Toadstool Tour" }));
	questions.push_back(Question("How many times has Waluigi been featured on the Smash Bros. Roster?", std::vector<const char*> {"Zero", "One", "Six", "Two" }));
	questions.push_back(Question("Waluigi's name translates to what in Japanese?", std::vector<const char*> {"Bad Luigi", "Reverse Luigi", "Linguine" }));
	questions.push_back(Question("How Tall is Waluigi?", std::vector<const char*> {"230cm", "180cm", "155cm", "35cm" }));


	int score = 0;

	for (Question current : questions)
	{
		if (current.PrintQuestion())
		{
			score++;
		}
		std::cout << "Your Score: " << score << std::endl << std::endl << std::endl;
	}

	std::cout << "Finished! Your final score: " << score << std::endl;




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
