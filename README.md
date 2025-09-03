# Overloading-in-Cpp

# Aim

To study and implement the concept of overloading in C++, including constructor overloading, function overloading, and operator overloading, demonstrating their role in providing multiple behaviors for the same function or operator based on context.

# Software Used

    Compiler: GNU GCC (g++)

    IDE: Visual Studio Code

    Operating System: Windows/Linux

# Theory

Overloading allows multiple functions or operators to have the same name but different parameters or operand types. This enables polymorphism and improves code readability and flexibility.

# Types of Overloading:

    Constructor Overloading – Multiple constructors with different parameter lists to initialize objects in various ways.

    Function Overloading – Multiple functions with the same name but different parameters within the same scope.

    Operator Overloading – Defining custom behavior for operators when used with user-defined types.

# Key Features:

    Enhances code reusability and simplicity.

    Provides intuitive syntax for user-defined types.

    Reduces the need for multiple function names for similar operations.

# Algorithms

# 1. Constructor Overloading (Constructor overloading 1.cpp)

Algorithm:

    Start the program.

    Define a class Add with private data members: intResult and floatResult.

    Define three overloaded constructors:

        One taking two integers

        One taking two floats

        One taking three integers

    Each constructor performs the respective addition and stores the result.

    Define a member function displayResults() to show stored values.

    In main():

        Create objects using different constructors.

        Call displayResults() for each object.

    End the program.

# 2. Constructor Overloading with Student Class (Constructor overloading 2.cpp)

Algorithm:

    Start the program.

    Define a class Student with private data members: name, age, id.

    Define four overloaded constructors:

        Default constructor

        Constructor with name only

        Constructor with name and age

        Constructor with all three parameters

    Define displayInfo() to print student details.

    In main():

        Create objects using each constructor.

        Display details of all objects.

    End the program.

# 3. Function Overloading (Function Overloading.cpp)

Algorithm:

    Start the program.

    Define a class Calculator with public member functions.

    Overload the add() function for:

        Two integers

        Three integers

        Two floats

        Two doubles

        Two strings

    Each function performs the appropriate operation and returns the result.

    In main():

        Create a Calculator object.

        Call each overloaded add() function with different parameters.

        Display the results.

    End the program.

# 4. Operator Overloading with Complex Class (Operator overloading 1.cpp)

Algorithm:

    Start the program.

    Define a class Complex with private data members: real, imag.

    Define a constructor to initialize complex numbers.

    Overload the + operator to add two complex numbers.

    Define a print() function to display complex numbers.

    In main():

        Create two complex objects.

        Add them using the overloaded + operator.

        Display the result.

    End the program.

# 5. Operator Overloading with Box Class (Operator overloading 2.cpp)

Algorithm:

    Start the program.

    Define a class Box with private data members: length, width, height.

    Define a constructor to initialize box dimensions.

    Overload the + and - operators to add and subtract box dimensions.

    Define a display() function to show box details.

    In main():

        Create two box objects.

        Perform addition and subtraction using overloaded operators.

        Display the results.

    End the program.

# Conclusion

This experiment demonstrated the powerful concept of overloading in C++ through practical implementations:

    Constructor overloading provides flexible object initialization with different parameter sets.

    Function overloading allows the same function name to handle different data types and parameter counts.

    Operator overloading enables intuitive operations on user-defined types.

Through these programs, the importance of overloading in enhancing code readability, reusability, and maintainability was clearly understood. Overloading is a fundamental aspect of object-oriented programming that promotes polymorphism and elegant code design.
