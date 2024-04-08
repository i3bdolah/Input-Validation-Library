Input Validation Library 🔐
============================

The Input Validation Library project is a collection of C++ functions aimed at simplifying input validation tasks for user inputs. This library offers a variety of functions to ensure that user-provided data meets specified criteria, thereby enhancing the robustness and reliability of C++ programs. With a focus on simplicity and efficiency, these functions streamline the process of validating and processing user inputs, reducing the likelihood of errors and improving overall program stability.

Importance for the Developers
---------------------------

For developers, this project provides a valuable toolkit for implementing input validation mechanisms in C++ applications. By leveraging the functions provided by the Input Validation Library, developers can enforce data integrity and prevent unexpected behavior resulting from invalid inputs. This library significantly reduces the complexity of input validation tasks, allowing developers to focus on core logic and functionality while maintaining code quality and reliability.

Why This Project (Reinvents The Wheel)
-----------------------

While existing input validation techniques and libraries are available, the Input Validation Library stands out for its simplicity, versatility, and ease of integration. By encapsulating common validation tasks into reusable functions, this library eliminates the need for developers to write repetitive validation code, resulting in cleaner and more maintainable codebases. Furthermore, the developer-friendly design of this library promotes consistency and standardization across projects, facilitating code reuse and collaboration among team members.

By adopting the Input Validation Library, developers can expedite the development process, minimize the risk of input-related errors, and enhance the overall user experience of their applications.

Installation (Running the Project)
----------------------

#### Windows

1.  Clone the repository to your local machine.
2.  Navigate to the project directory.
3.  Compile the source files using a C++ compiler.
4.  Link the compiled library to your C++ project.

#### macOS / Linux

1.  Clone the repository to your local machine.
2.  Open the terminal and navigate to the project directory.
3.  Compile the source files using a C++ compiler.
4.  Link the compiled library to your C++ project.

Usage
----------------------
![Screenshot 2024-04-08 063728](https://github.com/i3bdolah/Input-Validation-Library/assets/80276711/d6d6d4ab-61d0-4987-87c9-8ed81b6beab2)

To use the Input Validation Library in your C++ project, include the appropriate header files and utilize the provided functions for input validation. Whether you need to validate integer inputs, floating-point numbers, or dates, the library offers a range of functions to suit your requirements. By integrating these functions into your codebase, you can ensure that user inputs are validated according to predefined criteria, thereby enhancing the robustness and reliability of your application.


Function Reference Table
----------------------
| Function | Parameter Type | Return Type | Description |
| --- | --- | --- | --- |
| `IsNumberBetween` | `int, int, int` | `bool` | Checks if a number is within a specified range (inclusive). |
|  | `short, short, short` |  |  |
|  | `float, float, float` |  |  |
|  | `double, double, double` |  |  |
| `IsDateBetween` | `Date, Date, Date` | `bool` | Checks if a date is within a specified period. |
| `ReadInt` | None | `int` | Reads an integer from the standard input. |
| `ReadIntBetween` | `int, int` | `int` | Reads an integer within a specified range from the standard input. |
| `ReadShort` | None | `short` | Reads a short integer from the standard input. |
| `ReadShortBetween` | `short, short` | `short` | Reads a short integer within a specified range from the standard input. |
| `ReadFloat` | None | `float` | Reads a float from the standard input. |
| `ReadFloatBetween` | `float, float` | `float` | Reads a float within a specified range from the standard input. |
| `ReadDouble` | None | `double` | Reads a double from the standard input. |
| `ReadDoubleBetween` | `double, double` | `double` | Reads a double within a specified range from the standard input. |
| `IsDateValid` | `Date` | `bool` | Checks if a date is valid. |

This library provides functions for validating input data, including checking if numbers are within specified ranges, validating dates, and reading various numeric types from the standard input while enforcing validation rules.

Conclusion
----------

The Input Validation Library offers a comprehensive solution for simplifying input validation tasks in C++ programming. By providing a range of functions for validating user inputs, this library empowers developers to enhance the reliability and robustness of their applications. With its intuitive interface and versatile functionality, the Input Validation Library is an invaluable resource for any C++ developer looking to streamline input validation processes and improve overall code quality.
