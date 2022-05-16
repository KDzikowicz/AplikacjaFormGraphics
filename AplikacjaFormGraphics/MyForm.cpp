#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main() {
	Application::EnableVisualStyles();
	AplikacjaFormGraphics::MyForm myform;
	Application::Run(%myform);
	return 0;
}