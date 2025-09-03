# Overloading-in-Cpp

# Aim

To study and implement the concept of overloading in C++, including constructor overloading, function overloading, and operator overloading, demonstrating their role in providing multiple behaviors for the same function or operator based on context.

# Software Used

    Compiler: GNU GCC (g++)

    IDE: Visual Studio Code

    Operating System: Windows/Linux

# Theory

Overloading is a fundamental concept in C++ that allows multiple functions or operators to have the same name but differ in their parameter lists or operand types. This powerful feature enables polymorphism at compile-time (static polymorphism) and significantly enhances code readability, flexibility, and maintainability.

# 1. Constructor Overloading

Constructor overloading allows a class to have multiple constructors with different parameter lists. This provides flexibility in object initialization by allowing objects to be created in various ways depending on the available information.

# Key Characteristics:

    All constructors have the same name as the class

    They must differ in the number and/or types of parameters

    Default constructor has no parameters

    Parameterized constructors initialize objects with specific values

    The appropriate constructor is automatically selected based on the arguments provided during object creation

# Benefits:

    Provides multiple ways to initialize objects

    Enhances class usability and flexibility

    Reduces the need for multiple setter methods after object creation

    Ensures objects are always in a valid state upon creation

# 2. Function Overloading

Function overloading, also known as method overloading, allows multiple functions to share the same name within the same scope but with different parameter signatures.

# Key Characteristics:

    Functions must have the same name but different parameter lists

    Differences can be in the number, type, or order of parameters

    Return type alone is not sufficient to distinguish overloaded functions

    Resolution occurs at compile-time based on argument matching

# Benefits:

    Provides intuitive naming for similar operations

    Reduces the need for multiple function names

    Improves code readability and organization

    Enables type-safe operations on different data types

# Common Use Cases:

    Mathematical operations on different numeric types

    String manipulation with various parameter combinations

    I/O operations handling different data formats

    Utility functions supporting multiple data types

# 3. Operator Overloading

Operator overloading allows programmers to redefine the behavior of C++ operators when used with user-defined types (classes and structures). This enables objects to be manipulated using the same syntax as built-in types.

# Key Characteristics:

    Operators are overloaded as member functions or friend functions

    The function name is the keyword 'operator' followed by the operator symbol

    Most C++ operators can be overloaded except ::, .*, ., and ?:

    Operators maintain their original precedence and associativity

    At least one operand must be a user-defined type

# Categories of Overloadable Operators:

    Arithmetic operators: +, -, *, /, %

    Relational operators: ==, !=, <, >, <=, >=

    Logical operators: &&, ||, !

    Assignment operators: =, +=, -=, *=, /=

    Increment/Decrement operators: ++, --

    Subscript operator: []

    Function call operator: ()

    Stream operators: <<, >>

# Benefits:

    Provides intuitive syntax for user-defined types

    Enhances code readability and natural expression

    Enables seamless integration of custom types with standard C++ syntax

    Supports mathematical and logical operations on objects
    
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
