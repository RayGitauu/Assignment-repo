#include <iostream>
using namespace std;

int main() {
    int grade;
    cout << "Enter your grade :";
    cin >> grade;
    switch (grade / 10) {
        case 10:
        case 9:
        case 8:
            cout << "Grade: A " << endl;
            break;
        case 7:
        case 6:
            cout << "Grade: B " << endl;
            break;
        case 5:
            cout << "Grade: C" << endl;
            break;
        case 4:
            cout << "Grade: D " << endl;
            break;
        default:
            cout << "Grade: E " << endl;
    }

    return 0;
}

