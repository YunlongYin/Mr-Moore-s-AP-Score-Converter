#include <iostream>

using namespace std;

int main()
{
	cout << "If this program is not functioning properly, please email yinyun@lbsstudents.org." << endl;
	cout << "===================" << endl;
	cout << "1. Hard Scale: 63 above is an A" << endl;
	cout << "2. Moderate Scale: 55 aboveis an A" << endl;
	cout << "3. Easy Scale: 54 above is an A" << endl;
	cout << "-------------------" << endl;
	cout << "Which scale would you like to use? Enter the number in front of the option: " << flush;
	int scale;
	cin >> scale;

	long double range1005 = 7.5;
	long double range1004 = 5;
	long double range1003 = 10;
	long double range1002 = 17.5;
	long double range1001 = 60;
	long double lowA = 92.5;
	long double lowB = 87.5;
	long double lowC = 77.5;
	long double lowD = 60;

	long double low5, low4, low3, low2, range905, range904, range903, range902, range901;

	if (scale == 1) {
		low5 = 63;
		low4 = 51;
		low3 = 40;
		low2 = 29;
		range905 = 27;
		range904 = 11;
		range903 = 10;
		range902 = 10;
		range901 = 28;
	}

	if (scale == 2) {
		low5 = 55;
		low4 = 44;
		low3 = 37;
		low2 = 29;
		range905 = 35;
		range904 = 10;
		range903 = 6;
		range902 = 7;
		range901 = 28;
	}

	if (scale == 3) {
		low5 = 54;
		low4 = 42;
		low3 = 33;
		low2 = 25;
		range905 = 36;
		range904 = 11;
		range903 = 8;
		range902 = 7;
		range901 = 24;
	}


	cout << "-------------------" << endl;
	cout << "Collecting general information about the test..." << endl;
	cout << "How many multiple choice questions are there in total? > " << flush;
	long double numTotalMulti;
	cin >> numTotalMulti;

	cout << "What's the perfect raw score of FRQ? >" << flush;
	long double numTotalFRQ;
	cin >> numTotalFRQ;




	int anotherScore;

	cout << "-------------------" << endl;
	cout << "Start to convert individual scores..." << endl;

	do {
		cout << "How many multiple choice did this person get? > " << flush;
		long double numScoredMulti;
		cin >> numScoredMulti;

		cout << "How many did this person get in FRQ? > " << flush;
		long double numScoredFRQ;
		cin >> numScoredFRQ;

		long double combinedScore90 = 45 * (numScoredMulti / numTotalMulti + numScoredFRQ / numTotalFRQ);

		long double finalScore;

		if (combinedScore90 >= low5) {
		finalScore = finalScore = (combinedScore90 - low5) / range905 * range1005 + lowA;
		} else if (combinedScore90 >= low4) {
			finalScore = (combinedScore90 - low4) / range904 * range1004 + lowB;
		} else if (combinedScore90 >= low3) {
			finalScore = (combinedScore90 - low3) / range903 * range1003 + lowC;
		} else if (combinedScore90 >= low2) {
			finalScore = (combinedScore90 - low2) / range902 * range1002 + lowD;
		} else if (combinedScore90 < low2) {
			finalScore = combinedScore90 / range901 * range1001;
		}

		cout << "Converted Score: " << finalScore << endl;
		cout << "-------------------" << endl;
		cout << "For the next person:" << endl;

	} while (anotherScore = 1);

	return 0;
}
