// Simple_Calculator.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"

using namespace Simple_Calculator;

[STAThreadAttribute]
//Also we are taking a big assumption that we are not taking negative numbers as the inputs but the user can perform the operations on negative numbers and it will print the correct answer accordingly.

int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
