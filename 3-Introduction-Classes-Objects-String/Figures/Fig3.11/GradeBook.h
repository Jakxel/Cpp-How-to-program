// GradeBook class definition. This file presents GradeBook's public
// interface without revealing the implementations of GradeBook's member
// functions, which are defined in GradeBook.cpp.
#include <string> // class GradeBook uses C++ string class

// GradeBook class definition
class GradeBook
{
  public:
  explicit GradeBook(std::string); // constructor intialize courseName
  void setCourseName(std::string); // sets the course name 
  std::string getCourseName() const; // gets the course name
  void displayMessage() const; // display a welcome message

  private:
  std::string courseName; // course name for this GradeBook
}; // end class GradeBook