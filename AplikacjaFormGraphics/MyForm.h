#pragma once

namespace AplikacjaFormGraphics {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Start;
	private: System::Windows::Forms::Button^ button1;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Start = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Start
			// 
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40.25F));
			this->Start->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Start->Location = System::Drawing::Point(1170, 575);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(259, 132);
			this->Start->TabIndex = 0;
			this->Start->Text = L"Start";
			this->Start->UseVisualStyleBackColor = true;
			this->Start->Click += gcnew System::EventHandler(this, &MyForm::Start_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(802, 396);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1007, 466);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Start);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	//Utwórz ‘uchwyt’ do obiektu g klasy Graphics: 
	Graphics^ g = this->CreateGraphics();
	//utwórz ‘uchwyt’ do obiektu Pen: 
	Pen^ pioro = gcnew Pen(Color::Black);
	Pen^ koszyk = gcnew Pen(Color::Brown);
	//narysuj piórem liniê na obiekcie g: 
	//g->DrawLine(pioro,50,110,100,110);

	System::Drawing::Font^ czcionka = gcnew
		System::Drawing::Font(FontFamily::GenericSansSerif, 40, FontStyle::Regular);
	SolidBrush^ red = gcnew SolidBrush(Color::Red);
	SolidBrush^ blue = gcnew SolidBrush(Color::Blue);
	SolidBrush^ green = gcnew SolidBrush(Color::Green);
	SolidBrush^ brown = gcnew SolidBrush(Color::RosyBrown);
	SolidBrush^ orange = gcnew SolidBrush(Color::DarkOrange);
	SolidBrush^ black = gcnew SolidBrush(Color::Black);
	SolidBrush^ sbrown = gcnew SolidBrush(Color::SandyBrown);
	SolidBrush^ white = gcnew SolidBrush(Color::White);

	//g->DrawRectangle(pioro, 150, 80, 300, 150);
	//Point p1 = Point(590, 150);
	//Point p2 = Point(700, 350);
	//Point p3 = Point(470, 350);
	//array<Point>^ trojkat = { p1,p2,p3 };
	//g->DrawPolygon(pioro, trojkat);

	g->DrawString("Weso³ych œwi¹t wielkanocnych", czcionka, red, 30, 50);
	g->FillEllipse(brown, 530, 270, 110, 150);
	g->FillRectangle(green, 30, 400, 780, 50);
	
	g->FillEllipse(orange, 310, 355, 40, 55);
	g->FillEllipse(orange, 350, 355, 40, 55);
	g->FillEllipse(orange, 390, 355, 40, 55);
	g->FillEllipse(orange, 430, 355, 40, 55);
	g->FillEllipse(orange, 470, 355, 40, 55);
	
	g->FillEllipse(blue, 330, 375, 10, 10);
	g->FillEllipse(red, 370, 375, 10, 10);
	g->FillEllipse(red, 410, 375, 10, 10);
	g->FillEllipse(blue, 450, 375, 10, 10);
	g->FillEllipse(blue, 490, 375, 10, 10);
	
	g->FillEllipse(red, 320, 385, 10, 10);
	g->FillEllipse(blue, 360, 385, 10, 10);
	g->FillEllipse(blue, 400, 385, 10, 10);
	g->FillEllipse(red, 440, 385, 10, 10);
	g->FillEllipse(red, 480, 385, 10, 10);
	
	g->FillEllipse(red, 320, 365, 10, 10);
	g->FillEllipse(blue, 360, 365, 10, 10);
	g->FillEllipse(blue, 400, 365, 10, 10);
	g->FillEllipse(red, 440, 365, 10, 10);
	g->FillEllipse(red, 480, 365, 10, 10);

	g->FillEllipse(blue, 330, 395, 10, 10);
	g->FillEllipse(red, 370, 395, 10, 10);
	g->FillEllipse(red, 410, 395, 10, 10);
	g->FillEllipse(blue, 450, 395, 10, 10);
	g->FillEllipse(blue, 490, 395, 10, 10);
	
	g->FillEllipse(sbrown, 540, 385, 35, 20);
	g->FillEllipse(sbrown, 600, 385, 35, 20);
	g->FillEllipse(sbrown, 555, 380, 35, 20);
	g->FillEllipse(sbrown, 615, 380, 35, 20);
	
	g->FillEllipse(black, 560, 405, 7, 2);
	g->FillEllipse(black, 565, 400, 7, 2);
	g->FillEllipse(black, 570, 395, 7, 2);
	g->FillEllipse(black, 565, 390, 7, 2);
	g->FillEllipse(black, 560, 385, 7, 2);

	g->FillEllipse(black, 620, 405, 7, 2);
	g->FillEllipse(black, 625, 400, 7, 2);
	g->FillEllipse(black, 630, 395, 7, 2);
	g->FillEllipse(black, 625, 390, 7, 2);
	g->FillEllipse(black, 620, 385, 7, 2);

	g->FillEllipse(black, 575, 400, 7, 2);
	g->FillEllipse(black, 580, 395, 7, 2);
	g->FillEllipse(black, 585, 390, 7, 2);
	g->FillEllipse(black, 580, 385, 7, 2);
	g->FillEllipse(black, 575, 380, 7, 2);

	g->FillEllipse(black, 635, 400, 7, 2);
	g->FillEllipse(black, 640, 395, 7, 2);
	g->FillEllipse(black, 645, 390, 7, 2);
	g->FillEllipse(black, 640, 385, 7, 2);
	g->FillEllipse(black, 635, 380, 7, 2);

	g->FillEllipse(brown, 520, 370, 20, 20);
	g->FillEllipse(brown, 550, 200, 75, 75);
	g->FillEllipse(brown, 545, 155, 30, 70);
	g->FillEllipse(brown, 595, 155, 30, 70);

	g->FillEllipse(sbrown, 550, 170, 20, 50);
	g->FillEllipse(sbrown, 600, 170, 20, 50);
	g->FillEllipse(sbrown, 600, 250, 20, 20);
	g->FillEllipse(sbrown, 550, 250, 20, 20);
	g->FillEllipse(black, 578, 245, 14, 10);
	g->FillEllipse(white, 575, 250, 10, 15);
	g->FillEllipse(white, 585, 250, 10, 15);
	g->FillEllipse(black, 565, 220, 10, 10);
	g->FillEllipse(black, 590, 220, 10, 10);

	/*g->FillEllipse(brown, 260, 240, 40, 55);
	g->FillEllipse(brown, 280, 245, 40, 55);
	g->FillEllipse(brown, 300, 250, 40, 55);
	g->FillEllipse(brown, 320, 245, 40, 55);
	g->FillEllipse(brown, 340, 240, 40, 55);

	g->DrawArc(koszyk, 300, 200, 40, 50, 0, 50);*/
}
};
}
