#pragma once
#include <string.h>

namespace SimpleCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnPlus;
	protected:

	protected:



	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn0;





	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnMinus;
	private: System::Windows::Forms::Button^  btnMtp;
	private: System::Windows::Forms::Button^  btnDiv;
	private: System::Windows::Forms::Button^  btnEqual;
	private: System::Windows::Forms::TextBox^  tb1;
	private: Double  xtb1;
	private: Double  xlb2;
	private: Double  xres;
	private: Double  xMode;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Label^  lb2;
	private: System::Windows::Forms::Button^  btnDt;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btnMtp = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->tb1 = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lb2 = (gcnew System::Windows::Forms::Label());
			this->btnDt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(63, 95);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(73, 74);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(142, 95);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(73, 74);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(221, 95);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(73, 74);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(323, 95);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(73, 74);
			this->btnPlus->TabIndex = 3;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(63, 175);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(73, 74);
			this->btn4->TabIndex = 4;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(142, 175);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(73, 74);
			this->btn5->TabIndex = 5;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(221, 175);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(73, 74);
			this->btn6->TabIndex = 6;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(63, 255);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(73, 74);
			this->btn1->TabIndex = 7;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(63, 335);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(73, 74);
			this->btn0->TabIndex = 8;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(142, 255);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(73, 74);
			this->btn2->TabIndex = 9;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(221, 255);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(73, 74);
			this->btn3->TabIndex = 10;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(323, 175);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(73, 74);
			this->btnMinus->TabIndex = 11;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &MyForm::btnMinus_Click);
			// 
			// btnProizv
			// 
			this->btnMtp->Location = System::Drawing::Point(323, 255);
			this->btnMtp->Name = L"btnMtp";
			this->btnMtp->Size = System::Drawing::Size(73, 74);
			this->btnMtp->TabIndex = 12;
			this->btnMtp->Text = L"*";
			this->btnMtp->UseVisualStyleBackColor = true;
			this->btnMtp->Click += gcnew System::EventHandler(this, &MyForm::btnMtp_Click);
			// 
			// btnDelen
			// 
			this->btnDiv->Location = System::Drawing::Point(323, 335);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(73, 74);
			this->btnDiv->TabIndex = 13;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::btnDiv_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->Location = System::Drawing::Point(221, 415);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(175, 74);
			this->btnEqual->TabIndex = 14;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &MyForm::btnEqual_Click);
			// 
			// tb1
			// 
			this->tb1->Location = System::Drawing::Point(63, 67);
			this->tb1->Name = L"tb1";
			this->tb1->Size = System::Drawing::Size(333, 22);
			this->tb1->TabIndex = 15;
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(219, 335);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(75, 74);
			this->btnClear->TabIndex = 18;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// lb2
			// 
			this->lb2->AutoSize = true;
			this->lb2->Location = System::Drawing::Point(60, 37);
			this->lb2->Name = L"lb2";
			this->lb2->Size = System::Drawing::Size(0, 17);
			this->lb2->TabIndex = 19;
			// 
			// btnDt
			// 
			this->btnDt->Location = System::Drawing::Point(142, 335);
			this->btnDt->Name = L"btnDt";
			this->btnDt->Size = System::Drawing::Size(71, 74);
			this->btnDt->TabIndex = 20;
			this->btnDt->Text = L",";
			this->btnDt->UseVisualStyleBackColor = true;
			this->btnDt->Click += gcnew System::EventHandler(this, &MyForm::btnDt_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(477, 514);
			this->Controls->Add(this->btnDt);
			this->Controls->Add(this->lb2);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->tb1);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMtp);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = tb1->Text + "1";
	}
	private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = tb1->Text + "2";
	}
	private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = tb1->Text + "3";
	}
	private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = tb1->Text + "4";
	}
	private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = tb1->Text + "5";
	}
	private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = tb1->Text + "6";
	}
	private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = tb1->Text + "7";
	}
	private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = tb1->Text + "8";
	}
	private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = tb1->Text + "9";
	}
	private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
		if ((tb1->Text->Length > 0) && (tb1->Text != "0") && (tb1->Text != "-0")) {
			tb1->Text = tb1->Text + "0";
		}
		else if (tb1->Text->Length == 0) {
			tb1->Text = "0";
		}
	}
	private: System::Void btnPlus_Click(System::Object^  sender, System::EventArgs^  e) {
		signOperator(1, "+");
	}
	private: System::Void btnMinus_Click(System::Object^  sender, System::EventArgs^  e) {
		if (tb1->Text->Length == 0) {
			tb1->Text = "-";
		} else {
			signOperator(2, "-");
		}
	}
	private: System::Void btnMtp_Click(System::Object^  sender, System::EventArgs^  e) {
		signOperator(4, "*");
	}
	private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
		signOperator(3, "/");
	}

	private: System::Void signOperator(int mode, char* s) {
		String^ s1 = gcnew String(s);
		if (((lb2->Text->Length == 0) || (lb2->Text == "Error")) && (tb1->Text->Length > 0) && (Double::TryParse(tb1->Text, xlb2))) {
			lb2->Text = Convert::ToString(xlb2) + s1;
			tb1->Text = "";
		}
		else if ((lb2->Text->Length > 0) && ((tb1->Text->Length == 0) || (tb1->Text == "-"))) {
			lb2->Text = Convert::ToString(xlb2) + s1;
			tb1->Text = "";
		}
		else if ((lb2->Text->Length > 0) && (tb1->Text->Length > 0) && (Double::TryParse(tb1->Text, xtb1))) {
			xres = rezCalc(xlb2, xtb1, xMode);
			xlb2 = xres;
			lb2->Text = Convert::ToString(xres) + s1;
			tb1->Text = "";
		};
		xMode = mode;
	}

	private: System::Void btnEqual_Click(System::Object^  sender, System::EventArgs^  e) {
		if (((tb1->Text->Length == 0) && (lb2->Text->Length > 0)) || (lb2->Text == "Error")) {
			tb1->Text = Convert::ToString(xlb2);
			lb2->Text = "";
			xMode = 0;
		}
		else if ((lb2->Text->Length > 0) && (tb1->Text->Length > 0) && (Double::TryParse(tb1->Text, xtb1))) {
			xlb2 = rezCalc(xlb2, xtb1, xMode);
			tb1->Text = Convert::ToString(xlb2);
			if (lb2->Text != "Error") {
				lb2->Text = "";
			}
		}
		else if ((tb1->Text->Length > 0) && (lb2->Text->Length == 0) && (xMode != 0) && (Double::TryParse(tb1->Text, xlb2))) {
			xlb2 = rezCalc(xlb2, xtb1, xMode);
			tb1->Text = Convert::ToString(xlb2);
		}
	}
	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
		tb1->Text = "";
		lb2->Text = "";
		xMode = 0;
	}
	private: char* convertStringToChar(String^ path) {
		return (char*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(path).ToPointer();
	}

	private: System::Double rezCalc(System::Double  o1, System::Double o2, System::Double mode) {
		if (mode == 1) {
			return o1 + o2;
		}
		if (mode == 2) {
			return o1 - o2;
		}
		if ((mode == 3) && (o2 == 0)) {
			lb2->Text = "Error";
			return o1;
		}
		else if ((mode == 3) && (o2 != 0)) {
			return o1 / o2;
		}
		if (mode == 4) {
			return o1 * o2;
		}
	}
	private: System::Void btnDt_Click(System::Object^  sender, System::EventArgs^  e) {
		if (tb1->Text->Length == 0) {
			tb1->Text = "0,";
		}
		if ((tb1->Text->Length > 0) && (!strchr(convertStringToChar(tb1->Text), ','))) {
			tb1->Text = tb1->Text + ",";
		}
	}
};
}
