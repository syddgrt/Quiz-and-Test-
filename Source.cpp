//SYED MUHAMMAD HAIKAL BIN SYED HUSNI 153086

#include<iostream> //standard input output
#include<fstream> //input output files stream
#include<stdlib.h> //to enable some std functions - exit()
using namespace std;

//Global declaration

ifstream triangleQuiz, rectangleQuiz, parallelogramQuiz;
fstream studentFile;

void shapeSolver();       // function prototype
void quiz();             // function prototype
int marks(int,int,int);  // function prototype

void callTriangleSolve(); //function protype
void callRectangleSolve(); //function protype
void callParallelogramSolve(); //function protype

int callTriangleQuiz(); // function protoype
int callRectangleQuiz(); // function protoype
int callParallelogramQuiz(); // function protoype

float base, height; // Triangle and Parallelogram
float length, width; // Rectangle
float area; // Triangle, parallelogram and rectangle

int MainChoice; // Menu Choice
int shapeChoice, variableChoice; // shape choice and what missing variable that makes up a shape.
char finalSolverChoice; // continue use or return to menu

int totalMarks, totalMarks2; // Marks 

int studentID = 0; // Initiate student ID to zero

char quizChoice, exitChoice; // Choices

int shapeQuizChoice; // Choose shape to answer

//Variables for shape quiz
int AreaT, BaseT, HeightT;
int AAreaT, ABaseT, AHeightT;

int AreaR, BaseR, HeightR;
int AAreaR, ABaseR, AHeightR;

int AreaP, BaseP, HeightP;
int AAreaP, ABaseP, AHeightP;

//marks calculation
int TotalT = 0, TotalR = 0, TotalP = 0;
int Total = 0;

//for loop variables to skip through questions.
int i, k;

