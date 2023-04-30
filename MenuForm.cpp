#include <iostream>
#include "MenuForm.h"
#include "AddForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	controller::MenuForm form;
	Application::Run(% form);
}

