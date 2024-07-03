#include <iostream>

#include <string>

using namespace std;

class Course {

protected:

   string title;

   string instructor;

public:

    Course(const string& title, const string& instructor)

        : title(title), instructor(instructor) {}

    virtual void displayInfo() const {

        cout << "Course: " << title << ", Instructor: " << instructor;

    }

    virtual ~Course() = default;

};

class ComputerCourse : public Course {

private:

   string programmingLanguage;

   int year;

public:

    ComputerCourse(const string& title, const string& instructor, const string& programmingLanguage, const int& year)

        : Course(title, instructor), programmingLanguage(programmingLanguage), year(year) {}

    void displayInfo() const override {

        Course::displayInfo();

       cout <<"Programming Language: " << programmingLanguage <<endl;

       cout<<" Acadamic_year of the course:"<<year<<endl;

    }

};

class MathematicsCourse : public Course {

private:

   string difficultyLevel;

public:

    MathematicsCourse(const string& title, const string& instructor, const string& difficultyLevel)

        : Course(title, instructor), difficultyLevel(difficultyLevel) {}

    void displayInfo() const override {

        Course::displayInfo();

       cout << ", Difficulty Level: " << difficultyLevel <<endl;

    }

};

// Derived class for English courses

class EnglishCourse : public Course {

private:

   string literaryPeriod;

public:

    EnglishCourse(const string& title, const string& instructor, const string& literaryPeriod)

        : Course(title, instructor), literaryPeriod(literaryPeriod) {}

    void displayInfo() const override {

        Course::displayInfo();

       cout << ", Literary Period: " << literaryPeriod <<endl;

    }

};

ComputerCourse getComputerCourseInput() {

   string title, instructor, programmingLanguage;

   int year;

   cout << "Enter title for Computer  course: ";

   getline(cin, title);

   cout << "Enter instructor for Computer  course: ";

   getline(cin, instructor);

   cout << "Enter programming language for Computer  course: ";

   getline(cin, programmingLanguage);

   cout<<"Acadamic_year of computer source:";

   cin>>year;

    return ComputerCourse(title, instructor, programmingLanguage,year);

}

MathematicsCourse getMathematicsCourseInput() {

   string instructor, difficultyLevel;

   string title;

   cout << "Enter title for Math course: ";

   getline(cin,title);

   cout << "\nEnter instructor for Math course: ";

   getline(cin, instructor);

   cout << "Enter difficulty level for Math course: ";

   getline(cin, difficultyLevel);

    return MathematicsCourse(title, instructor, difficultyLevel);

}

EnglishCourse getEnglishCourseInput()

 {

   string title, instructor, literaryPeriod;

   cout << "Enter title for English course: ";

   getline(cin, title);

   cout << "Enter instructor for English course: ";

   getline(cin, instructor);

   cout << "Enter literary period for English course: ";

   getline(cin, literaryPeriod);

    return EnglishCourse(title, instructor, literaryPeriod);

}

int main() {

   cout << "Enter details for a Computer  course:\n";

    ComputerCourse csCourse = getComputerCourseInput();

    csCourse.displayInfo();

   cout << "\nEnter details for a Math course:\n";

    MathematicsCourse mathCourse = getMathematicsCourseInput();

    mathCourse.displayInfo();

   cout << "\nEnter details for an English course:\n";

    EnglishCourse englishCourse = getEnglishCourseInput();

    englishCourse.displayInfo();

    return 0;

}
