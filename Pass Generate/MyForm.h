#pragma once
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

namespace PassGenerate {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ generate;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ custom;

	private: System::Windows::Forms::RadioButton^ readymade;
	private: System::Windows::Forms::CheckBox^ big;
	private: System::Windows::Forms::CheckBox^ small;
	private: System::Windows::Forms::CheckBox^ numbers;
	private: System::Windows::Forms::CheckBox^ specical;



	private: System::Windows::Forms::ComboBox^ format;
	private: System::Windows::Forms::TextBox^ result;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ passlenght;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ symbols;









	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->generate = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->custom = (gcnew System::Windows::Forms::RadioButton());
			this->readymade = (gcnew System::Windows::Forms::RadioButton());
			this->big = (gcnew System::Windows::Forms::CheckBox());
			this->small = (gcnew System::Windows::Forms::CheckBox());
			this->numbers = (gcnew System::Windows::Forms::CheckBox());
			this->specical = (gcnew System::Windows::Forms::CheckBox());
			this->format = (gcnew System::Windows::Forms::ComboBox());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->passlenght = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->symbols = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->passlenght))->BeginInit();
			this->SuspendLayout();
			// 
			// generate
			// 
			this->generate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->generate->Enabled = false;
			this->generate->Location = System::Drawing::Point(286, 276);
			this->generate->Name = L"generate";
			this->generate->Size = System::Drawing::Size(95, 23);
			this->generate->TabIndex = 0;
			this->generate->Text = L"Сгенерировать";
			this->generate->UseVisualStyleBackColor = true;
			this->generate->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(363, 26);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Добро пожаловать в генератор пароля.\r\nВы можете выбрать параметры генерации нажав"
				L" на чек-боксы ниже.";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Выберите тип параметров";
			// 
			// custom
			// 
			this->custom->AutoSize = true;
			this->custom->Location = System::Drawing::Point(15, 76);
			this->custom->Name = L"custom";
			this->custom->Size = System::Drawing::Size(108, 17);
			this->custom->TabIndex = 3;
			this->custom->TabStop = true;
			this->custom->Text = L"Настраиваемые";
			this->custom->UseVisualStyleBackColor = true;
			this->custom->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// readymade
			// 
			this->readymade->AutoSize = true;
			this->readymade->Location = System::Drawing::Point(307, 76);
			this->readymade->Name = L"readymade";
			this->readymade->Size = System::Drawing::Size(68, 17);
			this->readymade->TabIndex = 4;
			this->readymade->TabStop = true;
			this->readymade->Text = L"Готовые";
			this->readymade->UseVisualStyleBackColor = true;
			this->readymade->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// big
			// 
			this->big->AutoSize = true;
			this->big->Location = System::Drawing::Point(15, 116);
			this->big->Name = L"big";
			this->big->Size = System::Drawing::Size(146, 17);
			this->big->TabIndex = 5;
			this->big->Text = L"Заглавные буквы (ABC)";
			this->big->UseVisualStyleBackColor = true;
			this->big->CheckedChanged += gcnew System::EventHandler(this, &MyForm::big_CheckedChanged);
			// 
			// small
			// 
			this->small->AutoSize = true;
			this->small->Location = System::Drawing::Point(15, 139);
			this->small->Name = L"small";
			this->small->Size = System::Drawing::Size(136, 17);
			this->small->TabIndex = 6;
			this->small->Text = L"Строчные буквы (abc)";
			this->small->UseVisualStyleBackColor = true;
			this->small->CheckedChanged += gcnew System::EventHandler(this, &MyForm::small_CheckedChanged);
			// 
			// numbers
			// 
			this->numbers->AutoSize = true;
			this->numbers->Location = System::Drawing::Point(15, 162);
			this->numbers->Name = L"numbers";
			this->numbers->Size = System::Drawing::Size(86, 17);
			this->numbers->TabIndex = 7;
			this->numbers->Text = L"Цифры (0-9)";
			this->numbers->UseVisualStyleBackColor = true;
			this->numbers->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// specical
			// 
			this->specical->AutoSize = true;
			this->specical->Location = System::Drawing::Point(15, 185);
			this->specical->Name = L"specical";
			this->specical->Size = System::Drawing::Size(144, 17);
			this->specical->TabIndex = 8;
			this->specical->Text = L"Специальные символы";
			this->specical->UseVisualStyleBackColor = true;
			this->specical->CheckedChanged += gcnew System::EventHandler(this, &MyForm::specical_CheckedChanged);
			// 
			// format
			// 
			this->format->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->format->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->format->FormattingEnabled = true;
			this->format->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"a-zA-Z0-9_", L"a-zA-Z0-9", L"a-zA-Z", L"a-zA-Z_" });
			this->format->Location = System::Drawing::Point(254, 112);
			this->format->Name = L"format";
			this->format->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->format->Size = System::Drawing::Size(121, 21);
			this->format->TabIndex = 9;
			this->format->Text = L"Выберите формат";
			this->format->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// result
			// 
			this->result->Location = System::Drawing::Point(77, 276);
			this->result->Name = L"result";
			this->result->ReadOnly = true;
			this->result->Size = System::Drawing::Size(148, 20);
			this->result->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 281);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Результат";
			// 
			// passlenght
			// 
			this->passlenght->Location = System::Drawing::Point(105, 250);
			this->passlenght->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36, 0, 0, 0 });
			this->passlenght->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 6, 0, 0, 0 });
			this->passlenght->Name = L"passlenght";
			this->passlenght->Size = System::Drawing::Size(120, 20);
			this->passlenght->TabIndex = 12;
			this->passlenght->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->passlenght->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 252);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Длина пароля";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// symbols
			// 
			this->symbols->Location = System::Drawing::Point(15, 208);
			this->symbols->Name = L"symbols";
			this->symbols->ReadOnly = true;
			this->symbols->Size = System::Drawing::Size(148, 20);
			this->symbols->TabIndex = 15;
			this->symbols->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->ClientSize = System::Drawing::Size(393, 311);
			this->Controls->Add(this->symbols);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->passlenght);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->result);
			this->Controls->Add(this->format);
			this->Controls->Add(this->specical);
			this->Controls->Add(this->numbers);
			this->Controls->Add(this->small);
			this->Controls->Add(this->big);
			this->Controls->Add(this->readymade);
			this->Controls->Add(this->custom);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->generate);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Генератор пароля";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->passlenght))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int params = 0;
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		format->SelectedIndex = format->FindStringExact("a-zA-Z0-9_");
		format->Enabled = false;
		custom->Checked = true;
		big->Checked = true;
		small->Checked = true;
		numbers->Checked = true;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		big->Enabled = false;
		small->Enabled = false;
		numbers->Enabled = false;
		specical->Enabled = false;

		format->Enabled = true;
		generate->Enabled = true;
	}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	big->Enabled = true;
	small->Enabled = true;
	numbers->Enabled = true;
	specical->Enabled = true;

	format->Enabled = false;
	if(params >= 1) generate->Enabled = true;
	else generate->Enabled = false;
}

