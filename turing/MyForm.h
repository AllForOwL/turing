#pragma once

#include "MachineTuring.h"
#include <list>
#include <vector>
#include <string>

namespace turing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:array<System::Windows::Forms::Label^>^ m_labelsTop;
	public:array<System::Windows::Forms::Label^>^ m_labelsBottom;

	MachineTuring* m_MachineTuring;
	int* m_arrayValueTopLabel;
	String^ m_strAlphabet;

	bool m_blStop;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Q1;
	public: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Q2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Q3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::ComboBox^  comboBox3;

	public: 

		int m_iCountSymbol;

	public:
		MyForm(void)
		{
			InitializeComponent();
			
			m_blStop = false;
			m_MachineTuring = new MachineTuring();
			m_arrayValueTopLabel = new int[21];			
			m_strAlphabet = "";
			m_iCountSymbol = 0;

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


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	public: System::Windows::Forms::DataGridView^  dataGridView1;
	private: 

	public: 


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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Q1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Q2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Q3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
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
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(299, 249);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(63, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"добавить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(368, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(64, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"удалить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->Q1, this->Q2, 
				this->Q3});
			this->dataGridView1->Location = System::Drawing::Point(14, 281);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 45;
			this->dataGridView1->Size = System::Drawing::Size(822, 275);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->Enter += gcnew System::EventHandler(this, &MyForm::dataGridView1_Enter);
			// 
			// Q1
			// 
			this->Q1->HeaderText = L"Q1";
			this->Q1->Name = L"Q1";
			// 
			// Q2
			// 
			this->Q2->HeaderText = L"Q2";
			this->Q2->Name = L"Q2";
			// 
			// Q3
			// 
			this->Q3->HeaderText = L"Q3";
			this->Q3->Name = L"Q3";
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
			this->button5->Location = System::Drawing::Point(804, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(53, 54);
			this->button5->TabIndex = 1;
			this->button5->Text = L">";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(772, 83);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"Применить";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(539, 83);
			this->comboBox1->MaxDropDownItems = 100;
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 13;
			this->comboBox1->Text = L"Ячейка";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			this->comboBox1->Click += gcnew System::EventHandler(this, &MyForm::comboBox1_Click);
			this->comboBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::comboBox1_KeyPress);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(661, 83);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(90, 21);
			this->comboBox2->TabIndex = 14;
			this->comboBox2->Text = L"Значение";
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			this->comboBox2->ClientSizeChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_ClientSizeChanged);
			this->comboBox2->Click += gcnew System::EventHandler(this, &MyForm::comboBox2_Click);
			this->comboBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::comboBox2_MouseClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(575, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 15;
			this->button1->Text = L"пуск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(761, 24);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 16;
			this->button7->Text = L"Сброс";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Медленно ", L"Быстро"});
			this->comboBox3->Location = System::Drawing::Point(412, 83);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(108, 21);
			this->comboBox3->TabIndex = 17;
			this->comboBox3->Text = L"Скорость";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(859, 565);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
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

		static void DoWork()
		{
			Thread::Sleep( 100 );
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

				//dataGridView1->ColumnCount = 4;
				dataGridView1->RowCount = 1;
				dataGridView1->Rows[0]->HeaderCell->Value = "_";
				//dataGridView1->RowHeadersVisible = false;
				//dataGridView1->ColumnHeadersVisible = false;

				//dataGridView1->Rows[0]->Cells[0]->Value = "";
				//dataGridView1->Rows[0]->Cells[1]->Value = "Q1";
				//dataGridView1->Rows[0]->Cells[2]->Value = "Q2";
				//dataGridView1->Rows[0]->Cells[3]->Value = "Q3";
				//dataGridView1->Rows[0]->Cells[1]->Value = "Q4";
				//dataGridView1->Rows[0]->Cells[2]->Value = "Q5";
				//dataGridView1->Rows[0]->Cells[3]->Value = "Q3";


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
			 for (int i = 0; i < 21; i++)
			 {
				 ++m_arrayValueTopLabel[i]; 
			 }
			 
			 for (int i = 0; i < 21; i++)
			 {
				m_labelsTop[i]->Text = m_arrayValueTopLabel[i].ToString();
				m_labelsBottom[i]->Text = m_MachineTuring->m_mapTape[m_arrayValueTopLabel[i]].ToString();
			 }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 for (int i = 0; i < 21; i++)
			 {
				 --m_arrayValueTopLabel[i]; 
			 }

			 for (int i = 0; i < 21; i++)
			 {
				m_labelsTop[i]->Text    = m_arrayValueTopLabel[i].ToString();
				m_labelsBottom[i]->Text = m_MachineTuring->m_mapTape[m_arrayValueTopLabel[i]].ToString();
			 }
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
		 }
private: System::Void comboBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
		 {
			 
		 }
private: System::Void comboBox1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if (comboBox1->Items->Count != 0)
			 {
				 for (int i = 0; i < 21; i++)
				 {
					 comboBox1->Items->RemoveAt(0);
				 }	
			 }

			 for (int i = 0; i < 21; i++)
			 {
				 comboBox1->Items->Add(m_arrayValueTopLabel[i].ToString());
			 }
		 }
