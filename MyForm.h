#pragma once
#include <iostream>
#include <string>
#include <random>
#include <excpt.h>
#include <fstream>

namespace PasswordGenerator3 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{ InitializeComponent(); }

	protected:
		~MyForm()
		{ if (components) { delete components; } }

	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			//
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(406, 32);
			this->textBox1->TabIndex = 0;
			// 
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 50);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 158);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Settings";
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 14));
			this->textBox2->Location = System::Drawing::Point(7, 119);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->textBox2->Size = System::Drawing::Size(187, 29);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			this->textBox2->Enter += gcnew System::EventHandler(this, &MyForm::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &MyForm::textBox2_Leave);
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(7, 89);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(52, 17);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Digits";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(7, 66);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(68, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Numbers";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(7, 43);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(113, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Lowercase Letters";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(7, 20);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(113, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Uppercase Letters";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			this->groupBox2->Controls->Add(this->textBox4);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Location = System::Drawing::Point(218, 50);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Information";
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(12, 57);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(182, 26);
			this->textBox4->TabIndex = 1;
			this->textBox4->Enter += gcnew System::EventHandler(this, &MyForm::textBox4_Enter);
			this->textBox4->Leave += gcnew System::EventHandler(this, &MyForm::textBox4_Leave);
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(12, 20);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(182, 26);
			this->textBox3->TabIndex = 0;
			this->textBox3->Enter += gcnew System::EventHandler(this, &MyForm::textBox3_Enter);
			this->textBox3->Leave += gcnew System::EventHandler(this, &MyForm::textBox3_Leave);
			// 
			this->button1->Location = System::Drawing::Point(218, 156);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(63, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			this->button2->Location = System::Drawing::Point(218, 185);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Save As";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			this->button3->Location = System::Drawing::Point(287, 156);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 52);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Copy";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			this->button4->Location = System::Drawing::Point(343, 156);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 52);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Generate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(431, 219);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Password Generator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	bool low, up, num, dig;
	int kolvo = 0, kolvotest;

		string Generating(bool low, bool up, bool num, bool dig, int kolvo) {
			if (low == false && up == false && num == false && dig == false) { low = true; up = true; num = true; dig = true; }
			if (kolvo == 0 || kolvotest == kolvo) { kolvo = 18; }
			const string lowercase_letters[26] = { "a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m",
												   "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z" };

			const string uppercase_letters[26] = { "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
												   "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z" };

			const string arrnum[10] = { "1", "2", "3", "4", "5", "6", "7", "8", "9", "0" };

			const string digits[19] = { "~", "!", "@", "#", "$", "%", "^", "&", "*", "-", "=", "+", "_", "<",
										">", "?", "/", ".", "," };

			int flags[4] = { 0, 0, 0, 0 };
			if (low) { flags[0] = 1; }
			if (up) { flags[1] = 2; }
			if (num) { flags[2] = 3; }
			if (dig) { flags[3] = 4; }

			int randomize, pswdlength;
			string password;

			random_device rd;
			mt19937 gen(rd());
			uniform_int_distribution<> dist(1, 4);
			uniform_int_distribution<> distlow(0, 25);
			uniform_int_distribution<> distup(0, 25);
			uniform_int_distribution<> distnum(0, 9);
			uniform_int_distribution<> distdig(0, 18);

			if (kolvo == 1) {
				while (password.size() < 1) {
					randomize = dist(gen);
					if (randomize == 1 && flags[0] == 1) { password = lowercase_letters[distlow(gen)]; }
					if (randomize == 2 && flags[1] == 2) { password = uppercase_letters[distup(gen)]; }
					if (randomize == 3 && flags[2] == 3) { password = arrnum[distnum(gen)]; }
					if (randomize == 4 && flags[3] == 4) { password = digits[distdig(gen)]; }
				}
			}
			else {
				for (int i = kolvo - 1; i >= 0; i--) {
					randomize = dist(gen);
					pswdlength = password.size();
					if (randomize == 1 && flags[0] == 1) { password = password + lowercase_letters[distlow(gen)]; }
					if (randomize == 2 && flags[1] == 2) { password = password + uppercase_letters[distup(gen)]; }
					if (randomize == 3 && flags[2] == 3) { password = password + arrnum[distnum(gen)]; }
					if (randomize == 4 && flags[3] == 4) { password = password + digits[distdig(gen)]; }
					if (pswdlength == password.size()) { i++; }
				}
			}
			return password;
		}

		bool CheckBeforeSave() {
			if (textBox1->Text != "" && textBox3->Text != "" && textBox3->Text != "Web-Site"
				&& textBox4->Text != "" && textBox4->Text != "Login") { return true; }
			else { return false; }
		}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Text = "Length";
		textBox2->ForeColor = Color::Gray;
		textBox3->Text = "Web-Site";
		textBox3->ForeColor = Color::Gray;
		textBox4->Text = "Login";
		textBox4->ForeColor = Color::Gray;
	}
	System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		__try {
			if (System::Convert::ToInt64(textBox2->Text) < 2147483648) {
				if (textBox2->Text != "" && textBox2->Text != "Length") { 
					kolvo = System::Convert::ToInt32(textBox2->Text);
				}
			}
			else { MessageBox::Show("Password length cannot exceed value 2147483647", "Error"); }
		}
		__except (EXCEPTION_EXECUTE_HANDLER) {
			if (textBox2->Text != "" && textBox2->Text != "Length") { MessageBox::Show("You cannot enter letters or negative values", "Error"); }
		}
	}
	private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "Length") { textBox2->Text = ""; textBox2->ForeColor = Color::Black; }
	}
	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox2->Text == "") { textBox2->Text = "Length"; textBox2->ForeColor = Color::Gray; kolvotest = kolvo; }
	}
	System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (up == true) { up = false; }
		else { up = true; }
	}
	System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (low == true) { low = false; }
		else { low = true; }
	}
	System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (num == true) { num = false; }
		else { num = true; }
	}
	System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (dig == true) { dig = false; }
		else { dig = true; }
	}
	System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		string password1 = Generating(low, up, num, dig, kolvo);
		textBox1->Text = gcnew System::String(password1.c_str());
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->SelectAll();
		textBox1->Copy();
		textBox1->DeselectAll();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckBeforeSave()) {
			saveFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			saveFileDialog1->DefaultExt = "txt";
			saveFileDialog1->ShowDialog();

			char* str1 = new char[255];
			str1 = StringToChar(saveFileDialog1->FileName);

			ofstream fout;
			fout.open(str1, ios_base::out);
			fout << "------------------------------" << endl;
			fout << "Web-Site: ";
			fout << StringToChar(textBox3->Text) << endl;
			fout << "Login: ";
			fout << StringToChar(textBox4->Text) << endl;
			fout << "Password: ";
			fout << StringToChar(textBox1->Text) << endl;
			fout << "------------------------------" << endl;
			fout << endl;
			fout.close();
		}
		else { MessageBox::Show("The web-site and login fields must be filled in!", "Error"); }
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (CheckBeforeSave()) {
			openFileDialog1->Filter = "Text files(*.txt)|*.txt|All files(*.*)|*.*";
			openFileDialog1->DefaultExt = "txt";
			openFileDialog1->ShowDialog();

			char* str2 = new char[255];
			str2 = StringToChar(openFileDialog1->FileName);

			ofstream fout1;
			fout1.open(str2, ios_base::app);
			fout1 << "------------------------------" << endl;
			fout1 << "Web-Site: ";
			fout1 << StringToChar(textBox3->Text) << endl;
			fout1 << "Login: ";
			fout1 << StringToChar(textBox4->Text) << endl;
			fout1 << "Password: ";
			fout1 << StringToChar(textBox1->Text) << endl;
			fout1 << "------------------------------" << endl;
			fout1 << endl;
			fout1.close();
		}
		else { MessageBox::Show("The web-site and login fields must be filled in!", "Error"); }
	}
	private: System::Void textBox3_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "Web-Site") { textBox3->Text = ""; textBox3->ForeColor = Color::Black; }
	}
	private: System::Void textBox3_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox3->Text == "") { textBox3->Text = "Web-Site"; textBox3->ForeColor = Color::Gray; }
	}
	private: System::Void textBox4_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text == "Login") { textBox4->Text = ""; textBox4->ForeColor = Color::Black; }
	}
	private: System::Void textBox4_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (textBox4->Text == "") { textBox4->Text = "Login"; textBox4->ForeColor = Color::Gray; }
	}
	char* StringToChar(System::String^ string) {
		return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
	}
};
}