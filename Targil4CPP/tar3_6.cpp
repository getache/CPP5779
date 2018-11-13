/**************************
*DESCRIPTION:			  *
* תרגיל 3 סעיף 6          *
*                         *
*                         *
***************************/
#include <iostream>
using namespace std;

enum MONTH
{
	JAN =1,FEB,MARCH,APRIL,MAY,JUNE,JULY,AUG,SEPT,OCT,NOV,DEC
};
int main()
{
	int mispar;
	do
	{
		cout << "enter a number: ";
		cin >> mispar;

		if (mispar <JAN || mispar > DEC)
		{
			cout << "ERROR" << endl;
		}
	} while (mispar <JAN || mispar > DEC);

	switch (mispar)
	{
	case JAN:
	case MARCH:
	case MAY:
	case JULY:
	case AUG:
	case OCT:
	case DEC:
		cout << 31;
		break;
	case FEB:
		cout << 28;
		break;
	case APRIL:
	case JUNE:
	case SEPT:
	case NOV:
		cout << 30;
		break;
	default:
		cout << "wrong number" <<endl;
		break;
	}
	cout << " days in month" << endl;
	system("Pause");
	return 0;
}

