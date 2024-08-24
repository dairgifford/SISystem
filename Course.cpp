#include "Course.h"
using namespace std;

    Course::Course(std::string code, int credits){
        this->code = code;
        this->credits = credits;
    }
    string Course::getCode(){
        return code;
    }
    int Course::getCredits(){
        return credits;
    }