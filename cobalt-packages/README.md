
README
======

The purpose of this project is to experiment with cobalt package
syntax and translations to C++.

Enabling C++20 Module Support
-----------------------------

How to enable C++20 modules support in Visual Studio 2022.

In Solution Explorer, right-click on the project, and then click
Properties.

Under Configuration Properties > General, Set the C++ Language
Standard to "/std:c++latest".

> Note: Technically, we only need to set it to "/std:c++20", but we
> want to use some C++23 features.

Click Apply.

Still in the Properties Pages dialog box, under Configuration Properties > C/C++, click General.

Set Scan Sources for Module Dependencies to "Yes".

Click OK.
