/*
 Project 3 - Part 4 / 5
 video: Chapter 2 - Part 9
 Member initialization tasks

 Create a branch named Part4
 
 1) initialize some of your member variables either in-class or in the Constructor member initializer list.

 2) make some of your member functions use those initialized member variables via std::cout statements.
 
 3) click the [run] button.  Clear up any errors or warnings as best you can.
 */

#include <iostream>
namespace Example 
{
struct UDT  
{
    int a; //a member variable
    float b { 2.f }; //3) in-class initialization
    UDT() : a(0) { } //3) 'constructor-initializer-list' member variable initialization
    void printThing()  //the member function
    {
        std::cout << "UDT::printThing() a:" << a << " b: " << b << std::endl;  //4) printing out something interesting
    }
};

int main()
{
    UDT foo; //instantiating a Foo in main()
    foo.printThing(); //calling a member function of the instance that was instantiated.
    return 0;
}
}

//call Example::main()





struct CentralProcessingUnit
{
    CentralProcessingUnit();
    int numberOfCores;
    float clockSpeedInGHz;
    int l1CacheSize;
    int l2CacheSize;
    int l3CacheSize;

    void communicateWithRAM();
    void communicateWithMotherboard();
    float processData();
};

CentralProcessingUnit::CentralProcessingUnit()
{
    numberOfCores = 8;
    clockSpeedInGHz = 2.8f;
    l1CacheSize = 8;
    l2CacheSize = 16;
    l3CacheSize = 32;
}

void CentralProcessingUnit::communicateWithRAM()
{
    std::cout << "Hi RAM\n";
}
void CentralProcessingUnit::communicateWithMotherboard()
{
    std::cout << "Hi Motherboard\n";
}
float CentralProcessingUnit::processData()
{
    float processedData = 1.0f;
    return processedData;
}

struct Cat
{
    Cat();
    int numLegs;
    int mealSize;
    float catWeight;
    float tailLength;
    int killedRats;

    struct Tree
    {
        Tree();
        int numLeaves;
        unsigned int numBranches;
        float heightInMeters;
        int numFlowers;
        std::string treeType;

        float growTaller();
        int growBranches();
        int shedLeaves();
    };
    Tree tree;
    std::string climbTree(Tree tree);
    void hissAtDog();
    void purr();
};

Cat::Cat()
{
    numLegs = 4;
    mealSize = 5;
    catWeight = 5.5f;
    tailLength = 20.3f;
    killedRats = 15; 
}

Cat::Tree::Tree()
{
    numLeaves = 100;
    numBranches = 20;
    heightInMeters = 10.3f;
    numFlowers = 1;
}

float Cat::Tree::growTaller()
{
    heightInMeters += 2.5f;
    return { };
}
int Cat::Tree::growBranches()
{
    numBranches += 5;
    return { };
}
int Cat::Tree::shedLeaves()
{
    numLeaves -= 10;
    return { };
}

std::string Cat::climbTree(Cat::Tree tree1)
{
    return "Mrrrrrrow (I am stuck at "+ std::to_string(tree1.heightInMeters) + " m)";
}

void Cat::hissAtDog()
{
    std::cout << "HISSSSSS\n";
}
void Cat::purr()
{
    std::cout << "PURRRRRR\n";
}

struct Plane 
{
    Plane();
    int numWheels;
    unsigned int numWings;
    int sizeOfFuelTank;
    int numPassengers;
    int numDailyFlights;
    
    struct Pilot
    {
        Pilot();
        int distanceFlown;
        int age;
        float heightInCentimeters;
        float weightInKilograms;
        std::string airline;

        std::string flyPlane();
        std::string contactATC();
        std::string talkToCoPilot();
    };

    std::string takeOff();
    std::string land();
    void cruise (int altitude = 50000);
};

Plane::Plane()
{
    numWheels = 3;
    numWings = 2;
    sizeOfFuelTank = 2000;
    numPassengers = 250;
    numDailyFlights = 4;
}

Plane::Pilot::Pilot()
{
    distanceFlown = 100000;
    age = 30;
    heightInCentimeters = 175.2f;
    weightInKilograms = 68.3f;
    airline = "Emirates";
}

