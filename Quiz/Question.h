#pragma once

#include <vector>
#include <algorithm>
#include <random>
#include <limits>

class Question
{
private:

	struct Answer {
		const char* m_text;
		bool m_correct;
	};

	const char* m_interrogative;
	std::vector<Answer> m_answers;
	


public:

	Question() { m_interrogative = nullptr; }

	// First answer in vector should be correct answer
	Question(const char* interrogative, std::vector<const char*> answers) {
		
		m_interrogative = interrogative;

		bool isCorrect = true;

		for (const char* currentAnswer : answers)
		{
			Answer newAnswer = { currentAnswer, isCorrect };
			m_answers.push_back(newAnswer);
			isCorrect = false;
		}
	}

	bool PrintQuestion()
	{
		std::cout << m_interrogative << std::endl << std::endl;

		std::random_shuffle(m_answers.begin(), m_answers.end());

		int answerIndex = 1;

		for (Answer currentAnswer : m_answers)
		{
			std::cout << answerIndex << ". " << currentAnswer.m_text << std::endl;
			answerIndex++;
		}

		int input;

		std::cout << std::endl;
		std::cout << "Your Answer: ";

		do
		{
			if (!(std::cin >> input))
			{
				std::cout << "Non-Number. Please enter valid number" << std::endl;
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');
				continue;
			}
			
			if (input > 0 && input <= m_answers.size())
			{
				break;
			}

			std::cout << "Please enter number within valid range." << std::endl;

		} while (true);

		
		if (m_answers[input - 1].m_correct == true)
		{
			std::cout << "is correct!" << std::endl << std::endl;
			return true;
		}
		else
		{
			std::cout << "is incorrect." << std::endl << std::endl;
			return false;
		}
		
	}

};
