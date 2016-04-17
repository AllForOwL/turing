#pragma once

#include "MachineTuring.h"
#include <list>
#include <vector>

namespace turing {

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
	public:array<System::Windows::Forms::Label^>^ m_labelsTop;
	public:array<System::Windows::Forms::Label^>^ m_labelsBottom;

	MachineTuring* m_MachineTuring;
	int* m_arrayValueTopLabel;

	public:
		MyForm(void)
		{
			InitializeComponent();
			
			m_MachineTuring = new MachineTuring();
			m_arrayValueTopLabel = new int[21];			
			
			int value = -10;

			for (int i = 0; i < 21; i++)
			{
				m_arrayValueTopLabel[i] = value;
				++value;
			}

	    array<String^>^ smartLabel = gcnew array<String^> {L"label1",L"label2",L"label3",L"label4", L"label5",L"label6",L"label7",L"label8",L"label9",L"label10",
														   L"label11",L"label12",L"label13",L"label14", L"label15",L"label16",L"label17",L"label18",L"label19",L"label20,",L"label21"};
        m_labelsTop = gcnew array<System::Windows::Forms::Label^>(21);

		int spacing = 0;

        for (int i = 0; i < m_labelsTop->Length; i++)
        {
            m_labelsTop[i] = gcnew Label();
            m_labelsTop[i]->AutoSize = true;
			m_labelsTop[i]->Location = System::Drawing::Point(75 + spacing, 130);
            m_labelsTop[i]->Name = smartLabel[i];
            m_labelsTop[i]->Size = System::Drawing::Size(13, 13);
            m_labelsTop[i]->TabIndex = 0;
            m_labelsTop[i]->Text = smartLabel[i]; 

			spacing += 35;
        }
        Controls->AddRange(m_labelsTop);

		smartLabel = gcnew array<String^> {L"label22",L"label23",L"label24",L"label25", L"label26",L"label27",L"label28",L"label29",L"label30",L"label31",
										  L"label32",L"label33",L"label34",L"label35", L"label36",L"label37",L"label38",L"label39",L"label40",L"label41,",L"label42"};
        m_labelsBottom = gcnew array<System::Windows::Forms::Label^>(21);
		
		spacing = 0;

        for (int i = 0; i < m_labelsBottom->Length; i++)
        {
            m_labelsBottom[i] = gcnew Label();
            m_labelsBottom[i]->AutoSize = true;
			m_labelsBottom[i]->Location = System::Drawing::Point(75 + spacing, 190);
            m_labelsBottom[i]->Name = smartLabel[i];
            m_labelsBottom[i]->Size = System::Drawing::Size(13, 13);
            m_labelsBottom[i]->TabIndex = 0;
            m_labelsBottom[i]->Text = smartLabel[i]; 

			spacing += 35;
        }
        Controls->AddRange(m_labelsBottom);
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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TextBox^  textBox2;
	public: 

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::DataGridView^  dataGridView1;
	private: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column_Q1;
	public: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column_Q2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  column_Q3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;


	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::ComboBox^  comboBox2;


	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->column_Q1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column_Q2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column_Q3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(14, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(355, 100);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Условие";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 19);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(336, 75);
			this->textBox1->TabIndex = 0;
			// 
			// trackBar1
			// 
			this->trackBar1->AllowDrop = true;
			this->trackBar1->CausesValidation = false;
			this->trackBar1->LargeChange = 20;
			this->trackBar1->Location = System::Drawing::Point(76, 141);
			this->trackBar1->Margin = System::Windows::Forms::Padding(5);
			this->trackBar1->Maximum = 20;
			this->trackBar1->MinimumSize = System::Drawing::Size(10, 5);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(720, 45);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->trackBar1->Value = 10;
			this->trackBar1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::trackBar1_MouseDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(84, 223);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(682, 20);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(230, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"add left";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(299, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"add right";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(368, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"remove";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->column_Q1, 
				this->column_Q2, this->column_Q3});
			this->dataGridView1->Location = System::Drawing::Point(14, 281);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(440, 275);
			this->dataGridView1->TabIndex = 8;
			// 
			// column_Q1
			// 
			this->column_Q1->HeaderText = L"Q1";
			this->column_Q1->Name = L"column_Q1";
			// 
			// column_Q2
			// 
			this->column_Q2->HeaderText = L"Q2";
			this->column_Q2->Name = L"column_Q2";
			// 
			// column_Q3
			// 
			this->column_Q3->HeaderText = L"Q3";
			this->column_Q3->Name = L"column_Q3";
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30.25F));
			this->button4->Location = System::Drawing::Point(12, 139);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 55);
			this->button4->TabIndex = 9;
			this->button4->Text = L"<";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30.75F));
			this->button5->Location = System::Drawing::Point(894, 141);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 54);
			this->button5->TabIndex = 1;
			this->button5->Text = L">";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(679, 54);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Применить";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(446, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->Text = L"Ячейка";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(568, 54);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(90, 21);
			this->comboBox2->TabIndex = 14;
			this->comboBox2->Text = L"Значение";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1025, 653);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
				for (int i = 0; i < 21; i++)
				{
					m_labelsTop[i]->Text = m_arrayValueTopLabel[i].ToString();
				}

				for (int i = 0; i < 21; i++)
				{
					m_labelsBottom[i]->Text = "0";
				}

			 }
	private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
			 }
private: System::Void hScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) 
		 {
			 
		 }
private: System::Void trackBar1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {
			 
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			
		 }
};
}
