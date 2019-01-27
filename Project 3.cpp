//Name:Kevin Davis
//Course:CS1044, Spring 2018, Dr.Johnson
/*Purpose:This program produces two random numbers and asks the user to add
them together. The program adds those numbers and informs the user if their answer
was right or not.*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() 
{
	int num1, num2, ans, user_ans;

	//allows the random number to be affected by time
	srand(time(0));
	// Random number mod 41 gives 0 to 40 then plus 10 gives 10 to 50
	num1 = (rand() % 41) + 10;
	// If the number is less than 10 then redo
	// process is repeated
	num2 = (rand() % 41) + 10;
	// correct answer to the problem
	ans = num1 + num2;

	//information about program printed on screen
	//double line spacing for apperance
	cout << "Name:Kevin Davis\n";
	cout << "Course:CS1044, Spring 2018, Dr.Johnson\n\n";
	cout << "Purpose:This program produces two random numbers and asks the user \n";
	cout << "to add them together.The program adds those numbers and informs \n";
	cout << "the user if their answer was right or not. \n";
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - \n\n";

	cout << "Add the following \n";
	// only for asthetic purposes
	cout << "- - - - - - - - - - - - - - -\n";
	cout << setw(6) << num1 << endl;
	//aligning the + sign to the left
	cout << left << setw(3) << " + ";
	cout << right << setw(3) << num2 << endl;
	cout << "- - - - - - - - - - - - - - -\n";
	cout << left << setw(4) << " = ";
	//user to input their answer and saved as a variable
	cin >> user_ans;
	//print if answer is correct
	if (user_ans == ans)
		cout << endl << "Congratulations the answer is correct !! \n\n";
	// print if answer is wrong
	else
		cout << endl << "Sorry the correct answer is " << ans << endl << endl;

	system("pause");
	return 0;
}

