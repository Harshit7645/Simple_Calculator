#pragma once

namespace Simple_Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		double first_number; // This is for the first number which will be given as an input through a series of some button presses.
		double second_number; // This is for the second number which will be given as an input through a series of some button presses.
		String^ operation; // This is for the operation which will be performed between the two numbers.

	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			first_number=0;
			second_number=0;
			operation = "";
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	//Defining all the buttons
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;

	private:
		/// <summary>
		/// Required deoperationer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Deoperationer generated code
		/// <summary>
		/// Required method for Deoperationer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();

			//Below is the formatting and designing of each of the buttons with their fonts,sizes and Text of the buttons.

			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(144, 222);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 70);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(280, 222);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 70);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(416, 222);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(130, 70);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(144, 298);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 70);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(280, 298);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(130, 70);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(416, 298);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(130, 70);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(144, 374);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(130, 70);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(280, 374);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(130, 70);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(416, 374);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(130, 70);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(280, 450);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(130, 70);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(8, 222);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(130, 70);
			this->button11->TabIndex = 10;
			this->button11->Text = L"+";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(8, 298);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(130, 70);
			this->button12->TabIndex = 11;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(9, 375);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(130, 70);
			this->button13->TabIndex = 12;
			this->button13->Text = L"x";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button14->Location = System::Drawing::Point(9, 451);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(130, 70);
			this->button14->TabIndex = 13;
			this->button14->Text = L"/";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button15->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button15->Location = System::Drawing::Point(145, 451);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(130, 70);
			this->button15->TabIndex = 14;
			this->button15->Text = L".";
			this->button15->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(417, 451);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(130, 70);
			this->button16->TabIndex = 15;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(9, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox1->Size = System::Drawing::Size(538, 75);
			this->textBox1->TabIndex = 16;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(144, 141);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(266, 70);
			this->button17->TabIndex = 17;
			this->button17->Text = L"CLEAR";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(416, 141);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(130, 70);
			this->button18->TabIndex = 18;
			this->button18->Text = L"C";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Form1::button18_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(559, 540);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Basic Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
//Below We have implemented the functionality of each and every button and handled properly all the corner cases.Also written some assumptions in the code wherever necessary.

//This function to handle the button clicks whenever we click on CLEAR button which just resets all of the calculations and also just removes all the digits from the Display Box(Input/Output).
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Text = "";
			 first_number = 0;
			 second_number = 0;
			 operation = "";		 
		 }

//This function to handle the button clicks whenever we click on button 1
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 HandleDecimalAndNegativeSign("1");		 
		 }
//This function to handle the button clicks whenever we click on button 2
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 HandleDecimalAndNegativeSign("2");
		 }

//This function to handle the button clicks whenever we click on button 3
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 HandleDecimalAndNegativeSign("3");
		 }

//This function to handle the button clicks whenever we click on button 4
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 HandleDecimalAndNegativeSign("4");
		 }

//This function to handle the button clicks whenever we click on button 5
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 HandleDecimalAndNegativeSign("5");
		 }

//This function to handle the button clicks whenever we click on button 6
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 HandleDecimalAndNegativeSign("6");
		 }

//This function to handle the button clicks whenever we click on button 7
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 HandleDecimalAndNegativeSign("7");
		 }

//This function to handle the button clicks whenever we click on button 8
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 HandleDecimalAndNegativeSign("8");
		 }

//This function to handle the button clicks whenever we click on button 9
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 HandleDecimalAndNegativeSign("9");
		 }

//This function to handle the button clicks whenever we click on button 0
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^ e) {
			 HandleDecimalAndNegativeSign("0");		 
		 }

//This function to handle the button clicks whenever we click on C button which is used to erase the last digit of the displayed number on the input/output box.So this button is very helpful if we just clicked on some digit wrongly.
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (textBox1->Text->Length > 0) {//Checks if the textbox field has some characters in it.
					 if(textBox1->Text->EndsWith("-")){
						textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 2)+"-";//Erases the last 2 characters as the last 2 characters are '-' sign and the last digit and then concats the negative sign again.
					 }
					 else{
						 textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1);//just erases the last character of the textbox
					 }
				}
		 }

