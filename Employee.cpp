#include <iostream>
using namespace std;

class AbstarctEmployee {
    virtual void AskForPromotion() = 0;
};

class Employee:AbstarctEmployee {
private:
     
     string Company;
     int Age;
protected:
    string Name;
public:
    void setAge(int age) {
        if(age>= 18)
        Age = age;
    }
    
    void setName(string name) {
        Name = name;
    }

    void setCompany(string company) {
        Company = company;
    }

    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }

    string getName() {
        return Name;
    }

    string getCompany() {
        return Company;
    }

    int getAge() {
        return Age;
    }




    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }
    public:
    void AskForPromotion() {
        if(Age > 30)
        cout << Name << " got promoted!" << endl;
        else
        cout << Name << " sorry no promotion for you!" << endl;
    }

}; 

class Developer:public Employee{
    public:
    string FavProgrammingLanguage;


    Developer(string name, string company, int age, string favProgrammingLanguage)
       : Employee(name, company, age)
       {
        FavProgrammingLanguage = favProgrammingLanguage;
    };

    void FixBug() {
        cout << Name << " fixed bug using " << FavProgrammingLanguage << endl;
    }
    

     



    
};

int main() {
Employee E1 = Employee("John", "Amazon", 3);
E1.setAge(30);
// Employee E1 = Employee("John", "Google", 40);
E1.IntroduceYourself();

Employee E2 = Employee("Tim", "Google", 35);
Developer D1 = Developer("Sue", "Youtube", 25, "C++"); 

E1.AskForPromotion();
E2.AskForPromotion();
D1.AskForPromotion();
D1.FixBug();





return 0;
}