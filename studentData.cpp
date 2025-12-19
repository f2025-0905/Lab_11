#include <iostream>
#include <vector>
using namespace std;

struct student{
    string name;
    string id;
    int batch;
    char section;
    bool isEnrolled;
};

student inputData(){
    student a;
    
    cout << "Student name: ";
    cin >> a.name;
    cout << "Student id: ";
    cin >> a.id;
    cout << "Student batch: ";
    cin >> a.batch;
    cout << "Student section: ";
    cin >> a.section;
    cout << "Student isEnrolled: ";
    cin >> a.isEnrolled;
    
    return a;
}

int main() {
    
    vector<student>studentData;
    
    studentData.push_back(inputData());
    
    
    
    
    return 0;
}