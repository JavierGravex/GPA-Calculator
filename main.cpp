#include <iostream>
#include <iomanip>


using namespace std;

void menu_1();

void Gpa_C();

void Cal_CGPA();

void instructions();

int main()

{

	menu_1();


	return 0;

}

void menu_1() {

	int opt;

	///Menu//

	system("cls");

	do
	{
		//system("cls");

		cout << "\n" << setw(15) << setfill('-') << " Menu " << setw(10) << setfill('-');
		cout << "\n" << "1: Calculate GPA!!! " << endl;
		cout << "2: Calculate CGPA " << endl;
		cout << "3: How to calculate GPA " << endl;
		cout << "4: Exit. " << endl;

		cout << "Select Option: " << "\n";
		cin >> opt;

		switch (opt)
		{

		case 1:

			Gpa_C();

			break;

		case 2:

			Cal_CGPA();
			break;

		case 3:

			instructions();
			break;

		case 4:
			cout << "Good-bye Student! " << endl; 
			exit(0);

		default:
			break;

		}
	} while (1);
	
}


//GPA Calculator//

void Gpa_C()
{
	int Number_C;
 
	double sum = 0, Total_Cred = 0, total;

	system("cls");

	cout << setw(15) << " GPA Calculator " << "\n";
	cout << "Numbers of Courses" << endl;
	cin >> Number_C;
	double* Cred = new double[Number_C];
	double* Hours = new double[Number_C];

	for (int i = 0; i < Number_C; i++)
	{

		cout << "Credtis " << i + 1 << endl;
		cin >> Cred[i];
		cout << "Hours " << i + 1 << endl;
		cin >> Hours[i];

	}

	for (int i = 0; i < Number_C; i++)
	{

		total = Cred[i] * Hours[i];
		sum += total;

	}

	for (int i = 0; i < Number_C; i++)
	{
		Total_Cred += Cred[i];
	}

	cout << endl << endl;
	cout << "Total Points: " << sum << endl;
	cout << "total credits: " << Total_Cred << endl;
	cout << "total gpa: " << sum / Total_Cred << endl;
	
}

//CGPA Calculator//
void Cal_CGPA() {

	
	int Number_C;

	system("cls");

	cout << setw(10) << setfill('-') << endl;
	cout << " CGPA Calculator " << endl;
	cout << setw(10) << setfill('-') << endl;

	cout << "Enter Subjects : ";
	cin >> Number_C;


	double* semesters = new double[Number_C];
	double semTotal = 0;

	for (int i = 0; i < Number_C; i++)
	{
		cout << "Enter Semester # " << i + 1 << " GPA: ";
		cin >> semesters[i];

	}

	for (int i = 0; i < Number_C; i++)


		semTotal += semesters[i];

	cout << "Your CGPA : " << semTotal / Number_C << endl;
	
}


//Instructions//  
void instructions() {

	system("cls");
	
	cout << endl << endl;
	cout << "How to calculate GPA and CGPA: " << endl;
	cout << setw(15) << setfill('-') << endl;
	cout << "GPA = Sum of (Credit*Hours) / total of credits" << endl << endl;
	cout << "CGPA = Sum of GPA / number of semesters " << endl;

	cout << endl << endl;
	cout << " Grade - Point Table: " << endl;
	cout << setw(15) << setfill('-') << endl;
	cout << "\tGrade \t\t 4.0 Scale" << endl;
	cout << setw(15) << setfill('-') << endl;
	cout << "\tA+ \t\t 4.0" << endl;
	cout << "\tA \t\t 4.0" << endl;
	cout << "\tA- \t\t 3.7" << endl;
	cout << "\tB+ \t\t 3.3" << endl;
	cout << "\tB \t\t 3.0" << endl;
	cout << "\tB- \t\t 2.7" << endl;
	cout << "\tC+ \t\t 2.3" << endl;
	cout << "\tC \t\t 2.0" << endl;
	cout << "\tC- \t\t 1.7" << endl;
	cout << "\tD+ \t\t 1.3" << endl;
	cout << "\tD \t\t 1.0" << endl;
	cout << "\tD- \t\t 0.7" << endl;
	cout << "\tF \t\t 0.0" << endl;
	
}