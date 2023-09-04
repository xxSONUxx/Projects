#include<iostream>
using namespace std;

int playQuiz();

int main()
{
	play:
	int final=0;
	int playQuiz(void);
	char playagain;
	
	final = playQuiz();
	cout << "Your Total Score is : " << final << endl;
	
	if(final >= 6) {
		cout << "Congratulations, You have passd the game." << endl;
		cout << "Do You Wantto Play QUIZ again 'y' or 'n' " << endl;
		cin >> playagain;
		if(playagain == 'y' || playagain == 'Y') {
			playQuiz();
		}else{
			cout << "Thank You To for palying this quiz game..." << endl;
		}
	}else{
		cout << "Sorry,You have Failed." << endl;
		cout << "Do You Wantto Play QUIZ again 'y' or 'n' " << endl;
		cin >> playagain;
		if(playagain == 'y' || playagain == 'Y') {
			goto play;
		}else{
			cout << "Thank You To Play QUIZ..." << endl;
		}
	}
	
	return 0;
}

int playQuiz() {
	playinsidefunc:
	char c;
	char option;
	int score = 0;
	
	cout << "------------------------- WELCOME TO QUIZ GAME -------------------------------" << endl;
	cout << "---------- THIS GAME IS MADE BY THREE STUDENTS OF BCT-CD (2078) -----------" << endl;
	cout << "---------------- CREDITS : SONU, RITESH AND PRIYANKA -------------------" << endl;
	cout << "-------------------- Please Follow The Instruction ----------------" << endl;
	cout << "Step 1 : This Quiz  Contains Total 10 Question : " << endl;
	cout << "Step 2 : You Will Given 1 Marks For Each Right ANSWER " << endl;
	cout << "Step 3 : There Will be No Nagative Marking " << endl;
	cout << "Step 4 : Please Press 's' To Start The Quiz " << endl;
	cout << "Step 5 : Please Select Option a, b, c, d " << endl;
	cout << "Step 6 : If You Score >=6, You Will Pass The Quiz " << endl;
	cout << "Press 's' to start the game ";
	
	cin >> c;
	if(c == 's' || c == 'S') {
		cout << "Q1. Which was the last team did Nepal won in the ACC Men's Qualifiers 2023 ?" << endl;
		cout << "(a) Malaysia  (b) Namibia  (c) UAE  (d) Singapore " << endl;	
		cin >> option;
		if(option == 'c' || option == 'C') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
		cout << "Q2. What is the name of rover of Chandrayaan-3 recently launched by ISRO on the mission to moon ?" << endl;
		cout << "(a) Aditya-L1  (b) Vikram  (c) Narsimha  (d) Pagyaan  " << endl;	
		cin >> option;
		if(option == 'd' || option == 'D') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
		cout << "Q3. Who is the senior most teacher in IOE PURWANCHAL CAMPUS Dharan ?" << endl;
		cout << "(a) Bhusan Kafle  (b) Anu Shrestha  (c) Kaji Ram Karki  (d) Manoj Kumar Guragain" << endl;	
		cin >> option;
		if(option == 'b' || option == 'B') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
		cout << "Q4. What is (-4)^(1/2)*(-4)^(1/2)" << endl;
		cout << "(a) 4  (b) -4  (c) 2  (d) -2" << endl;	
		cin >> option;
		if(option == 'b' || option == 'B') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
		cout << "Q5. What is the budget alloted for construction of pitch road around IOE-PC (In NRS.) ?" << endl;
		cout << "(a) 10^6  (b) 100 LAKH * 10 LAKH   (c) 100*100 THOUSANDS  (d) (10^7)*10  " << endl;	
		cin >> option;
		if(option == 'c' || option == 'C') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
		cout << "Q6. Who is the current chief of ISRO ?" << endl;
		cout << "(a) K Sivan  (b) Vikram Sarabhai  (c) S Somnath  (d) APJ Abdul Kalam" << endl;	
		cin >> option;
		if(option == 'c' || option == 'C') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
		cout << "Q7. What is The Captial Of Argentina" << endl;
		cout << "(a) Bueno Aires  (b) Rosario  (c) Helsinki  (d) Mendoza " << endl;	
		cin >> option;
		if(option == 'a' || option == 'A') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
		cout << "Q8. Which is the country with no mosquitos ? " << endl;
		cout << "(a) France  (b) Iceland  (c) Sweden  (d) Norway" << endl;	
		cin >> option;
		if(option == 'b' || option == 'B') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
		cout << "Q9. Who is the current treasurer of FSU IOE-PC ? " << endl;
		cout << "(a) Rajan Yadav  (b) Mandip Adhikari  (c) Maheswar Prasad Bhatta  (d) None" << endl;	
		cin >> option;
		if(option == 'c' || option == 'C') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
		cout << "Q10. Which is most powerful ?" << endl;
		cout << "(a) PDA  (b) CFG  (c) NFA  (d) Turing Machine" << endl;	
		cin >> option;
		if(option == 'd' || option == 'D') {
			score = score + 1;
		}else{
			score = score + 0;
		}
		
	}else{
		cout << "You Have Enterd Wrong Value, Please Enter 's' To Start" << endl;
		goto playinsidefunc;
	}
	
	return score;
}