int main()
{
	
	//User interface
	cout << "\t\t\t\t---------------------------------------------------\n"; 
	cout << "\t\t\t\t|  This program can help you learn about shapes!  |\n";
	cout << "\t\t\t\t---------------------------------------------------\n";
	do
	{
		//Prompt user to enter choices
		cout << "\nThere are 3 choices to choose from" << endl;
		cout << "1.Calculate the missing variables of a shape" << endl;
		cout << "2.Take the quiz" << endl;
		cout << "3.Exit program" << endl;

		//input choice
		cout << "Choice is : ";
		cin >> MainChoice;

		if (MainChoice == 1)
		{
			shapeSolver(); // call for function shapeSolver
		}
		else if (MainChoice == 2)
		{
			quiz(); // call for function quiz
		}
		else if (MainChoice == 3)
		{
			cout << "\nProgram terminated successfully!";
			return 0;
		}
		else
			cout << "\nPlease re-enter valid choice!";
	} while (MainChoice != 1 || MainChoice != 2 || MainChoice != 2);
	
}
void shapeSolver() 
	{
	//prompts user to enter what shape
		do
		{
			cout << "\nWhat shape is it?" << endl;
			cout << "1.Triangle" << endl;
			cout << "2.Rectangle" << endl;
			cout << "3.Parallelogram" << endl;
			cout << "4.Exit shapeSolver and go back to Menu";
			do
			{
				cout << "\nChoice is : ";
				cin >> shapeChoice;
				if (shapeChoice == 1)
					callTriangleSolve(); // Solve triangle 
				else if (shapeChoice == 2)
					callRectangleSolve(); // Solve rectangle
				else if (shapeChoice == 3)
					callParallelogramSolve(); // Solve parallelogram
				else if (shapeChoice = 4)
					main();
			} while (shapeChoice != 1 && shapeChoice != 2 && shapeChoice != 3 && shapeChoice != 4);
			// Prompt user to continue or exit based on choice
			cout << "\n\nDo you still wanna use or quit to main menu?\n\n";
			cout << "Press 'Y' if you wish to continue...";
			cout << "\nPress 'N' if you wish to return to menu...\n";
			cout << "\nChoice is :";
			cin >> finalSolverChoice;

			if (finalSolverChoice == 'Y' || finalSolverChoice == 'y')
				shapeSolver();
			else if (finalSolverChoice == 'N' || finalSolverChoice == 'n')
				main();

		} while (finalSolverChoice != 'Y' && finalSolverChoice != 'y' && finalSolverChoice != 'N' && finalSolverChoice != 'n');
	} 

	void callTriangleSolve()
	{
		//Triangle shape
		//User interface
		cout << "\t\t\t Shape choice is Triangle\n" << endl; 

		cout << "\t\t\t          *  \n";
		cout << "\t\t\t         * *  \n";
		cout << "\t\t\t        *   *  \n";
		cout << "\t\t\t       *     *   (Area = 0.5 * base * height) \n";
		cout << "\t\t\t      *       *  \n";
		cout << "\t\t\t     *         *  \n";
		cout << "\t\t\t    *           *  \n";
		cout << "\t\t\t   ***************  \n";


		//Display general triangle Area formula
		//Prompt user to enter choice
		cout << "\nThe formula of Area for triangle is (Area = 0.5 * base * height) " << endl;
		cout << "\nWhat do you wish to find?" << endl;
		cout << "1.Area" << endl;
		cout << "2.Base" << endl;
		cout << "3.Height" << endl;

		do // do while loop if variable choice not 1,2 or 3.
		{
			cout << "Choice is : ";
			cin >> variableChoice;
			if (variableChoice == 1)
			{
				cout << "Input the values of Base : ";
				cin >> base;
				cout << "Input the values of height :";
				cin >> height;
				area = 0.5 * base * height;
				cout << "The value of Area is : " << area;
			}

			else if (variableChoice == 2)
			{
				cout << "Input the values of Area : ";
				cin >> area;
				cout << "Input the values of Height : ";
				cin >> height;
				base = (area / height) * 2;
				cout << "The value of Base is : " << base;
			}

			else if (variableChoice == 3)
			{
				cout << "Input the values of Area : ";
				cin >> area;
				cout << "Input the values of Base : ";
				cin >> base;
				height = (area / base) * 2;
				cout << "The value of Height is : " << height;
			}
			else
			{
				cout << "Error input is invalid! Please re-input your choice..." << endl;  // Display error message, prompt user to re-input
				cout << " \nChoice is : ";
			}

		} while (variableChoice != 1 && variableChoice != 2 && variableChoice != 3);
	} //retard
	void callRectangleSolve()
	{
		cout << "\t\t\t Shape choice is Rectangle\n" << endl;

		cout << "\t\t\t      ***************************  \n";
		cout << "\t\t\t      *                         *  \n";
		cout << "\t\t\t      *                         *  (Area = width * length) \n";
		cout << "\t\t\t      *                         *  \n";
		cout << "\t\t\t      ***************************  \n";

		cout << "\nThe formula of Area for Rectangle is (Area = width * length) " << endl;
		cout << "\nWhat do you wish to find?" << endl;
		cout << "1.Area" << endl;
		cout << "2.Width" << endl;
		cout << "3.Length" << endl;

		do
		{
			cout << "Choice is : ";
			cin >> variableChoice;
			if (variableChoice == 1)
			{
				cout << "Input the values of Width : ";
				cin >> width;
				cout << "Input the values of Length : ";
				cin >> length;
				area = width * length;
				cout << "The value of Area is : " << area;
			}

			else if (variableChoice == 2)
			{
				cout << "Input the values of Area : ";
				cin >> area;
				cout << "Input the values of Length : ";
				cin >> length;
				width = (area / length);
				cout << "The value of Base is : " << width;
			}

			else if (variableChoice == 3)
			{
				cout << "Input the values of Area : ";
				cin >> area;
				cout << "Input the values of Width : ";
				cin >> width;
				length = (area / width);
				cout << "The value of Length is : " << length;
			}
			else
			{
				cout << "Error input is invalid! Please re-input your choice..." << endl;  // Display error message, prompt user to re-input
				cout << " \nChoice is : ";
			}

		} while (variableChoice != 1 && variableChoice != 2 && variableChoice != 3);
	}
	void callParallelogramSolve()
	{
		cout << "\t\t\t        Shape choice is Parallelogram \n" << endl;

		cout << "\t\t	       ***************************  \n";
		cout << "\t\t	      *                         *  \n";
		cout << "\t\t	     *                         *  (Area = base * height) \n";
		cout << "\t\t	    *                         *  \n";
		cout << "\t\t	   ***************************  \n";

		cout << "\nThe formula of Area for Parallelogram is (Area = base * height) " << endl;
		cout << "\nWhat do you wish to find?" << endl;
		cout << "1.Area" << endl;
		cout << "2.Base" << endl;
		cout << "3.Height" << endl;

		do
		{
			cout << "Choice is : ";
			cin >> variableChoice;
			if (variableChoice == 1)
			{
				cout << "Input the values of Base : ";
				cin >> base;
				cout << "Input the values of height :";
				cin >> height;
				area = base * height;
				cout << "The value of Area is : " << area;
			}

			else if (variableChoice == 2)
			{
				cout << "Input the values of Area : ";
				cin >> area;
				cout << "Input the values of Height : ";
				cin >> height;
				base = (area / height);
				cout << "The value of Base is : " << base;
			}

			else if (variableChoice == 3)
			{
				cout << "Input the values of Area : ";
				cin >> area;
				cout << "Input the values of Base : ";
				cin >> base;
				height = (area / base);
				cout << "The value of Height is : " << height;
			}
			else
			{
				cout << "Error input is invalid! Please re-input your choice..." << endl;  // Display error message, prompt user to re-input
				cout << " \nChoice is : ";
			}
		} while (variableChoice != 1 && variableChoice != 2 && variableChoice != 3);
	}
