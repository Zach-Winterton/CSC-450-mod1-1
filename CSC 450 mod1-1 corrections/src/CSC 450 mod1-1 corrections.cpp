//============================================================================
// Name        : CSC 450 mod1-1 corrections.cpp
// Author      : Zach Winterton
// Date        : 12/14/2023
// Description : Program given with syntax errors.
// My task was to correct all given syntax errors so that program compiles correctly.
//============================================================================

//-------------ORIGINAL PROGRAM NO CORRECTIONS MADE-------------

/* Simple Program with a few Errors for Correction
   Please be sure to correct all outlined errors.

#include<iostream>
#include<conio.h>

Standard namespace declaration
using namespace std;

Main Function
int main()
{

     //Standard Ouput Statement
     cout<<"Welcome to this C++ Program"<<endl;

     cout<<I have corrected all errors for this program. <<endl;

     // Wait For Output Screen

     //Main Function return Statement
}
*/

//-------------PROGRAM WITH SYNTAX CORRECTIONS MADE-------------

/* Simple Program with a few Errors for Correction
   Please be sure to correct all outlined errors. */ // <--- This line was not properly commented out, it needed: */ at the end/close or else entire program becomes a comment and then does not function correctly.

// Include necessary header files
#include <iostream>
/* Though not necessarily considered a syntax error, I removed <conio.h> since it is not a standard header in C++ and its usage is discouraged in modern C++ programming.
 * <conio.h> is also not portable and may lead to compatibility issues on different systems or with different compilers. I also find it not necessary for this program.
 */

// Standard namespace declaration <--- This line needed commented out.
using namespace std;

// Main Function <--- This line needed commented out.
int main() {

	// Standard output statements:

	cout << "Welcome to this C++ Program." << endl;
	// Added necessary quotation marks to below output statement.
	cout << "I have corrected all errors for this program." << endl;

	/* I Removed "Wait For Output Screen" comment as I believe it not to be necessary.
	 * If running in a specific IDE that closes the console window immediately, I would then want to add cin.get() or cin.ignore() to achieve the desired functionality for waiting for a user's input.
	 * This would help the program not terminate right after displaying the results, leaving the user unable to view the data.
	 */

	// Main Function return Statement

	return 0; // Added return 0, indicating successful program execution.
}