private: System::Void comboBox2_ClientSizeChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void comboBox2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			  
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int countLetter = m_strAlphabet->Length;

			 m_strAlphabet = textBox2->Text;

			 if (countLetter <= m_strAlphabet->Length)
			 {
				 for (int i = countLetter; i < m_strAlphabet->Length; i++)
				 {
					 ++dataGridView1->RowCount;
					 dataGridView1->Rows[i]->HeaderCell->Value = m_strAlphabet[i].ToString();
				 }
			 }
			 else if (countLetter > m_strAlphabet->Length)
			 {
				 dataGridView1->RowCount = m_strAlphabet->Length;
					
				 for (int i = 0; i < m_strAlphabet->Length; i++)
				 {
					 dataGridView1->Rows[i]->HeaderCell->Value = m_strAlphabet[i].ToString();
				 }

			 }
		 }
private: System::Void comboBox2_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
		 {
			if (m_strAlphabet->Length != 0)
			{
				for (int i = m_iCountSymbol; i < m_strAlphabet->Length; i++)
			    {
					comboBox2->Items->Add(m_strAlphabet[i]);
			    }
				if (!m_blStop)
				{
					comboBox2->Items->Add(Convert::ToChar(95));
					m_blStop = true;
				}

				m_iCountSymbol = m_strAlphabet->Length;
			}
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int cell  = Convert::ToInt16(comboBox1->Text);
			 
			 if (Convert::ToChar(comboBox2->Text) != 95)
			 {
				 int value = Convert::ToInt16(comboBox2->Text);
				 m_MachineTuring->m_mapTape[cell] = value;
			 }	
			 else //(Convert::ToChar(comboBox2->Text) == '_')
			 {
				 m_MachineTuring->m_mapTape[cell] = '_';
			 }

			 for (int i = 0; i < 21; i++)
			 {
				 if (m_arrayValueTopLabel[i] == cell)
				 {
					 if (m_MachineTuring->m_mapTape[cell] == 95)
					 {
						 m_labelsBottom[i]->Text = "_";
						 m_MachineTuring->m_mapTape[cell] = 95;
					 }
					 else
					 {
						m_labelsBottom[i]->Text = m_MachineTuring->m_mapTape[cell].ToString();
					 }
				 }
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 int colCount = dataGridView1->ColumnCount;
			 ++colCount;

			 String^ nameColumn = "Q" + colCount.ToString();

			 ++dataGridView1->ColumnCount;

			 --colCount;
			 dataGridView1->Columns[colCount]->HeaderCell->Value = nameColumn;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 --dataGridView1->ColumnCount;
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
		 {
			
			 dataGridView1->Update();

			 const char point = '.';
			 const char more  = '>';
			 const char less  = '<';

			 String^ arraySymbolCell = "a";
			 char direction = '.';
			 char valueTape = 0;
			 char valueTapeNext = 0;
			 int currentRow = -1;
			 int prevRows  = -1;
			 char category = 0;

			 while (arraySymbolCell->Length != 0)
			 {				
				 // читаем значение ленты
				 if (direction == point)
				 {				 
					valueTape = m_MachineTuring->m_mapTape[m_arrayValueTopLabel[10]];
				 }
				 else if (direction == more)
				 {
					 for (int i = 0; i < 21; i++)
					 {
						 ++m_arrayValueTopLabel[i]; 
					 }

					 for (int i = 0; i < 21; i++)
					 {
						m_labelsTop[i]->Text    = m_arrayValueTopLabel[i].ToString();
						if (m_MachineTuring->m_mapTape[m_arrayValueTopLabel[i]] != 95)
						{
							m_labelsBottom[i]->Text = m_MachineTuring->m_mapTape[m_arrayValueTopLabel[i]].ToString();
						}
						else
						{
							m_labelsBottom[i]->Text = "_";
						}
					 }

					 valueTape = m_MachineTuring->m_mapTape[m_arrayValueTopLabel[10]];
				 }
				 else if (direction == less)
				 {
					 for (int i = 0; i < 21; i++)
					 {
						 --m_arrayValueTopLabel[i]; 
					 }

					 for (int i = 0; i < 21; i++)
					 {
						m_labelsTop[i]->Text = m_arrayValueTopLabel[i].ToString();
						m_labelsBottom[i]->Text = m_MachineTuring->m_mapTape[m_arrayValueTopLabel[i]].ToString();
					 }

					  valueTape = m_MachineTuring->m_mapTape[m_arrayValueTopLabel[10]];
				 }

				 currentRow = -1;
				
				 valueTape += 48;

				 if (valueTape == -113)
				 {
					 currentRow = m_strAlphabet->Length;
//					 return;
				 }
				 else
				 {
					 // определяем его строку
					 for (int i = 0; i < m_strAlphabet->Length; i++)
					 { int i_ = m_strAlphabet[i];
						 if (i_ == valueTape)
						 {
							 currentRow = i;
						 }
					 }
				 }

				 if (currentRow == -1)
				 {
					 return;
				 }

				 // читаем значение таблицы

				 if (category > dataGridView1->RowCount)
				 {
					 return;
				 }

				 if (System::Convert::ToString(dataGridView1->Rows[currentRow]->Cells[category]->Value) == "")
				 {
					 return;
				 }


				 if (prevRows != currentRow)
				 {
					category = 0;
					arraySymbolCell = dataGridView1->Rows[currentRow]->Cells[category]->Value->ToString();
				 }
				 else 
				 {
					 arraySymbolCell = dataGridView1->Rows[currentRow]->Cells[category]->Value->ToString();
				 }
		//		 dataGridView1->Rows[currentRow]->Cells[category]->Style->BackColor = Color::ForestGreen;
		//		 System::Threading::Thread::Sleep(1000);
		//		// dataGridView1->Rows[currentRow]->Cells[category]->Style->ForeColor = Color::White;

				 char newValue = arraySymbolCell[0];
				 direction    =  arraySymbolCell[1];
				 category     =  arraySymbolCell[2]; 
				 valueTapeNext = valueTape;

				 category -= 49;
				 newValue -= 48;

				 prevRows = currentRow;

				 // задаем новое значение ленты
				 m_MachineTuring->m_mapTape[m_arrayValueTopLabel[10]] = newValue;
	 			 m_labelsBottom[10]->Text = m_MachineTuring->m_mapTape[m_arrayValueTopLabel[10]].ToString();

				 if (comboBox3->Text == "Медленно ")
				 {
					for (int i = 0; i < 1000000000; i++) { }
				 }
				 else
				 {
					 for (int i = 0;i < 100000000; i++) { }
				 }

				 this->Update();
			 }
		 }
private: System::Void dataGridView1_Enter(System::Object^  sender, System::EventArgs^  e)
		 {
			 
		 }
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			int value = -10;

			for (int i = 0; i < 21; i++)
			{
				m_arrayValueTopLabel[i] = value;
				++value;
			}

			 for (int i = 0; i < 21; i++)
				{
					m_labelsTop[i]->Text = m_arrayValueTopLabel[i].ToString();
				}

				for (int i = 0; i < 21; i++)
				{
					m_labelsBottom[i]->Text = "0";
				}
				trackBar1->Value = 10;

				dataGridView1->Rows->Clear();

				m_strAlphabet = "";
				textBox2->Clear();

				dataGridView1->Refresh();
		 }
};
}