private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (custom->Checked == true) {
		string symbols = "";
		if (big->Checked == true) symbols += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		if (small->Checked == true) symbols += "abcdefghijklmnopqrstuvwxyz";
		if (numbers->Checked == true) symbols += "0123456789";
		if (specical->Checked == true) symbols += "!@#$%^&*";

		const int length = symbols.length();
		char* char_array = new char[length + 1];
		strcpy(char_array, symbols.c_str());

		string password = "";
		for (int i = 0; i < passlenght->Value; i++) {
			password += char_array[rand() % length];
		}

		result->Text = gcnew System::String(password.c_str());
	}
	else {
		int selected = format->SelectedIndex;
		string symbols = "";
		if (selected == 0) symbols += "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*";
		if (selected == 1) symbols += "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
		if (selected == 2) symbols += "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		if (selected == 3) symbols += "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*";

		const int length = symbols.length();
		char* char_array = new char[length + 1];
		strcpy(char_array, symbols.c_str());

		string password = "";
		for (int i = 0; i < passlenght->Value; i++) {
			password += char_array[rand() % length];
		}

		result->Text = gcnew System::String(password.c_str());
	}

}

	private: System::Void big_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (big->Checked == true) {
			params++;
		} else { 
			params--; 
		}

		if (params >= 1) { 
			generate->Enabled = true; 
		} else {
			generate->Enabled = false;
		}
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (numbers->Checked == true) params++;
	else params--;

	if (params >= 1) generate->Enabled = true;
	else generate->Enabled = false;
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	generate->Enabled = true;
}
private: System::Void small_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (small->Checked == true) params++;
	else params--;

	if (params >= 1) generate->Enabled = true;
	else generate->Enabled = false;
}
private: System::Void specical_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (specical->Checked == true) params++;
	else params--;

	if (params >= 1) generate->Enabled = true;
	else generate->Enabled = false;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
