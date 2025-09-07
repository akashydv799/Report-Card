// THIS IS THE MY FIRST C++ REPORT CARD PROJECT
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int roll;
    float marks[6]; // 6 subjects
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    // Input student details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore();
        getline(cin, students[i].name);
        cout << "Roll Number: ";
        cin >> students[i].roll;

        cout << "Enter marks of 5 subjects: ";
        for (int j = 0; j < 6; j++)
        {
            cin >> students[i].marks[j];
        }
    }

    // Display report
    cout << "\n--- REPORT CARD ---\n";
    for (int i = 0; i < n; i++)
    {
        float total = 0;
        for (int j = 0; j < 6; j++)
        {
            total += students[i].marks[j];
        }
        float average = total / 6;

        cout << "\nName: " << students[i].name;
        cout << "\nRoll No: " << students[i].roll;
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage: " << average;
        // Grading logic
        char grade;
        if (average >= 90)
            grade = 'A';
        else if (average >= 80)
            grade = 'B';
        else if (average >= 70)
            grade = 'C';
        else if (average >= 60)
            grade = 'D';
        else
            grade = 'F';

        cout << "\nGrade: " << grade;

        if (average >= 33)
            cout << "\nResult: PASS\n";
        else
            cout << "\nResult: FAIL\n";
    }

    return 0;
}