void quiz()

	{
		//bool declaration to only let each quiz shape to be executed once.
		bool onlyOnceTriangle = false;
		bool onlyOnceRectangle = false;
		bool onlyOnceParallelogram = false;
		// User interface
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		\tQUIZ\t		  *" << endl;
		cout << "\t\t\t\t***************************************************\n";
		cout << "These quiz consists of 3 parts, each part having 3 sections and each section have 4 questions...\n" << endl;
		cout << "There are a total of 36 questions...\n";


		do
		{ //prompt user
			cout << "Press 'Y' if you are ready...";
			cout << "Press 'N' if you wish to return to menu...";
			cout << "\n\nChoice is : ";
			cin >> quizChoice;

			studentFile.open("studentMarks.txt",ios::in | ios::out | ios::app); // Open file stream - ios app is to make sure new datas 
																				// written into file does not overwrite the old one. Instead will write below them.

			if (quizChoice == 'Y' || quizChoice == 'y')
			{
				int a = 0;
				
				int i;
				int studentID[6]; // Declare array student ID consists of 6 digit value
				cout << "Please enter your student ID\n";
				for (int i = 1; i <= 6; i++)
				{
					cout << "digit #" << i << " : "; // Input student ID
					cin >> studentID[i];
				}
				cout << "Your student ID is : "; // Re-display student ID
				for (int i = 1; i <= 6; i++)
				{
					cout << studentID[i];
				}
				studentFile << "\n";

				for (int i = 1; i <= 6; i++)
				{
					studentFile << studentID[i]; // write student ID into file
				}

				do
				{
					cout << "\n\nWhich shape quiz you want to take ?" << endl;
					cout << "1.Triangle" << endl;
					cout << "2.Rectangle" << endl;
					cout << "3.Parallelogram" << endl;
					cout << "Choice is : ";
					cin >> shapeQuizChoice;
					do
					{
						if (!onlyOnceTriangle && shapeQuizChoice == 1) //Call Triangle quiz
						{
							onlyOnceTriangle = true; // change bool to true
							callTriangleQuiz(); 
							cout << "\nYou have already answered Triangle Quiz, you cannot repeat it anymore.";
							a++;
						}

						else if (!onlyOnceRectangle && shapeQuizChoice == 2) //Call Rectangle quiz
						{ 
							onlyOnceRectangle = true; // change bool to true
							callRectangleQuiz();
							cout << "\n\NYou have already answered Rectangle Quiz, you cannot repeat it anymore.";
							a++;
						}
						else if (!onlyOnceParallelogram && shapeQuizChoice == 3) //Call Parallelogram quiz
						{
							onlyOnceParallelogram = true; // change bool to true
							callParallelogramQuiz();
							cout << "\n\You have already answered Parallelogram Quiz, you cannot repeat it anymore.\n\n";
							a++;
						}
						else
							cout << "\nInvalid input, please re-enter choice!";
					} while (shapeQuizChoice != 1 && shapeQuizChoice != 2 && shapeQuizChoice != 3);
					

				} while (a < 3); //loop as long as all 3 choices not yet picked and answered

			}
			if (quizChoice == 'N' || quizChoice == 'n')
			{
				main(); // return to main if choice N or n
			}

		} while (quizChoice != 'Y' && quizChoice != 'y' && quizChoice != 'N' && quizChoice != 'n');

		cout << "Computing Marks!\n"; 

		marks(TotalT, TotalR, TotalP); // call function marks and pass argument TotalT,
									// TotalR and TotalP to the function to be displayed in the program
		
		totalMarks2 = totalMarks; // Assign totalMarks2 to totalMarks

		studentFile << "\nTotal quiz marks = " << totalMarks2; //write the total quiz marks in studentmarks.txt
		
		do
		{
			cout << "\nDo you wish to exit?";
			cout << "\nPress 'Y' if you yes...";
			cout << "\nPress 'N' if you wish to return to menu...";
			cin >> exitChoice;
			if (exitChoice == 'Y' || exitChoice== 'y')
			{
				cout << "\nProgram terminate succesfully";
				exit(1);
			}
			else if (exitChoice == 'N' || exitChoice == 'n')
			{
				main();
			}

		} while (exitChoice != 'Y' && exitChoice != 'y' && exitChoice != 'N' && exitChoice != 'n');
		

	}

	int callTriangleQuiz()
	{
		cout << "\nQUIZ BEGIN!" << endl;
		cout << "\t\t\t\t***************************************************\n"; //User interface
		cout << "\t\t\t\t*		   TRIANGLE QUIZ\t	  *" << endl;
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		   FIRST SECTION\t	  *" << endl;
		cout << "\t\t\t\t***************************************************\n";


		triangleQuiz.open("Triangle.txt"); // Open triangle.txt files to get the data
		cout << "Reading data from file...\n\n"; 
		for (i = 1; i <= 4; i++)
		{
			// First section				
			// Calculate the area given base and height - 4 sets of questions each first section
			// 1 mark is given (totalT+1) for correct answer
			cout << "-Question " << i << "-" << endl;                          												   
			triangleQuiz >> AreaT;											   
			triangleQuiz >> BaseT;											  
			cout << "The base of the triangle is : " << BaseT << endl;
			triangleQuiz >> HeightT;
			cout << "The height of the triangle is : " << HeightT << endl;

			cout << "The area of the triangle must be : ";
			cin >> AAreaT;

			if (AAreaT == AreaT) // Check if answer is correct
			{
				cout << "\nCorrect!";
				cout << " 1 Mark!\n\n";
				Total = Total + 1; // 1 marks to total
			}
			else
			{
				cout << "\nWrong, the correct answer is : " << AreaT << endl; // Display correct answer
			}

		}
		TotalT = Total; // Assign current Total to Total marks for Triangle quiz section 1 (TotalT)
		triangleQuiz.close(); // close the current file, so that next section can begin from desired line
		cout << "\t\t\t\t***************************************************\n"; //User interface
		cout << "\t\t\t\t*		SECOND SECTION\t		  *" << endl;
		cout << "\t\t\t\t***************************************************\n";
		 
		triangleQuiz.open("Triangle.txt"); // Open triangle.txt files to get the data
		cout << "Reading data from file...\n\n";

		for (k = 1; k <= 4; k++) // Ignore lines 4 times
		{
			triangleQuiz.ignore(9999, '\n'); // CODE  TO GO STRAIGHT TO LINE 4 - IGNORE 
		}

		for (i = 5; i <= 8; i++)
		{

			// Second section				
			// Calculate the given base and height - 4 sets of questions each first section
			// 1 mark is given (totalT+1) for correct answer
			cout << "-Question " << i << "-" << endl;
			triangleQuiz >> AreaT;
			cout << "The area of the triangle is : " << AreaT << endl;
			triangleQuiz >> BaseT;
			cout << "The base of the triangle is : " << BaseT << endl;
			triangleQuiz >> HeightT;

			cout << "The height of the triangle must be : ";
			cin >> AHeightT;

			if (AHeightT == HeightT) // Check if answer is correct
			{
				cout << "\nCorrect!";
				cout << " 1 Mark!\n\n";
				Total = Total + 1; // 1 marks to total
			}
			else
			{
				cout << "\nWrong, the correct answer is : " << HeightT << endl; // Display correct answer
			}
		} 
		TotalT = Total; // Assign current Total to Total marks for Triangle quiz section 2 (TotalT)
		triangleQuiz.close(); // close the current file, so that next section can begin from desired line
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		THIRD SECTION\t		  *" << endl;
		cout << "\t\t\t\t***************************************************\n";


		triangleQuiz.open("Triangle.txt"); // Open triangle quiz file
		cout << "Reading data from file...\n\n";

		for (k = 1; k <= 8; k++) // Ignore lines 8 times
		{
			triangleQuiz.ignore(9999, '\n'); //TO GO STRAIGHT TO ROW 8
		}

		for (i = 9; i <= 12; i++)
		{
			// Third section				
			// Calculate the base given area and height - 4 sets of questions each first section
			// 1 mark is given (totalT+1) for correct answer
			cout << "\n";
			cout << "-Question " << i << "-" << endl;
			triangleQuiz >> AreaT;
			cout << "The area of the triangle is : " << AreaT << endl;
			triangleQuiz >> BaseT;

			triangleQuiz >> HeightT;
			cout << "The height of the triangle is : " << HeightT << endl;

			cout << "The base of the triangle must be : ";
			cin >> ABaseT;

			if (ABaseT == BaseT) // Check if answer is correct
			{
				cout << "\nCorrect!";
				cout << " 1 Mark!\n\n";
				Total = Total + 1; //  total+1
			}
			else
			{
				cout << "\nWrong, the correct answer is : " << BaseT << endl; // Display correct answer
			}
		}
		cout << "TRIANGLE QUIZ DONE!";
		TotalT = Total;
		studentFile << "\nTriangle quiz marks = " << TotalT;
		return TotalT;
	}
	int callRectangleQuiz()
	{
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		   RECTANGLE QUIZ\t	  *" << endl;
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		   FIRST SECTION\t	  *" << endl;
		cout << "\t\t\t\t***************************************************\n";

		Total = 0;//reset total 
		rectangleQuiz.open("Rectangle.txt");
		cout << "Reading data from file...\n\n";
		for (i = 13; i <= 16; i++)
		{


			cout << "-Question " << i << "-" << endl;
			rectangleQuiz >> AreaR;
			rectangleQuiz >> BaseR;
			cout << "The base of the rectangle is : " << BaseR << endl;
			rectangleQuiz >> HeightR;
			cout << "The height of the rectangle is : " << HeightR << endl;

			cout << "The area of the rectangle must be : ";
			cin >> AAreaR;

			if (AAreaR == AreaR)
			{
				cout << "\nCorrect!";
				cout << " 1 Mark!\n\n";
				Total = Total + 1;
			}
			else
			{
				cout << "\nWrong, the correct answer is : " << AreaR << endl;
			}

		}
		TotalR = Total;
		rectangleQuiz.close();
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		SECOND SECTION\t		  *" << endl;
		cout << "\t\t\t\t***************************************************\n";

		rectangleQuiz.open("Rectangle.txt");
		cout << "Reading data from file...\n\n";
		for (k = 1; k <= 4; k++)
		{
			rectangleQuiz.ignore(9999, '\n'); //TO GO STRAIGHT TO ROW 4
		}

		for (i = 17; i <= 20; i++)
		{


			cout << "-Question " << i << "-" << endl;
			rectangleQuiz >> AreaR;
			cout << "The area of the rectangle is : " << AreaR << endl;
			rectangleQuiz >> BaseR;
			cout << "The base of the rectangle is : " << BaseR << endl;
			rectangleQuiz >> HeightR;

			cout << "The height of the rectangle must be : ";
			cin >> AHeightT;

			if (AHeightT == HeightR)
			{
				cout << "\nCorrect!";
				cout << " 1 Mark!\n\n";
				Total = Total + 1;
			}
			else
			{
				cout << "\nWrong, the correct answer is : " << HeightR << endl;
			}
		}
		TotalR = Total; // Collect marks
		rectangleQuiz.close(); // Close file
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		THIRD SECTION\t		  *" << endl;
		cout << "\t\t\t\t***************************************************\n";


		rectangleQuiz.open("Rectangle.txt");
		cout << "Reading data from file...\n\n";

		for (k = 1; k <= 8; k++)
		{
			rectangleQuiz.ignore(9999, '\n'); //TO GO STRAIGHT TO ROW 4
		}

		for (i = 21; i <= 24; i++)
		{

			cout << "\n";
			cout << "-Question " << i << "-" << endl;
			rectangleQuiz >> AreaR;
			cout << "The area of the rectangle is : " << AreaR << endl;
			rectangleQuiz >> BaseR;

			rectangleQuiz >> HeightR;
			cout << "The height of the rectangle is : " << HeightR << endl;

			cout << "The base of the rectangle must be : ";
			cin >> ABaseR;

			if (ABaseR == BaseR)
			{
				cout << "\nCorrect!";
				cout << " 1 Mark!\n\n";
				Total = Total + 1;
			}
			else
			{
				cout << "\nWrong, the correct answer is : " << HeightR << endl;
			}

		}
		TotalR = Total;
		studentFile << "\nRectangle quiz marks = " << TotalR;
		return TotalR;
	}
	int callParallelogramQuiz()
	{
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		 PARALLELOGRAM QUIZ\t	  *" << endl;
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		   FIRST SECTION\t	  *" << endl;
		cout << "\t\t\t\t***************************************************\n";

		Total = 0;
		parallelogramQuiz.open("Parallelogram.txt");
		cout << "Reading data from file...\n\n";
		for (i = 25; i <= 28; i++)
		{


			cout << "-Question " << i << "-" << endl;
			parallelogramQuiz >> AreaP;
			parallelogramQuiz >> BaseP;
			cout << "The base of the parallelogram is : " << BaseP << endl;
			parallelogramQuiz >> HeightP;
			cout << "The height of the parallelogram is : " << HeightP << endl;

			cout << "The area of the parallelogram must be : ";
			cin >> AAreaP;

			if (AAreaP == AreaP)
			{
				cout << "\nCorrect!";
				cout << " 1 Mark!\n\n";
				Total = Total + 1;
			}
			else
			{
				cout << "\nWrong, the correct answer is : " << AreaP << endl;
			}

		}
		TotalP = Total; // Collect marks
		parallelogramQuiz.close();
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		SECOND SECTION\t		  *" << endl;
		cout << "\t\t\t\t***************************************************\n";

		parallelogramQuiz.open("Parallelogram.txt");
		cout << "Reading data from file...\n\n";
		for (k = 1; k <= 4; k++)
		{
			parallelogramQuiz.ignore(9999, '\n'); //TO GO STRAIGHT TO ROW 4
		}

		for (i = 29; i <= 32; i++)
		{


			cout << "-Question " << i << "-" << endl;
			parallelogramQuiz >> AreaP;
			cout << "The area of the parallelogram is : " << AreaP << endl;
			parallelogramQuiz >> BaseP;
			cout << "The base of the parallelogram is : " << BaseP << endl;
			parallelogramQuiz >> HeightP;

			cout << "The height of the parallelogram must be : ";
			cin >> AHeightP;

			if (AHeightP == HeightP)
			{
				cout << "\nCorrect!";
				cout << " 1 Mark!\n\n";
				Total = Total + 1;
			}
			else
			{
				cout << "\nWrong, the correct answer is : " << HeightP << endl;
			}
		}
		TotalP = Total; // Collect marks
		parallelogramQuiz.close();
		cout << "\t\t\t\t***************************************************\n";
		cout << "\t\t\t\t*		THIRD SECTION\t		  *" << endl;
		cout << "\t\t\t\t***************************************************\n";


		parallelogramQuiz.open("Parallelogram.txt");
		cout << "Reading data from file...\n\n";

		for (k = 1; k <= 8; k++)
		{
			parallelogramQuiz.ignore(9999, '\n'); //TO GO STRAIGHT TO ROW 8
		}

		for (i = 33; i <= 36; i++)
		{

			cout << "\n";
			cout << "-Question " << i << "-" << endl;
			parallelogramQuiz >> AreaP;
			cout << "The area of the parallelogram is : " << AreaP << endl;
			parallelogramQuiz >> BaseP;

			parallelogramQuiz >> HeightP;
			cout << "The height of the parallelogram is : " << HeightP << endl;

			cout << "The base of the parallelogram must be : ";
			cin >> ABaseP;

			if (ABaseP == BaseP)
			{
				cout << "\nCorrect!";
				cout << " 1 Mark!\n\n";
				Total = Total + 1;
			}
			else
			{
				cout << "\nWrong, the correct answer is : " << HeightP << endl;
			}
		}
		TotalP = Total;
		studentFile << "\nParallelogram quiz marks = " << TotalP;
		return TotalP;
	} 

int marks(int marksT, int marksR, int marksP) //function definition
{
	
	totalMarks = marksT + marksR + marksP;
	cout << "\t\t\t\t    *************************************\n";
	cout << "\t\t\t\t\t\t-TOTAL MARKS-" << endl;
	cout << "\t\t\t\t\tTriangle quiz marks      : " << marksT << endl;
	cout << "\t\t\t\t\tRectangle quiz marks     : " << marksR << endl;
	cout << "\t\t\t\t\tParalellogram quiz marks : " << marksP << endl;
	cout << "\t\t\t\t\tThe total marks          : " << totalMarks << endl;
	cout << "\t\t\t\t    *************************************";

	return totalMarks;
}


