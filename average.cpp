
#include <iostream>

using namespace std;

// Ron Vincent Cada

int main() {

    double score1, score2, score3;

    cout << "Enter the score for Exam 1: ";

    cin >> score1;

    cout << "Enter the score for Exam 2: ";

    cin >> score2;

    cout << "Enter the score for Exam 3: ";

    cin >> score3;



    double average_score = (score1 + score2 + score3) / 3;



    string result = (average_score >= 70) ? "passed" : "failed";



    cout << "Average Score: " << average_score << endl;

    cout << "Result: " << result << endl;



    return 0;

}

