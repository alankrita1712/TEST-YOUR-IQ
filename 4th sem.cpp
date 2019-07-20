#include<iostream>
#include<cstring>
using namespace std;
char guess;
int total;
class IQ
{
	protected:
    	string Question_Text;
    	string answer_1;
    	string answer_2;
    	string answer_3;
    	string answer_4;
		char correct_answer;
    	int Question_Score;
};
class Question:public IQ
{
	public:
		void setValues(string,string,string,string,string,char,int);
    	void askQuestion();
    	friend void display();
};
void Question::setValues(string q,string a1,string a2,string a3, string a4, char ca, int pa)
{
    Question_Text = q;
    answer_1 = a1;
    answer_2 = a2;
    answer_3 = a3;
    answer_4 = a4;
    correct_answer = ca;
    Question_Score = pa;
}
void Question::askQuestion()
{
    cout << "\n";
    cout << Question_Text << "\n";
    cout << "a. " << answer_1 << "\n";
    cout << "b. " << answer_2 << "\n";
    cout << "c. " << answer_3 << "\n";
    cout << "d. " << answer_4 << "\n";
    cout << "\n";
    cout << "What is your answer?" << "\n";
    cin >> guess;
    if (guess==correct_answer)
	{
        cout << "\n";
        cout << "Correct!" << "\n";
        total = total+Question_Score;
        cout << "\n";
        
    }
    else
    {
        cout << "\n";
        cout << "Sorry, you're wrong!!!" << "\n";
        cout << "The correct answer is " << correct_answer << "." << "\n";
        cout << "\n";
        cout << "Press enter to continue." << "\n";
        cin.get();
        cin.ignore();
    }
}