std::string Plane::Pilot::flyPlane()
{
    return "I believe I can fly";
}

std::string Plane::Pilot::contactATC()
{
    return "Coming in for landing";
}

std::string Plane::Pilot::talkToCoPilot()
{
    return "Do you want to take over while I take a nap?";
}

std::string Plane::takeOff()
{
    return "Up in the air now";
}

std::string Plane::land()
{
    return "Back on terra firma";
}

void Plane::cruise(int altitude1)
{
    std::cout << "Cruising at "+ std::to_string(altitude1) + " feet\n";
}

struct CoffeeShop
{
    CoffeeShop();
    int numTables;
    int numChairs;
    int numDailyCustomers;
    int numCups;
    int numCoffeeMachines;

    std::string takeOrder();
    std::string makeCoffee (std::string order = "Latte");
    void serveCoffee (std::string order = "Americano");
};

CoffeeShop::CoffeeShop()
{
    numTables = 10;
    numChairs = 40;
    numDailyCustomers = 400;
    numCups = 10000;
    numCoffeeMachines = 2;
}

std::string CoffeeShop::takeOrder()
{
    return "May I take your order?";
}

std::string CoffeeShop::makeCoffee(std::string order1)
{
    return "I have made 1 " + order1;
}

void CoffeeShop::serveCoffee(std::string order1)
{
    std::cout << "Here is your " + order1 << "\n";
}


struct Student
{
    Student();
    int age;
    float heightInCentimeters;
    float weightInKilos;
    float gpa;
    unsigned int greScore;

    void study(std::string subject = "Math");
    std::string attendClass(std::string lesson = "English");   
    std::string skipClass(std::string lesson = "History");
};

Student::Student()
{
    age = 20;
    heightInCentimeters = 180.2f;
    weightInKilos = 70.2f;
    gpa = 3.8f;
    greScore = 325;
}

void Student::study(std::string subject1)
{
    std::cout << "I am studying " + subject1 + "\n";
}

std::string Student::attendClass(std::string lesson1)
{
    return "I am attending my " + lesson1 + " lesson";
}

std::string Student::skipClass(std::string lesson1)
{
    return "I'm missing my " + lesson1 + " class";
}

struct Teacher
{
    Teacher();
    int age;
    float heightInCentimeters;
    int compensation;
    std::string highestDegreeHeld;
    std::string position;

    void teach();
    std::string conductPopQuiz();
    std::string gradeStudents();
};

Teacher::Teacher()
{
    age = 45;
    heightInCentimeters = 175.2f;
    compensation = 90000;
    highestDegreeHeld = "PhD";
    position = "Senior Professor";
}

void Teacher::teach()
{
    std::cout << "a + b = c\n";
}

std::string Teacher::conductPopQuiz()
{
    return "Good luck with your test";
}

std::string Teacher::gradeStudents()
{
    return "You got an A";
}

struct MusicDepartment
{
    MusicDepartment();
    int numUndergraduateStudents;
    int numStaff;
    int numCourses;
    int numPostgraduateStudents;
    int numPracticeRooms;

    void organiseConcert();
    std::string changeCourseContents(std::string course);
    std::string addNewCourse(std::string newCourse);
};

MusicDepartment::MusicDepartment()
{
    numUndergraduateStudents = 100;
    numStaff = 15;
    numCourses = 10;
    numPostgraduateStudents = 30;
    numPracticeRooms = 5;
}

void MusicDepartment::organiseConcert()
{
    std::cout << "Welcome to the concert\n";
}

std::string MusicDepartment::changeCourseContents(std::string course1)
{
    return "We are changing the course contents of" + course1;
}

std::string MusicDepartment::addNewCourse(std::string newCourse1)
{
    return "We are introducing a new course: " + newCourse1;
}

struct Cafeteria
{
    Cafeteria();
    float costItemOne;
    float costItemTwo;
    int numEmployees;
    float costMonthlyIngredients;
    float monthlyRevenue;

    std::string changeMenu();
    void serveFood();
    float collectPayment(float payment);
};