//This function to handle the operation whenever we click on "x" or multiply symbol to do all the multiply operations.
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "") {
				// Convert the text from the textbox to an Number
				if(textBox1->Text->EndsWith("-")){
					first_number = -1.0*System::Convert::ToDouble(textBox1->Text->Substring(0, textBox1->Text->Length - 1));//negative sign handled properly here
				}
				else{
				first_number = System::Convert::ToDouble(textBox1->Text);
				}
				operation = "*";
				textBox1->Text = "";
			}
		 }

//This function to handle the operation whenever we click on "+" or plus symbol to do all the addition operations.
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "") {
				// Convert the text from the textbox to an Number
				 if(textBox1->Text->EndsWith("-")){
					first_number = -1.0*System::Convert::ToDouble(textBox1->Text->Substring(0, textBox1->Text->Length - 1));//negative sign handled properly here
				}
				else{
				first_number = System::Convert::ToDouble(textBox1->Text);
				}
				//first_number = System::Convert::ToDouble(textBox1->Text->Substring(0, textBox1->Text->Length - 1));
				operation = "+";
				textBox1->Text = "";
			}
		 }

//This function to handle the operation whenever we click on "-" or minus symbol to do all the subtraction operations.
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "") {
				// Convert the text from the textbox to an Number
				if(textBox1->Text->EndsWith("-")){
					first_number = -1.0*System::Convert::ToDouble(textBox1->Text->Substring(0, textBox1->Text->Length - 1));//negative sign handled properly here
				}
				else{
				first_number = System::Convert::ToDouble(textBox1->Text);
				}
				operation = "-";
				textBox1->Text = "";
			}
		 }

//This function to handle the operation whenever we click on "/" or divide symbol to do all the division operations.
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "") {
				// Convert the text from the textbox to an Number
				if(textBox1->Text->EndsWith("-")){
					first_number = -1.0*System::Convert::ToDouble(textBox1->Text->Substring(0, textBox1->Text->Length - 1));//negative sign handled properly here
				}
				else{
				first_number = System::Convert::ToDouble(textBox1->Text);
				}
				operation = "/";
				textBox1->Text = "";
			}
		 }

//This function to handle the operation whenever we click on "=" or equals to symbol to do the operation which are given as input.
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (textBox1->Text != "") {
				// Convert the text from the textbox to an Number
				second_number = System::Convert::ToDouble(textBox1->Text);
				if(operation == "+")
				{
					double result = first_number + second_number;//Just add the 2 numbers and print it with it's corresponding sign.
					textBox1->Text = System::Convert::ToString(System::Math::Abs(result)) + (result<0 ? "-":"");
				}
				if(operation == "-")
				{
					double result = first_number - second_number;//Just subtract the 2 numbers and print it with it's corresponding sign.
					textBox1->Text = System::Convert::ToString(System::Math::Abs(result)) + (result<0 ? "-":"");
				}
				if(operation == "*")
				{
					double result = first_number * second_number;//Just multiply the 2 numbers and print it with it's corresponding sign.
					textBox1->Text = System::Convert::ToString(System::Math::Abs(result)) + (result<0 ? "-":"");
				}
				if(operation == "/")
				{
					if(second_number!=0){//denominator cannot be 0 in division.So this condition checks this.
					double result = first_number / second_number;
					textBox1->Text = System::Convert::ToString(System::Math::Abs(result))+(result<0 ? "-":"");//Then Just divide the 2 numbers and print it with it's corresponding sign.
					}
					else{
						textBox1->Text = "Error Division by 0";//otherwise it gives us an error displayed in the textbox field.
					}
				}
			 }
			 else{
				 textBox1->Text = "Enter Valid number";
			 }
		 }

//This function to handle whenever we click on "." or dot symbol.We will use this to take inputs of decimal numbers and perform operations on them respectively.
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
					 if (!textBox1->Text->Contains(".")) {
				textBox1->Text = textBox1->Text + ".";
			}
		 }

//This function to take input of the corresponding digit and just remove if the user inputs negative number as input
//Also we are taking a big assumption that we are not taking negative numbers as the inputs but the user can perform the operations on negative numbers and it will print the correct answer accordingly.
private: void HandleDecimalAndNegativeSign(String^ digit) {
			if (textBox1->Text->EndsWith("-")) {
				textBox1->Text = textBox1->Text->Substring(0, textBox1->Text->Length - 1) + digit;//Just remove the negative sign and take the rest value as it is in the input.
			} else {
				textBox1->Text = textBox1->Text + digit;//add the digit directly to the textBox Field
			}
		}
	};
}

