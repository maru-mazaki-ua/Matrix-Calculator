#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
int main() {
	bool wanna_use = false;
	string wishToUse = "0";
	cout << "\33[36mHi. You can create a matrix here." << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "What kind you want it to be?" << endl;
	this_thread::sleep_for(chrono::seconds(1));
	cout << "\33[96m 1. 2x2" << endl;
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << " 2. 3x3" << endl;
	this_thread::sleep_for(chrono::milliseconds(100));
	string MxSize = "1x1";
	this_thread::sleep_for(chrono::milliseconds(100));
	cout << "\33[36mType one of variants here: \33[96m";
	cin >> MxSize;
	float mx2x2[2][2]{};
	float mx3x3[3][3]{};
	float nmx2x2[2][2]{};
	float nmx3x3[3][3]{};
	do {
		int a = 0;
		while (a < 1) {
			if (MxSize == "2x2") {
				a = 1;
				cout << "\33[36mOkay. You'll get matrix which looks like this: " << endl;
				cout << "\33[94m[ 0 0 ]" << endl;
				cout << "[ 0 0 ]" << endl;
				cout << " " << endl;
				this_thread::sleep_for(chrono::seconds(1));
				cout << "\33[36mNow input values you want to be in this matrix." << endl;
				int No = 0;
				for (int i = 0; i < 2; i++) {
					for (int j = 0; j < 2; j++) {
						No++;
						cout << "\33[36mInput number " << i + 1 << "x" << j + 1 << ":\33[94m ";
						cin >> mx2x2[i][j];
					}
				}
				cout << "\33[36mThank you, here's your matrix: \33[94m" << endl;
				for (int i = 0; i < 2; i++) {
					cout << "[ ";
					for (int j = 0; j < 2; j++) {
						this_thread::sleep_for(chrono::milliseconds(100));
						cout << mx2x2[i][j] << " ";
					}
					cout << "]" << endl;
				}
			}
			else if (MxSize == "3x3") {
				a = 1;
				cout << "\33[36mOkay. You'll get matrix which looks like this: " << endl;
				cout << "\33[94m[ 0 0 0 ]" << endl;
				cout << "[ 0 0 0 ]" << endl;
				cout << "[ 0 0 0 ]" << endl;
				cout << " " << endl;
				cout << "\33[36mNow input values you want to be in this matrix." << endl;
				int No = 0;
				for (int i = 0; i < 3; i++) {
					for (int j = 0; j < 3; j++) {
						No++;
						cout << "\33[36mInput number " << i + 1 << "x" << j + 1 << ":\33[94m ";
						cin >> mx3x3[i][j];
					}
				}
				cout << "\33[36mThank you, here's your matrix: " << endl;
				cout << "\33[94m";
				for (int i = 0; i < 3; i++) {
					cout << "[ ";
					for (int j = 0; j < 3; j++) {
						this_thread::sleep_for(chrono::milliseconds(100));
						cout << mx3x3[i][j] << " ";
					}
					cout << "]" << endl;
				}
			}
			else {
				cout << "\33[31mUmmm, maybe, you typed something wrong." << endl;
				cout << "\33[36mWhat kind of matrix you wanna create? Type here: \33[94m";
				cin >> MxSize;
			}
		}
		cout << " " << endl;
		int c = 0;
		while (c < 1) {
			cout << "\33[36mDo you wanna do something with this matrix?" << endl;
			string yesNo = "noAnswer";
			cout << "You can just say \33[32m'Yes' \33[36mor \33[31m'No' \33[36mdown here." << endl;
			cout << "So, you say: \33[94m";
			cin >> yesNo;
			cout << "\33[36m";
			int actMx = 0;
			if (yesNo == "yes" || yesNo == "Yes") {
				c = 1;
				cout << "Excellent! Now what are you going to do with this matrix?" << endl;
				this_thread::sleep_for(chrono::milliseconds(100));
				cout << "\33[94m 1. Multiply it by number." << endl;
				this_thread::sleep_for(chrono::milliseconds(100));
				cout << " 2. Divide it by number." << endl;
				this_thread::sleep_for(chrono::milliseconds(100));
				cout << " 3. Add it with another matrix." << endl;
				this_thread::sleep_for(chrono::milliseconds(100));
				cout << " 4. Subtract another matrix from it." << endl;
				this_thread::sleep_for(chrono::milliseconds(100));
				cout << " 5. Multiply it by same-sized matrix." << endl;
				this_thread::sleep_for(chrono::milliseconds(100));
				cout << " 6. Transpose this matrix." << endl;
				this_thread::sleep_for(chrono::milliseconds(100));
				cout << " 7. Find a determinant of this matrix." << endl;
				this_thread::sleep_for(chrono::milliseconds(100));
				cout << "\33[36mSo, you wanna do an action with number: \33[94m";
				cin >> actMx;
				if (actMx == 1) {
					float multiplicant = 0;
					cout << "\33[36mYou multiply your matrix by: \33[94m";
					cin >> multiplicant;
					cout << "\33[36mGreat, here's your matrix, being multiplied by \33[94m" << multiplicant << "\33[36m:\33[94m" << endl;
					if (MxSize == "2x2") {
						for (int i = 0; i < 2; i++) {
							cout << "[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[i][j] * multiplicant << " ";
							}
							cout << "]" << endl;
						}
					}
					else if (MxSize == "3x3") {
						for (int i = 0; i < 3; i++) {
							cout << "[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[i][j] * multiplicant << " ";
							}
							cout << "]" << endl;
						}
					}
				}
				else if (actMx == 2) {
					float multiplicant = 0;
					cout << "\33[36mYou divide your matrix by \33[94m";
					cin >> multiplicant;
					while (multiplicant == 0) {
						cout << "\33[31mSorry, you can't divide by zero." << endl;
						cout << "\33[36mYou divide your matrix by \33[94m";
						cin >> multiplicant;
					}
					cout << "\33[36mGreat, here's your matrix, being divided by \33[94m" << multiplicant << "\33[36m:\33[94m" << endl;
					if (MxSize == "2x2") {
						for (int i = 0; i < 2; i++) {
							cout << "[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[i][j] / multiplicant << " ";
							}
							cout << "]" << endl;
						}
					}
					else if (MxSize == "3x3") {
						for (int i = 0; i < 3; i++) {
							cout << "[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[i][j] / multiplicant << " ";
							}
							cout << "]" << endl;
						}
					}
				}
				else if (actMx == 3) {
					if (MxSize == "2x2") {
						cout << "\33[36mAlright, you must now create another 2x2 matrix, so we can add them together." << endl;
						int No = 0;
						for (int i = 0; i < 2; i++) {
							for (int j = 0; j < 2; j++) {
								No++;
								cout << "\33[36mInput number " << No << ":\33[94m ";
								cin >> nmx2x2[i][j];
							}
						}
						cout << "\33[36mThank you, now we add these matrices like this: " << endl;
						cout << "\33[94m";
						for (int i = 0; i < 2; i++) {
							cout << "[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[i][j] << " ";
							}
							if (i == 1) {
								cout << "] + ";
							}
							else {
								cout << "]   ";
							}
							cout << "[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << nmx2x2[i][j] << " ";
							}
							if (i == 1) {
								cout << "] = ";
							}
							else {
								cout << "]   ";
							}
							cout << "\33[92m[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << nmx2x2[i][j] + mx2x2[i][j] << " ";
							}
							cout << "]\33[94m" << endl;
						}
					}
					else if (MxSize == "3x3") {
						cout << "\33[36mAlright, you must now create another 3x3 matrix, so we can add them together." << endl;
						int No = 0;
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								No++;
								cout << "\33[36mInput number " << No << ":\33[94m ";
								cin >> nmx3x3[i][j];
							}
						}
						cout << "\33[36mThank you, now we add these matrices like this: " << endl;
						cout << "\33[94m";
						for (int i = 0; i < 3; i++) {
							cout << "[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[i][j] << " ";
							}
							if (i == 1) {
								cout << "] + ";
							}
							else {
								cout << "]   ";
							}
							cout << "[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << nmx3x3[i][j] << " ";
							}
							if (i == 1) {
								cout << "] = ";
							}
							else {
								cout << "]   ";
							}
							cout << "\33[92m[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << nmx3x3[i][j] + mx3x3[i][j] << " ";
							}
							cout << "]\33[94m" << endl;
						}
					}
					cout << "\33[36mThe result matrix is colored \33[92mgreen\33[36m." << endl;
				}
				else if (actMx == 4) {
					if (MxSize == "2x2") {
						cout << "\33[36mAlright, you must now create another 2x2 matrix, so we can substract one from another." << endl;
						int No = 0;
						for (int i = 0; i < 2; i++) {
							for (int j = 0; j < 2; j++) {
								No++;
								cout << "\33[36mInput number " << No << ":\33[94m ";
								cin >> nmx2x2[i][j];
							}
						}
						cout << "\33[36mThank you, now we substract these matrices like this: " << endl;
						cout << "\33[94m";
						for (int i = 0; i < 2; i++) {
							cout << "[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[i][j] << " ";
							}
							if (i == 1) {
								cout << "] - ";
							}
							else {
								cout << "]   ";
							}
							cout << "[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << nmx2x2[i][j] << " ";
							}
							if (i == 1) {
								cout << "] = ";
							}
							else {
								cout << "]   ";
							}
							cout << "\33[92m[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[i][j] - nmx2x2[i][j] << " ";
							}
							cout << "]\33[94m" << endl;
						}
					}
					else if (MxSize == "3x3") {
						cout << "\33[36mAlright, you must now create another 3x3 matrix, so we can substract one from another." << endl;
						int No = 0;
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								No++;
								cout << "\33[36mInput number " << No << ":\33[94m ";
								cin >> nmx3x3[i][j];
							}
						}
						cout << "\33[36mThank you, now we substract these matrices like this: " << endl;
						cout << "\33[94m";
						for (int i = 0; i < 3; i++) {
							cout << "[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[i][j] << " ";
							}
							if (i == 1) {
								cout << "] - ";
							}
							else {
								cout << "]   ";
							}
							cout << "[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << nmx3x3[i][j] << " ";
							}
							if (i == 1) {
								cout << "] = ";
							}
							else {
								cout << "]   ";
							}
							cout << "\33[92m[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[i][j] - nmx3x3[i][j] << " ";
							}
							cout << "]\33[94m" << endl;
						}
					}
					cout << "\33[36mThe result matrix is colored \33[92mgreen\33[36m." << endl;
				}
				else if (actMx == 5) {
					if (MxSize == "2x2") {
						cout << "\33[36mAlright, you must now create another 2x2 matrix, so we can multiply one by another." << endl;
						int No = 0;
						for (int i = 0; i < 2; i++) {
							for (int j = 0; j < 2; j++) {
								No++;
								cout << "\33[36mInput number " << No << ":\33[94m ";
								cin >> nmx2x2[i][j];
							}
						}
						cout << "\33[36mThank you, now we multiply one matrix by another like this: " << endl;
						cout << "\33[94m";
						for (int i = 0; i < 2; i++) {
							cout << "[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[i][j] << " ";
							}
							if (i == 1) {
								cout << "] * ";
							}
							else {
								cout << "]   ";
							}
							cout << "[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << nmx2x2[i][j] << " ";
							}
							if (i == 1) {
								cout << "] = ";
							}
							else {
								cout << "]   ";
							}
							cout << "\33[92m[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[i][0] * nmx2x2[0][j] + mx2x2[i][1] * nmx2x2[1][j] << " ";
							}
							cout << "]\33[94m" << endl;
						}
						cout << "\33[36mThe result matrix is colored \33[92mgreen\33[36m." << endl;
					}
					else if (MxSize == "3x3") {
						cout << "\33[36mAlright, you must now create another 3x3 matrix, so we can multiply one by another." << endl;
						int No = 0;
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 3; j++) {
								No++;
								cout << "\33[36mInput number " << No << ":\33[94m ";
								cin >> nmx3x3[i][j];
							}
						}
						cout << "\33[36mThank you, now we multiply one matrix by another like this: " << endl;
						cout << "\33[94m";
						for (int i = 0; i < 3; i++) {
							cout << "[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[i][j] << " ";
							}
							if (i == 1) {
								cout << "] * ";
							}
							else {
								cout << "]   ";
							}
							cout << "[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << nmx3x3[i][j] << " ";
							}
							if (i == 1) {
								cout << "] = ";
							}
							else {
								cout << "]   ";
							}
							cout << "\33[92m[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[i][0] * nmx3x3[0][j] + mx3x3[i][1] * nmx3x3[1][j] + mx3x3[i][2] * nmx3x3[2][j] << " ";
							}
							cout << "]\33[94m" << endl;
						}
						cout << "\33[36mThe result matrix is colored \33[92mgreen\33[36m." << endl;
					}
				}
				else if (actMx == 6) {
					cout << "\33[36mHere's your matrix transposed:" << endl;
					if (MxSize == "2x2") {
						for (int i = 0; i < 2; i++) {
							cout << "\33[94m[ ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								nmx2x2[i][j] = mx2x2[j][i];
								cout << nmx2x2[i][j] << " ";
							}
							cout << "]" << endl;
						}
					}
					else if (MxSize == "3x3") {
						for (int i = 0; i < 3; i++) {
							cout << "\33[94m[ ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								nmx3x3[i][j] = mx3x3[j][i];
								cout << nmx3x3[i][j] << " ";
							}
							cout << "]" << endl;
						}
					}
				}
				else if (actMx == 7) {
					if (MxSize == "2x2") {
						cout << "\33[36mSo, this is how we find the determinant of matrix:" << endl;
						cout << "\33[94m";
						for (int i = 0; i < 2; i++) {
							cout << "| ";
							for (int j = 0; j < 2; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[i][j] << " ";
							}
							if (i == 0) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "|" << endl;
							}
							else {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| = (";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[0][0];
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << ") * (";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[1][1];
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << ") - (";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[0][1];
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << ") * (";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[1][0];
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << ") = \33[92m";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx2x2[0][0] * mx2x2[1][1] - mx2x2[0][1] * mx2x2[1][0] << endl;
							}
						}
						cout << "\33[36mThe determinant is colored \33[92mgreen\33[36m." << endl;
					}
					else if (MxSize == "3x3") {
						cout << "\33[36mSo, this is how we find the determinant of matrix:" << endl;
						cout << "\33[94m";
						for (int i = 0; i < 3; i++) {
							cout << "| ";
							for (int j = 0; j < 3; j++) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[i][j] << " ";
							}
							if (i == 0) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "|" << endl;
							}
							else if (i == 1) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "|       ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[1][1] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[1][2] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "|       ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[1][0] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[1][2] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "|       ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[1][0] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[1][1] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "|       " << endl;
							}
							else if (i == 2) {
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| = ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[0][0];
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << " * ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[2][1] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[2][2] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "- ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[0][1];
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << " * ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[2][0] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[2][2] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "+ ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[0][2];
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << " * ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[2][0] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << mx3x3[2][1] << " ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "| ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "= ";
								this_thread::sleep_for(chrono::milliseconds(100));
								cout << "\33[92m" << mx3x3[0][0] * (mx3x3[1][1] * mx3x3[2][2] - mx3x3[1][2] * mx3x3[2][1]) - mx3x3[0][1] * (mx3x3[1][0] * mx3x3[2][2] - mx3x3[1][2] * mx3x3[2][0]) + mx3x3[0][2] * (mx3x3[1][0] * mx3x3[2][1] - mx3x3[1][1] * mx3x3[2][0]) << endl;
							}
						}
						cout << "\33[36mThe determinant is colored \33[92mgreen\33[36m." << endl;
					}
				}
			}
			else if (yesNo == "no" || yesNo == "No") {
				cout << "Well, no is no, thanks then." << endl;
				c = 1;
			}
			else {
				cout << "\33[31mHey, buddy, something went wrong. Maybe, you didn't type \33[32m'Yes' \33[31mor 'No'." << endl;
			}
		}
		cout << " " << endl;
		cout << "\33[36mDo you wanna use program one more time?" << endl;
		int i = 0;
		while (i < 1) {
			cout << "\33[36mType \33[32m'Yes' \33[36mor \33[31m'No' \33[36mhere: \33[94m";
			cin >> wishToUse;
			if (wishToUse == "Yes" || wishToUse == "yes") {
				wanna_use = true;
				i = 1;
				cout << "\33[36mType size of your matrix(can be \33[96m2x2 \33[36mor \33[96m3x3\33[36m): \33[96m";
				cin >> MxSize;
			}
			else if (wishToUse == "No" || wishToUse == "no") {
				i = 1;
				cout << "\33[36mOkay, goodbye then." << endl;
				wanna_use = false;
			}
			else {
				cout << "\33[36mOh, you typed something wrong. Restart the program and try again." << endl;
			}
		}
	} while (wanna_use == true);
}