Cafeteria::Cafeteria()
{
    costItemOne = 3.50f;
    costItemTwo = 5.95f;
    numEmployees = 12;
    costMonthlyIngredients = 1093.25f;
    monthlyRevenue = 50096.95f;
}

std::string Cafeteria::changeMenu()
{
    return "New Menu";
}

void Cafeteria::serveFood()
{
    std::cout << "Here is your food\n";
}

float Cafeteria::collectPayment(float payment1)
{
    return payment1;
}

struct Library
{
    Library();
    int librarianAge;
    int numEmployees;
    int numShelves;
    int numBooks;
    float lateFees;

    void checkOutBook();
    std::string returnBook();
    float chargeLateFee(float lateFee, int numDays);
};

Library::Library()
{
    librarianAge = 58;
    numEmployees = 5;
    numShelves = 50;
    numBooks = 3000;
    lateFees = 2.5f;
}

void Library::checkOutBook()
{
    std::cout << "Enjoy your book\n";
}

std::string Library::returnBook()
{
    return "Did you enjoy your book?";
}

float Library::chargeLateFee(float lateFee1, int numDays1)
{
    return lateFee1 * numDays1;
}

struct University
{
    Student student1;
    Teacher teacher1;
    MusicDepartment musicDepartment1;
    Cafeteria cafeteria1;
    Library library1;

    void conductExams();
    float collectFees(int numStudents,float yearlyFees);
    std::string holdGraduation();
};

void University::conductExams()
{
    std::cout << "Good luck with your exams\n";
}

float University::collectFees(int numStudents1, float yearlyFees1)
{
    return numStudents1 * yearlyFees1;
}

std::string University::holdGraduation()
{
    return "Good bye, good luck";
}

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    Example::main();

    CentralProcessingUnit cpu1;
    Cat cat1;
    Cat::Tree tree1;
    Plane plane1;
    Plane::Pilot pilot1;
    CoffeeShop coffeeShop1;
    Student student1;
    Teacher teacher1;
    MusicDepartment musicDepartment1;
    Cafeteria cafeteria1;
    Library library1;

    University university1;

    std::cout << "CPU communication \n";
    cpu1.communicateWithRAM();
    cpu1.communicateWithMotherboard();
    std::cout << "\n";

    std::cout << "Cat actions\n";
    cat1.hissAtDog();
    cat1.purr();
    std::cout << "\n";

    std::cout << "Tree Properties\n";
    std::cout << "Tree 1 has " + std::to_string(tree1.numBranches) + " branches, and " + std::to_string(tree1.numLeaves) + " leaves \n";
    std::cout << "\n";

    std::cout << "Plane actions\n";
    plane1.cruise();
    std::cout << "\n";

    std::cout << "Pilot properties and actions\n";
    std::cout << "The pilot is " + std::to_string(pilot1.age) + " years old\n";
    std::cout << "The pilot is " + std::to_string(pilot1.heightInCentimeters/100.0f) + " meters tall\n";
    std::cout << pilot1.contactATC() << "\n";
    std::cout << "\n";

    std::cout << "Coffee Shop:\n";
    std::cout << "We have " + std::to_string(coffeeShop1.numCoffeeMachines) + ", and we serve " + std::to_string(coffeeShop1.numDailyCustomers) + " people each day\n";
    coffeeShop1.serveCoffee("Americano");
    std::cout << "\n";

    std::cout << "Student Actions: \n";
    student1.study("History");
    std::cout << "\n";

    std::cout << "Teacher Actions: \n";
    teacher1.teach();
    std::cout << "\n";

    std::cout << "Music Department Actions: \n";
    musicDepartment1.organiseConcert();
    std::cout << "\n";

    std::cout << "Cafeteria Actions: \n";
    cafeteria1.serveFood();
    std::cout << "\n";

    std::cout << "Library Actions: \n";
    library1.checkOutBook();
    std::cout << "\n";

    std::cout << "University Properties and Actions: \n";
    university1.conductExams();
    std::cout << "This University's Music Department has " + std::to_string(university1.musicDepartment1.numUndergraduateStudents) + " students";
    std::cout << "\n";
    std::cout << "\n";






    std::cout << "good to go!" << std::endl;
}