void display(Question &q1,Question &q2,Question &q3,Question &q4,Question &q5,Question &q6,Question &q7,Question &q8)
{

    q1.askQuestion();
    string res;
    cout << "Ready for next question ?" << "Yes/No.\n";
    cin >> res;
    if (res == "Yes" || res == "yes")
	{
        cout << "\n";
        cout << "Good luck!\n";
        cout << "\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
        cout << "Your Total Score is " << total << " out of 80!\n";
    	  cout << "\n";
        return ;
    }
    system("cls");
    q2.askQuestion();
    string re;
    cout << "Ready for next question ?" << "Yes/No.\n";
    cin >> re;
    if (re == "Yes" || re == "yes")
	{
        cout << "\n";
        cout << "Good luck!\n";
        cout << "\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
        cout << "Your Total Score is " << total << " out of 80!\n";
    	cout << "\n";
        return;
    }
    system("cls");
    q3.askQuestion();
    string resp;
    cout << "Ready for next question ?" << "Yes/No.\n";
    cin >> resp;
    if (resp == "Yes" || resp == "yes")
	{
        cout << "\n";
        cout << "Good luck!\n";
        cout << "\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
        cout << "Your Total Score is " << total << " out of 80!\n";
    	cout << "\n";
        return;
    }
    system("cls");
    q4.askQuestion();
    string ress;
    cout << "Ready for next question ?" << "Yes/No.\n";
    cin >> ress;
    if (ress == "Yes" || ress == "yes")
	{
        cout << "\n";
        cout << "Good luck!\n";
        cout << "\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
        cout << "Your Total Score is " << total << " out of 80!\n";
    	cout << "\n";
        return;
    }
    system("cls");
    q5.askQuestion();
    string rs;
    cout << "Ready for next question ?" << "Yes/No.\n";
    cin >> rs;
    if (rs == "Yes" || rs == "yes")
	{
        cout << "\n";
        cout << "Good luck!\n";
        cout << "\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
        cout << "Your Total Score is " << total << " out of 80!\n";
    	cout << "\n";
        return;
    }
    system("cls");
    q6.askQuestion();
    string rsp;
    cout << "Ready for next question ?" << "Yes/No.\n";
    cin >> rsp;
    if (rsp == "Yes" || rsp == "yes")
	{
        cout << "\n";
        cout << "Good luck!\n";
        cout << "\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
        cout << "Your Total Score is " << total << " out of 80!\n";
    	  cout << "\n";
        return;
    }
    system("cls");
    q7.askQuestion();
    string rps;
    cout << "Ready for next question ?" << "Yes/No.\n";
    cin >> rps;
    if (rps == "Yes" || rps == "yes")
	{
        cout << "\n";
        cout << "Good luck!\n";
        cout << "\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
        cout << "Your Total Score is " << total << " out of 80!\n";
    	cout << "\n";
        return;
    }
    system("cls");
    q8.askQuestion();
    cout << "Your Total Score is " << total << " out of 80!\n";
    cout << "\n";
}
int main()
{
	system("cls");
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tTEST YOUR IQ PROCEED.................\n\n\n\n\n\n";
	system("pause>NUL");
	system("cls");
   cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tPRESS ENTER TO START...\n";
   cin.get();
	string name;
	system("pause>NUL");
	system("cls");
   cout << "What's your name?\n";
   cin >> name;
   cout << "\n";
   string respond;
   cout << "Are you ready to start the quiz, " << name << "? Yes/No.\n";
   cin >> respond;
   if (respond == "Yes" || respond == "yes")
	{
        cout << "\n";
        cout << "Good luck!\n";
        cout << "\n";
        cout << "Press enter to continue.";
        cin.get();
        cin.ignore();
    }
	else
	{
        cout << "\n";
        cout << "Goodbye!\n";
        cin.ignore();
        cin.get();
        return 0;
    }
    Question q1;
    system("cls");
    Question q2;
    system("cls");
    Question q3;
    system("cls");
    Question q4;
    system("cls");
    Question q5;
    system("cls");
    Question q6;
    system("cls");
    Question q7;
    system("cls");
    Question q8;
    system("cls");
    q1.setValues("1. Which of the following can be arranged into a 5-letter English word?",
        "H R G S T",
        "R I L S A",
        "W Q R G S",
        "Q P M H R",
        'b',
        10);
        system("cls");
        

    q2.setValues("2. Book is to Reading as Fork is to?",
        "Drawing",
        "Eating",
        "Writing",
        "Stirring",
        'b',
        10);
        system("cls");

    q3.setValues("3. Which number should come next in the pattern?    37 , 34 , 31 , 28",
        "28",
        "26",
        "20",
        "25",
        'd',
        10);
        system("cls");

    q4.setValues("4. What punctuation ends most lines of code?",
        " . ",
        " ; ",
        " : ",
        " ' ",
        'b',
        10);
        system("cls");


    q5.setValues("5. Who developed the C++ language?",
        "Steve Jobs",
        "Linus Torvalds",
        "Bill Gates",
        "Bjarne Stroustrup",
        'd',
        10);
        system("cls");
        
    q6.setValues("6. 1, c, 4, f, 7, i, 10, ?",
		"M",
		"K",
		"N",
		"L",
		'd',
		10);
		system("cls");
	q7.setValues("7. Observe the pattern: T/3/Q/6/N/9/K/12/H/15/E/18/ ??? What comes next in this pattern? ?",
		"21",
		"D",
		"B",
		"C",
		'c',
		10);
		system("cls");
	
	q8.setValues("8. X = 3 y = ? If 4X + 20 is equal to 5y + 7, what is y equal to?",
		"4.5",
		"5",
		"5.5",
		"7",
		'b',
		10);
		system("cls");
	

    display(q1,q2,q3,q4,q5,q6,q7,q8);

    if (total==0)
	{
		cout << "YOU ARE MENTALLY INADEQUATE"<<endl;
		cout<<endl<<endl<<"TEST RESULT IS  "<<"0 % IQ"<<endl;
      cout << "\n";
      cin.get();
      cin.ignore();
      return 0;
    }
    else if(total==10)
    {
        cout<<"YOU ARE BELOW AVERAGE...NEED TO WORK ON YOUR IQ"<<endl;
        cout<<endl<<endl<<"TEST RESULT IS  "<<"12.5 % IQ"<<endl;
        cout << "\n";
        return 0;
    }
    else if(total==20)
    {
    	cout<<"YOU ARE NEAR TO AVERAGE...PUT YOUR EFFORTS YOU CAN COME OVER THIS"<<endl;
    	cout<<endl<<endl<<"TEST RESULT IS  "<<"25 % IQ"<<endl;
    	cout<<"\n";
    	return 0;
    }
    else if(total==30)
    {
    	cout<<"Y0U ARE AVERAGE....YOU HAVE CAPABILITY TO DO WELL"<<endl;
    	cout<<endl<<endl<<"TEST RESULT IS  "<<"37.5 % IQ"<<endl;
    	cout<<"\n";
    	return 0;
    }
    else if(total==40)
    {
    	cout<<"YOU ARE INTELLIGENT AND HAVE CAPABILITY TO GIVE YOUR 100% "<<endl;
    	cout<<endl<<endl<<"TEST RESULT IS  "<<"50 % IQ"<<endl;
    	cout<<"\n";
    	return 0;
    }
    else if(total==50)
    {
    	cout<<"YOU ARE ABOVE AVERAGE INTELLIGENT...KEEP GOING"<<endl;
    	cout<<endl<<endl<<"TEST RESULT IS  "<<"62.5 % IQ"<<endl;
    	cout<<"\n";
    	return 0;
    }
    else if(total==60)
    {
    	cout<<"YOU HAVE BRIGHT MIND AND YOU HAVE SUPERIOR INTELLIGENCE QUALITY..."<<endl;
    	cout<<endl<<endl<<"TEST RESULT IS  "<<"75 % IQ"<<endl;
    	cout<<"\n";
    	return 0;
    }
    else if(total==70)
    {
    	cout<<"YOU ARE HIGH ACHIEVER...ALL THE BEST"<<endl;
    	cout<<endl<<endl<<"TEST RESULT IS  "<<"87.5 % IQ"<<endl;
    	cout<<"\n";
    	return 0;
    }
    else
    {
    	cout<<"YOU ARE VERY  GENIUS AND HIGHLY INTELLIGENT...VERY SUPERIOR MIND"<<endl;
    	cout<<endl<<endl<<"TEST RESULT IS  "<<"100 % IQ"<<endl;
    	cout<<"\n";
    	return 0;
    }
    cin.get();
    cin.ignore();
    return 0;
}
