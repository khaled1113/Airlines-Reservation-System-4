#pragma once

namespace AirlinesReservationSystem4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
        MySqlConnection^ sqlconn = gcnew MySqlConnection();
        MySqlCommand^ sqlcmd = gcnew MySqlCommand();
        DataTable^ sqlDt = gcnew DataTable();
        MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
        MySqlDataReader^sqlRd;
        DataSet^ DS = gcnew DataSet();
        String^ sqlQuery;

        String^ server = "localhost";
        String^ username = "root";
        String^ password = "mydreamcitywillbereal";








    private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
    private: System::Windows::Forms::TabControl^ tabControl1;
    private: System::Windows::Forms::TabPage^ tabPage1;
    private: System::Windows::Forms::Panel^ panel8;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
    private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label12;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::ComboBox^ comboBox8;
    private: System::Windows::Forms::ComboBox^ comboBox10;
    private: System::Windows::Forms::ComboBox^ comboBox9;
    private: System::Windows::Forms::ComboBox^ comboBox7;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::Label^ label38;
    private: System::Windows::Forms::Label^ label37;
    private: System::Windows::Forms::Label^ label36;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label25;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::TextBox^ textBox9;
    private: System::Windows::Forms::TextBox^ textBox11;
    private: System::Windows::Forms::TextBox^ textBox12;
    private: System::Windows::Forms::TextBox^ textBox8;
    private: System::Windows::Forms::TextBox^ textBox7;
    private: System::Windows::Forms::TextBox^ textBox10;
    private: System::Windows::Forms::TextBox^ textBox5;
    private: System::Windows::Forms::TextBox^ txtScore1;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox6;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Label^ label35;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::ComboBox^ comboBox4;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::ComboBox^ comboBox6;
    private: System::Windows::Forms::ComboBox^ comboBox5;
    private: System::Windows::Forms::ComboBox^ comboBox3;
    private: System::Windows::Forms::ComboBox^ comboBox2;
    private: System::Windows::Forms::ComboBox^ cboModule1;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ lblDate;
    private: System::Windows::Forms::Label^ lblRanking;
    private: System::Windows::Forms::Label^ lblTotal;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Panel^ panel7;
    private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ label34;
    private: System::Windows::Forms::Label^ label33;
    private: System::Windows::Forms::Label^ label30;
    private: System::Windows::Forms::ComboBox^ comboBox25;
    private: System::Windows::Forms::ComboBox^ comboBox21;
    private: System::Windows::Forms::ComboBox^ comboBox24;
    private: System::Windows::Forms::ComboBox^ comboBox22;
    private: System::Windows::Forms::ComboBox^ comboBox23;
    private: System::Windows::Forms::Label^ label31;
    private: System::Windows::Forms::Label^ label32;
    private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
    private: System::Windows::Forms::TabPage^ tabPage2;










           String^ database = "AirlinesReservationSystem4db";


	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:







































































































































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
            this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
            this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
            this->panel8 = (gcnew System::Windows::Forms::Panel());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
            this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->comboBox8 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox10 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox9 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox7 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label38 = (gcnew System::Windows::Forms::Label());
            this->label37 = (gcnew System::Windows::Forms::Label());
            this->label36 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->label25 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->textBox9 = (gcnew System::Windows::Forms::TextBox());
            this->textBox11 = (gcnew System::Windows::Forms::TextBox());
            this->textBox12 = (gcnew System::Windows::Forms::TextBox());
            this->textBox8 = (gcnew System::Windows::Forms::TextBox());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->textBox10 = (gcnew System::Windows::Forms::TextBox());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->txtScore1 = (gcnew System::Windows::Forms::TextBox());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label35 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
            this->cboModule1 = (gcnew System::Windows::Forms::ComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->lblDate = (gcnew System::Windows::Forms::Label());
            this->lblRanking = (gcnew System::Windows::Forms::Label());
            this->lblTotal = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel7 = (gcnew System::Windows::Forms::Panel());
            this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label34 = (gcnew System::Windows::Forms::Label());
            this->label33 = (gcnew System::Windows::Forms::Label());
            this->label30 = (gcnew System::Windows::Forms::Label());
            this->comboBox25 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox21 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox24 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox22 = (gcnew System::Windows::Forms::ComboBox());
            this->comboBox23 = (gcnew System::Windows::Forms::ComboBox());
            this->label31 = (gcnew System::Windows::Forms::Label());
            this->label32 = (gcnew System::Windows::Forms::Label());
            this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
            this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
            this->tabControl1->SuspendLayout();
            this->tabPage1->SuspendLayout();
            this->panel8->SuspendLayout();
            this->panel5->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
            this->panel3->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel7->SuspendLayout();
            this->panel1->SuspendLayout();
            this->SuspendLayout();
            // 
            // fileSystemWatcher1
            // 
            this->fileSystemWatcher1->EnableRaisingEvents = true;
            this->fileSystemWatcher1->SynchronizingObject = this;
            // 
            // tabControl1
            // 
            this->tabControl1->Controls->Add(this->tabPage1);
            this->tabControl1->Controls->Add(this->tabPage2);
            this->tabControl1->Location = System::Drawing::Point(12, 12);
            this->tabControl1->Name = L"tabControl1";
            this->tabControl1->SelectedIndex = 0;
            this->tabControl1->Size = System::Drawing::Size(1340, 759);
            this->tabControl1->TabIndex = 1;
            // 
            // tabPage1
            // 
            this->tabPage1->BackColor = System::Drawing::SystemColors::ActiveBorder;
            this->tabPage1->Controls->Add(this->panel8);
            this->tabPage1->Controls->Add(this->panel5);
            this->tabPage1->Controls->Add(this->panel3);
            this->tabPage1->Controls->Add(this->panel2);
            this->tabPage1->Controls->Add(this->panel4);
            this->tabPage1->Controls->Add(this->panel6);
            this->tabPage1->Controls->Add(this->panel1);
            this->tabPage1->Controls->Add(this->tableLayoutPanel5);
            this->tabPage1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->tabPage1->Location = System::Drawing::Point(4, 25);
            this->tabPage1->Name = L"tabPage1";
            this->tabPage1->Padding = System::Windows::Forms::Padding(3);
            this->tabPage1->Size = System::Drawing::Size(1332, 730);
            this->tabPage1->TabIndex = 0;
            this->tabPage1->Text = L"Reservation";
            // 
            // panel8
            // 
            this->panel8->BackColor = System::Drawing::Color::Cornsilk;
            this->panel8->Controls->Add(this->button2);
            this->panel8->Controls->Add(this->button3);
            this->panel8->Controls->Add(this->button1);
            this->panel8->Controls->Add(this->button4);
            this->panel8->Location = System::Drawing::Point(464, 632);
            this->panel8->Name = L"panel8";
            this->panel8->Size = System::Drawing::Size(493, 97);
            this->panel8->TabIndex = 1;
            // 
            // button2
            // 
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(269, 14);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(100, 69);
            this->button2->TabIndex = 0;
            this->button2->Text = L"Result";
            this->button2->UseVisualStyleBackColor = true;
            // 
            // button3
            // 
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(157, 14);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(98, 69);
            this->button3->TabIndex = 0;
            this->button3->Text = L"Reset";
            this->button3->UseVisualStyleBackColor = true;
            // 
            // button1
            // 
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->Location = System::Drawing::Point(34, 14);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(91, 69);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Add";
            this->button1->UseVisualStyleBackColor = true;
            // 
            // button4
            // 
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->Location = System::Drawing::Point(387, 14);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(91, 69);
            this->button4->TabIndex = 0;
            this->button4->Text = L"Exit";
            this->button4->UseVisualStyleBackColor = true;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::Cornsilk;
            this->panel5->Controls->Add(this->numericUpDown5);
            this->panel5->Controls->Add(this->numericUpDown4);
            this->panel5->Controls->Add(this->numericUpDown3);
            this->panel5->Controls->Add(this->numericUpDown2);
            this->panel5->Controls->Add(this->numericUpDown1);
            this->panel5->Controls->Add(this->label10);
            this->panel5->Controls->Add(this->label12);
            this->panel5->Controls->Add(this->label7);
            this->panel5->Controls->Add(this->label8);
            this->panel5->Controls->Add(this->label11);
            this->panel5->Location = System::Drawing::Point(705, 351);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(252, 275);
            this->panel5->TabIndex = 0;
            // 
            // numericUpDown5
            // 
            this->numericUpDown5->Location = System::Drawing::Point(168, 231);
            this->numericUpDown5->Name = L"numericUpDown5";
            this->numericUpDown5->Size = System::Drawing::Size(84, 22);
            this->numericUpDown5->TabIndex = 2;
            this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // numericUpDown4
            // 
            this->numericUpDown4->Location = System::Drawing::Point(168, 179);
            this->numericUpDown4->Name = L"numericUpDown4";
            this->numericUpDown4->Size = System::Drawing::Size(84, 22);
            this->numericUpDown4->TabIndex = 2;
            this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // numericUpDown3
            // 
            this->numericUpDown3->Location = System::Drawing::Point(168, 124);
            this->numericUpDown3->Name = L"numericUpDown3";
            this->numericUpDown3->Size = System::Drawing::Size(84, 22);
            this->numericUpDown3->TabIndex = 2;
            this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // numericUpDown2
            // 
            this->numericUpDown2->Location = System::Drawing::Point(168, 66);
            this->numericUpDown2->Name = L"numericUpDown2";
            this->numericUpDown2->Size = System::Drawing::Size(84, 22);
            this->numericUpDown2->TabIndex = 2;
            this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // numericUpDown1
            // 
            this->numericUpDown1->Location = System::Drawing::Point(168, 9);
            this->numericUpDown1->Name = L"numericUpDown1";
            this->numericUpDown1->Size = System::Drawing::Size(84, 22);
            this->numericUpDown1->TabIndex = 2;
            this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // label10
            // 
            this->label10->AutoSize = true;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label10->Location = System::Drawing::Point(30, 11);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(66, 36);
            this->label10->TabIndex = 1;
            this->label10->Text = L"###";
            // 
            // label12
            // 
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label12->Location = System::Drawing::Point(30, 120);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(66, 36);
            this->label12->TabIndex = 1;
            this->label12->Text = L"###";
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(30, 224);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(66, 36);
            this->label7->TabIndex = 1;
            this->label7->Text = L"###";
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label8->Location = System::Drawing::Point(30, 172);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(66, 36);
            this->label8->TabIndex = 1;
            this->label8->Text = L"###";
            // 
            // label11
            // 
            this->label11->AutoSize = true;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label11->Location = System::Drawing::Point(30, 68);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(66, 36);
            this->label11->TabIndex = 1;
            this->label11->Text = L"###";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Cornsilk;
            this->panel3->Controls->Add(this->label21);
            this->panel3->Controls->Add(this->label20);
            this->panel3->Controls->Add(this->label17);
            this->panel3->Controls->Add(this->label19);
            this->panel3->Controls->Add(this->label18);
            this->panel3->Controls->Add(this->comboBox8);
            this->panel3->Controls->Add(this->comboBox10);
            this->panel3->Controls->Add(this->comboBox9);
            this->panel3->Controls->Add(this->comboBox7);
            this->panel3->Controls->Add(this->comboBox1);
            this->panel3->Location = System::Drawing::Point(464, 349);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(235, 277);
            this->panel3->TabIndex = 0;
            // 
            // label21
            // 
            this->label21->AutoSize = true;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label21->Location = System::Drawing::Point(11, 13);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(52, 29);
            this->label21->TabIndex = 1;
            this->label21->Text = L"###";
            // 
            // label20
            // 
            this->label20->AutoSize = true;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label20->Location = System::Drawing::Point(11, 122);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(52, 29);
            this->label20->TabIndex = 1;
            this->label20->Text = L"###";
            // 
            // label17
            // 
            this->label17->AutoSize = true;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label17->Location = System::Drawing::Point(11, 70);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(52, 29);
            this->label17->TabIndex = 1;
            this->label17->Text = L"###";
            // 
            // label19
            // 
            this->label19->AutoSize = true;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label19->Location = System::Drawing::Point(11, 226);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(52, 29);
            this->label19->TabIndex = 1;
            this->label19->Text = L"###";
            // 
            // label18
            // 
            this->label18->AutoSize = true;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label18->Location = System::Drawing::Point(11, 174);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(52, 29);
            this->label18->TabIndex = 1;
            this->label18->Text = L"###";
            // 
            // comboBox8
            // 
            this->comboBox8->FormattingEnabled = true;
            this->comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
            this->comboBox8->Location = System::Drawing::Point(135, 68);
            this->comboBox8->Name = L"comboBox8";
            this->comboBox8->Size = System::Drawing::Size(100, 24);
            this->comboBox8->TabIndex = 3;
            this->comboBox8->Text = L"No";
            // 
            // comboBox10
            // 
            this->comboBox10->FormattingEnabled = true;
            this->comboBox10->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
            this->comboBox10->Location = System::Drawing::Point(135, 233);
            this->comboBox10->Name = L"comboBox10";
            this->comboBox10->Size = System::Drawing::Size(97, 24);
            this->comboBox10->TabIndex = 3;
            this->comboBox10->Text = L"No";
            // 
            // comboBox9
            // 
            this->comboBox9->FormattingEnabled = true;
            this->comboBox9->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
            this->comboBox9->Location = System::Drawing::Point(135, 181);
            this->comboBox9->Name = L"comboBox9";
            this->comboBox9->Size = System::Drawing::Size(100, 24);
            this->comboBox9->TabIndex = 3;
            this->comboBox9->Text = L"No";
            // 
            // comboBox7
            // 
            this->comboBox7->FormattingEnabled = true;
            this->comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
            this->comboBox7->Location = System::Drawing::Point(135, 126);
            this->comboBox7->Name = L"comboBox7";
            this->comboBox7->Size = System::Drawing::Size(100, 24);
            this->comboBox7->TabIndex = 3;
            this->comboBox7->Text = L"No";
            // 
            // comboBox1
            // 
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
            this->comboBox1->Location = System::Drawing::Point(135, 11);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(97, 24);
            this->comboBox1->TabIndex = 3;
            this->comboBox1->Text = L"No";
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Cornsilk;
            this->panel2->Controls->Add(this->label38);
            this->panel2->Controls->Add(this->label37);
            this->panel2->Controls->Add(this->label36);
            this->panel2->Controls->Add(this->label29);
            this->panel2->Controls->Add(this->label28);
            this->panel2->Controls->Add(this->label27);
            this->panel2->Controls->Add(this->label25);
            this->panel2->Controls->Add(this->label26);
            this->panel2->Controls->Add(this->textBox9);
            this->panel2->Controls->Add(this->textBox11);
            this->panel2->Controls->Add(this->textBox12);
            this->panel2->Controls->Add(this->textBox8);
            this->panel2->Controls->Add(this->textBox7);
            this->panel2->Controls->Add(this->textBox10);
            this->panel2->Controls->Add(this->textBox5);
            this->panel2->Controls->Add(this->txtScore1);
            this->panel2->Location = System::Drawing::Point(7, 349);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(451, 380);
            this->panel2->TabIndex = 0;
            // 
            // label38
            // 
            this->label38->AutoSize = true;
            this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label38->Location = System::Drawing::Point(3, 290);
            this->label38->Name = L"label38";
            this->label38->Size = System::Drawing::Size(63, 29);
            this->label38->TabIndex = 1;
            this->label38->Text = L"F/A7";
            this->label38->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label37
            // 
            this->label37->AutoSize = true;
            this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label37->Location = System::Drawing::Point(4, 337);
            this->label37->Name = L"label37";
            this->label37->Size = System::Drawing::Size(63, 29);
            this->label37->TabIndex = 1;
            this->label37->Text = L"F/A8";
            this->label37->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label36
            // 
            this->label36->AutoSize = true;
            this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label36->Location = System::Drawing::Point(4, 243);
            this->label36->Name = L"label36";
            this->label36->Size = System::Drawing::Size(63, 29);
            this->label36->TabIndex = 1;
            this->label36->Text = L"F/A6";
            this->label36->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label29
            // 
            this->label29->AutoSize = true;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label29->Location = System::Drawing::Point(4, 20);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(63, 29);
            this->label29->TabIndex = 1;
            this->label29->Text = L"F/A1";
            this->label29->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label28
            // 
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label28->Location = System::Drawing::Point(4, 63);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(63, 29);
            this->label28->TabIndex = 1;
            this->label28->Text = L"F/A2";
            this->label28->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label27
            // 
            this->label27->AutoSize = true;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label27->Location = System::Drawing::Point(4, 199);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(63, 29);
            this->label27->TabIndex = 1;
            this->label27->Text = L"F/A5";
            this->label27->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label25
            // 
            this->label25->AutoSize = true;
            this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label25->Location = System::Drawing::Point(4, 105);
            this->label25->Name = L"label25";
            this->label25->Size = System::Drawing::Size(63, 29);
            this->label25->TabIndex = 1;
            this->label25->Text = L"F/A3";
            this->label25->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label26
            // 
            this->label26->AutoSize = true;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label26->Location = System::Drawing::Point(4, 152);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(63, 29);
            this->label26->TabIndex = 1;
            this->label26->Text = L"F/A4";
            this->label26->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // textBox9
            // 
            this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox9->Location = System::Drawing::Point(122, 274);
            this->textBox9->Name = L"textBox9";
            this->textBox9->Size = System::Drawing::Size(329, 41);
            this->textBox9->TabIndex = 2;
            this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox11
            // 
            this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox11->Location = System::Drawing::Point(122, 231);
            this->textBox11->Name = L"textBox11";
            this->textBox11->Size = System::Drawing::Size(329, 41);
            this->textBox11->TabIndex = 2;
            this->textBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox12
            // 
            this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox12->Location = System::Drawing::Point(122, 187);
            this->textBox12->Name = L"textBox12";
            this->textBox12->Size = System::Drawing::Size(329, 41);
            this->textBox12->TabIndex = 2;
            this->textBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox8
            // 
            this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox8->Location = System::Drawing::Point(122, 140);
            this->textBox8->Name = L"textBox8";
            this->textBox8->Size = System::Drawing::Size(329, 41);
            this->textBox8->TabIndex = 2;
            this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox7
            // 
            this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox7->Location = System::Drawing::Point(122, 93);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(329, 41);
            this->textBox7->TabIndex = 2;
            this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox10
            // 
            this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox10->Location = System::Drawing::Point(122, 321);
            this->textBox10->Name = L"textBox10";
            this->textBox10->Size = System::Drawing::Size(329, 41);
            this->textBox10->TabIndex = 2;
            this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // textBox5
            // 
            this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox5->Location = System::Drawing::Point(122, 49);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(329, 41);
            this->textBox5->TabIndex = 2;
            this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // txtScore1
            // 
            this->txtScore1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->txtScore1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->txtScore1->Location = System::Drawing::Point(122, 5);
            this->txtScore1->Name = L"txtScore1";
            this->txtScore1->Size = System::Drawing::Size(329, 41);
            this->txtScore1->TabIndex = 2;
            this->txtScore1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::Cornsilk;
            this->panel4->Controls->Add(this->label24);
            this->panel4->Controls->Add(this->label23);
            this->panel4->Controls->Add(this->label9);
            this->panel4->Controls->Add(this->label14);
            this->panel4->Controls->Add(this->label22);
            this->panel4->Controls->Add(this->textBox1);
            this->panel4->Controls->Add(this->textBox2);
            this->panel4->Controls->Add(this->textBox3);
            this->panel4->Controls->Add(this->textBox4);
            this->panel4->Controls->Add(this->textBox6);
            this->panel4->Location = System::Drawing::Point(464, 8);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(493, 337);
            this->panel4->TabIndex = 0;
            // 
            // label24
            // 
            this->label24->AutoSize = true;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label24->Location = System::Drawing::Point(10, 14);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(95, 29);
            this->label24->TabIndex = 1;
            this->label24->Text = L"Captain";
            // 
            // label23
            // 
            this->label23->AutoSize = true;
            this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label23->Location = System::Drawing::Point(10, 71);
            this->label23->Name = L"label23";
            this->label23->Size = System::Drawing::Size(156, 29);
            this->label23->TabIndex = 1;
            this->label23->Text = L"Senior officer";
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label9->Location = System::Drawing::Point(10, 235);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(113, 29);
            this->label9->TabIndex = 1;
            this->label9->Text = L"trainee😏";
            // 
            // label14
            // 
            this->label14->AutoSize = true;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label14->Location = System::Drawing::Point(10, 183);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(137, 25);
            this->label14->TabIndex = 1;
            this->label14->Text = L"Second officer";
            // 
            // label22
            // 
            this->label22->AutoSize = true;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label22->Location = System::Drawing::Point(10, 123);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(132, 29);
            this->label22->TabIndex = 1;
            this->label22->Text = L"First officer";
            // 
            // textBox1
            // 
            this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox1->Location = System::Drawing::Point(211, 6);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(267, 34);
            this->textBox1->TabIndex = 2;
            this->textBox1->Text = L"Capt:";
            // 
            // textBox2
            // 
            this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox2->Location = System::Drawing::Point(211, 57);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(267, 34);
            this->textBox2->TabIndex = 2;
            this->textBox2->Text = L"Capt:";
            // 
            // textBox3
            // 
            this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox3->Location = System::Drawing::Point(211, 175);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(270, 34);
            this->textBox3->TabIndex = 2;
            this->textBox3->Text = L"Capt:";
            // 
            // textBox4
            // 
            this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox4->Location = System::Drawing::Point(211, 233);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(267, 34);
            this->textBox4->TabIndex = 2;
            this->textBox4->Text = L"Capt:";
            // 
            // textBox6
            // 
            this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->textBox6->Location = System::Drawing::Point(211, 118);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(269, 34);
            this->textBox6->TabIndex = 2;
            this->textBox6->Text = L"Capt:";
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::Cornsilk;
            this->panel6->Controls->Add(this->label35);
            this->panel6->Controls->Add(this->label16);
            this->panel6->Controls->Add(this->label13);
            this->panel6->Controls->Add(this->comboBox4);
            this->panel6->Controls->Add(this->label15);
            this->panel6->Controls->Add(this->comboBox6);
            this->panel6->Controls->Add(this->comboBox5);
            this->panel6->Controls->Add(this->comboBox3);
            this->panel6->Controls->Add(this->comboBox2);
            this->panel6->Controls->Add(this->cboModule1);
            this->panel6->Controls->Add(this->label4);
            this->panel6->Controls->Add(this->lblDate);
            this->panel6->Controls->Add(this->lblRanking);
            this->panel6->Controls->Add(this->lblTotal);
            this->panel6->Controls->Add(this->label6);
            this->panel6->Controls->Add(this->label5);
            this->panel6->Controls->Add(this->label3);
            this->panel6->Controls->Add(this->label2);
            this->panel6->Controls->Add(this->label1);
            this->panel6->Controls->Add(this->panel7);
            this->panel6->Location = System::Drawing::Point(963, 8);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(367, 723);
            this->panel6->TabIndex = 0;
            // 
            // label35
            // 
            this->label35->AutoSize = true;
            this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label35->Location = System::Drawing::Point(-956, 354);
            this->label35->Name = L"label35";
            this->label35->Size = System::Drawing::Size(81, 36);
            this->label35->TabIndex = 1;
            this->label35->Text = L"Total";
            // 
            // label16
            // 
            this->label16->AutoSize = true;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label16->Location = System::Drawing::Point(11, 574);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(89, 36);
            this->label16->TabIndex = 1;
            this->label16->Text = L"Class";
            // 
            // label13
            // 
            this->label13->AutoSize = true;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label13->Location = System::Drawing::Point(11, 631);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(126, 36);
            this->label13->TabIndex = 1;
            this->label13->Text = L"Ranking";
            // 
            // comboBox4
            // 
            this->comboBox4->AllowDrop = true;
            this->comboBox4->FormattingEnabled = true;
            this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->comboBox4->Location = System::Drawing::Point(57, 354);
            this->comboBox4->Name = L"comboBox4";
            this->comboBox4->Size = System::Drawing::Size(191, 24);
            this->comboBox4->TabIndex = 3;
            // 
            // label15
            // 
            this->label15->AutoSize = true;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label15->Location = System::Drawing::Point(11, 683);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(76, 36);
            this->label15->TabIndex = 1;
            this->label15->Text = L"Date";
            // 
            // comboBox6
            // 
            this->comboBox6->AllowDrop = true;
            this->comboBox6->FormattingEnabled = true;
            this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->comboBox6->Location = System::Drawing::Point(57, 529);
            this->comboBox6->Name = L"comboBox6";
            this->comboBox6->Size = System::Drawing::Size(191, 24);
            this->comboBox6->TabIndex = 3;
            // 
            // comboBox5
            // 
            this->comboBox5->AllowDrop = true;
            this->comboBox5->FormattingEnabled = true;
            this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->comboBox5->Location = System::Drawing::Point(57, 468);
            this->comboBox5->Name = L"comboBox5";
            this->comboBox5->Size = System::Drawing::Size(191, 24);
            this->comboBox5->TabIndex = 3;
            // 
            // comboBox3
            // 
            this->comboBox3->AllowDrop = true;
            this->comboBox3->FormattingEnabled = true;
            this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->comboBox3->Location = System::Drawing::Point(57, 411);
            this->comboBox3->Name = L"comboBox3";
            this->comboBox3->Size = System::Drawing::Size(191, 24);
            this->comboBox3->TabIndex = 3;
            // 
            // comboBox2
            // 
            this->comboBox2->AllowDrop = true;
            this->comboBox2->FormattingEnabled = true;
            this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->comboBox2->Location = System::Drawing::Point(57, 292);
            this->comboBox2->Name = L"comboBox2";
            this->comboBox2->Size = System::Drawing::Size(191, 24);
            this->comboBox2->TabIndex = 3;
            // 
            // cboModule1
            // 
            this->cboModule1->AllowDrop = true;
            this->cboModule1->FormattingEnabled = true;
            this->cboModule1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
                L"Visual C++ Programming", L"Visual C# Programming",
                    L"Visual Basic Programming"
            });
            this->cboModule1->Location = System::Drawing::Point(56, 241);
            this->cboModule1->Name = L"cboModule1";
            this->cboModule1->Size = System::Drawing::Size(191, 24);
            this->cboModule1->TabIndex = 3;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label4->Enabled = false;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->Location = System::Drawing::Point(17, 341);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(34, 38);
            this->label4->TabIndex = 1;
            this->label4->Text = L"3";
            // 
            // lblDate
            // 
            this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblDate->Location = System::Drawing::Point(196, 676);
            this->lblDate->Name = L"lblDate";
            this->lblDate->Size = System::Drawing::Size(168, 38);
            this->lblDate->TabIndex = 1;
            this->lblDate->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // lblRanking
            // 
            this->lblRanking->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblRanking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblRanking->Location = System::Drawing::Point(196, 624);
            this->lblRanking->Name = L"lblRanking";
            this->lblRanking->Size = System::Drawing::Size(168, 38);
            this->lblRanking->TabIndex = 1;
            this->lblRanking->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // lblTotal
            // 
            this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->lblTotal->Location = System::Drawing::Point(196, 569);
            this->lblTotal->Name = L"lblTotal";
            this->lblTotal->Size = System::Drawing::Size(168, 38);
            this->lblTotal->TabIndex = 1;
            this->lblTotal->TextAlign = System::Drawing::ContentAlignment::TopCenter;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label6->Enabled = false;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(17, 516);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(34, 38);
            this->label6->TabIndex = 1;
            this->label6->Text = L"6";
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label5->Enabled = false;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->Location = System::Drawing::Point(17, 455);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(34, 38);
            this->label5->TabIndex = 1;
            this->label5->Text = L"5";
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label3->Enabled = false;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->Location = System::Drawing::Point(17, 398);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(34, 38);
            this->label3->TabIndex = 1;
            this->label3->Text = L"4";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label2->Enabled = false;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->Location = System::Drawing::Point(17, 279);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(34, 38);
            this->label2->TabIndex = 1;
            this->label2->Text = L"2";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->label1->Enabled = false;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->Location = System::Drawing::Point(17, 228);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(34, 38);
            this->label1->TabIndex = 1;
            this->label1->Text = L"1";
            // 
            // panel7
            // 
            this->panel7->BackColor = System::Drawing::Color::SeaShell;
            this->panel7->Controls->Add(this->monthCalendar1);
            this->panel7->Location = System::Drawing::Point(3, 3);
            this->panel7->Name = L"panel7";
            this->panel7->Size = System::Drawing::Size(361, 205);
            this->panel7->TabIndex = 0;
            // 
            // monthCalendar1
            // 
            this->monthCalendar1->Location = System::Drawing::Point(47, -5);
            this->monthCalendar1->Name = L"monthCalendar1";
            this->monthCalendar1->TabIndex = 0;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Cornsilk;
            this->panel1->Controls->Add(this->label34);
            this->panel1->Controls->Add(this->label33);
            this->panel1->Controls->Add(this->label30);
            this->panel1->Controls->Add(this->comboBox25);
            this->panel1->Controls->Add(this->comboBox21);
            this->panel1->Controls->Add(this->comboBox24);
            this->panel1->Controls->Add(this->comboBox22);
            this->panel1->Controls->Add(this->comboBox23);
            this->panel1->Controls->Add(this->label31);
            this->panel1->Controls->Add(this->label32);
            this->panel1->Location = System::Drawing::Point(7, 6);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(451, 337);
            this->panel1->TabIndex = 0;
            // 
            // label34
            // 
            this->label34->AutoSize = true;
            this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label34->Location = System::Drawing::Point(3, 5);
            this->label34->Name = L"label34";
            this->label34->Size = System::Drawing::Size(100, 36);
            this->label34->TabIndex = 1;
            this->label34->Text = L"Airline";
            // 
            // label33
            // 
            this->label33->AutoSize = true;
            this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label33->Location = System::Drawing::Point(3, 62);
            this->label33->Name = L"label33";
            this->label33->Size = System::Drawing::Size(91, 36);
            this->label33->TabIndex = 1;
            this->label33->Text = L"Plane";
            // 
            // label30
            // 
            this->label30->AutoSize = true;
            this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label30->Location = System::Drawing::Point(3, 174);
            this->label30->Name = L"label30";
            this->label30->Size = System::Drawing::Size(83, 36);
            this->label30->TabIndex = 1;
            this->label30->Text = L"From";
            // 
            // comboBox25
            // 
            this->comboBox25->FormattingEnabled = true;
            this->comboBox25->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
                L"Aalborg\tDenmark\tAAL", L"Aalesund\tNorway\tAES",
                    L"Aarhus\tDenmark\tAAR", L"Abbotsford, BC\tCanada\tYXX", L"Abbotsford, BC \tCanada \tYXX", L"Aberdeen \tScotland\tABZ", L"Aberdeen, SD \tUSA \tABR",
                    L"Abidjan\tIvory Coast\tABJ", L"Abilene, TX \tUSA \tABI", L"Abu Dhabi\tUnited Arab Emirates\tAUH", L"Abuja\tNigeria\tABV", L"Acapulco\tMexico\tACA",
                    L"Accra\tGhana\tACC", L"Adana\tTurkey\tADA", L"Addis Ababa\tEthiopia\tADD", L"Adelaide, S.A.\tAustralia\tADL", L"Aden\tYemen\tADE",
                    L"Adiyaman\tTurkey\tADF", L"Agadir\tMorocco\tAGA", L"Agana\tGuam\tGUM", L"Aguadilla\tPuerto Rico\tBQN", L"Aguascalientes\tMexico\tAGU",
                    L"Ahe\tFrench Polynesia\tAHE", L"Ahmedabad\tIndia\tAMD", L"Ajaccio, Corsica\tFrance\tAJA", L"Akita\tJapan\tAXT", L"Akron, OH \tUSA \tCAK",
                    L"Alamosa, CO \tUSA \tALS", L"Albany, GA \tUSA \tABY", L"Albany, NY \tUSA \tALB", L"Albenga\tItaly\tALL", L"Albuquerque, NM \tUSA \tABQ",
                    L"Albury, N.S.W.\tAustralia\tABX", L"Alexandria\tEgypt\tALY", L"Alexandria\tEgypt\tHBE", L"Alexandria, LA \tUSA \tAEX", L"Alexandroupolis\tGreece\tAXD",
                    L"Alghero, Sardinia\tItaly\tAHO", L"Algiers\tAlgeria\tALG", L"Alicante\tSpain\tALC", L"Alice Springs, N.T.\tAustralia\tASP",
                    L"Alice Town, North Bimini Island\tBahamas\tNSB", L"Allentown, PA \tUSA \tABE", L"Alliance, NE \tUSA \tAIA", L"Almaty\tKazakhstan\tALA",
                    L"Almeria\tSpain\tLEI", L"Alor Setar\tMalaysia\tAOR", L"Alpena, MI \tUSA \tAPN", L"Alta\tNorway\tALF", L"Altenrhein\tSwitzerland\tACH"
            });
            this->comboBox25->Location = System::Drawing::Point(166, 174);
            this->comboBox25->Name = L"comboBox25";
            this->comboBox25->Size = System::Drawing::Size(282, 24);
            this->comboBox25->TabIndex = 3;
            this->comboBox25->Text = L"Choose Airport";
            // 
            // comboBox21
            // 
            this->comboBox21->FormattingEnabled = true;
            this->comboBox21->Items->AddRange(gcnew cli::array< System::Object^  >(136) {
                L"A", L"AAC – AAC Amphibian Airplanes of Canada",
                    L"AAMSA – Aeronautica Agricola Mexicana SA", L"AASI – Advanced Aerodynamics and Structures Inc", L"ABHCO – Arab British Helicopter Company (Egypt)",
                    L"ABS – ABS Aircraft (Germany); ABS Aircraft AG (Switzerland)", L"ACBA – Aéro Club de Bas Armagnac (France)", L"ACE – Ace Aircraft Manufacturing and Supply (United States); Ace Aircraft Manufac"
                    L"turing Company (United States); Ace Aircraft Manufacturing Inc (United States)",
                    L"ACEAIR – Aceair SA (Switzerland)", L"ACES HIGH – Aces High Light Aircraft Ltd (Canada)", L"ACRO SPORT – Acro Sport Inc (United States)",
                    L"AD AEROSPACE – AD Aerospace Ltd (United Kingdom)", L"ADA – Aeronautical Development Agency (India)", L"ADAM (1) – Roger Adam (France)",
                    L"ADAM (2) – Adam Aircraft Industries LLC (United States)", L"ADAMS – Adams Industries Inc (United States)", L"ADVANCED AEROMARINE – Advanced Aeromarine (United States)",
                    L"ADVANCED AIRCRAFT – Advanced Aircraft Corporation (United States)", L"ADVANCED AVIATION – Advanced Aviation Inc (United States)",
                    L"ADVENTURE AIR – Adventure Air (United States)", L"AEA – Aeronautical Engineers Australia Research Pty Ltd (Australia)", L"AERFER – Aerfer-Industrie Aerospaziali Meridionali SpA (Italy); Aerfer-Industrie "
                    L"Meccaniche Aeronautiche Meridionali SpA (Italy)",
                    L"AERFER-AERMACCHI – see AERFER and AERMACCHI", L"AERITALIA – Aeritalia-Società Aerospaziale Italiana pa", L"AERITALIA-AERMACCHI – see AERITALIA and AERMACCHI",
                    L"AERMACCHI – Aermacchi SpA (Italy); Aeronautica Macchi Spa (Italy)", L"AERO (1) – Aero Design and Engineering Company (United States)",
                    L"AERO (2) – Aero Vodochody AS (Czech Republic); Aero Vodochody Národní Podnik (Cze"
                    L"ch Republic)", L"AERO (3) – Aero Sp z oo (Poland)",
                    L"AERO ADVENTURE – Aero Adventure Inc (United States)", L"AERO BOERO – Aero Boero SA (Argentina); Aero Boero SRL (Argentina); Aero Talleres"
                    L" Boero SRL (Argentina)",
                    L"AERO COMMANDER – Aero Commander Inc (United States)", L"AERO DESIGNS – Aero Designs Inc (United States)", L"AERO GARE – Aero Gare (United States)",
                    L"AERO JAEN – Aeronautica de Jaen (Spain)", L"AERO KUHLMANN – Aero Kuhlmann (France)", L"AERO MERCANTIL – Aero Mercantil SA (Colombia)",
                    L"AERO MIRAGE – Aero Mirage Inc (United States)", L"AERO MOD – Aero Mod General (United States)", L"AERO SPACELINES – Aero Spacelines Inc (United States)",
                    L"AEROBRAVO – Aerobravo Indústria Aeronáutica Ltda. (Brazil)", L"AEROCAD – AeroCad Inc (United States)", L"AEROCAR – Aerocar Inc (United States)",
                    L"AEROCOMP – Aerocomp Inc (United States)", L"AERO-COMPOSITES – Aero-Composites Technologies Inc (United States)", L"AERO-DIFUSION – Aero-\"Diffusión SL (Spain)",
                    L"AERODIS – Aérodis SARL (France)", L"AERO-JODEL – Aero Flugzeugbau Hubert Zuerl (Germany)", L"AEROKOPTER – OOO Aerokopter (Ukraine)",
                    L"AEROLITES – Aerolites Inc (United States)", L"AEROMERE – Aeromere SpA (Italy)", L"AEROMOT – Aeromot Indústria Mecânico-Metalúrgica Ltda. (Brazil); Aeronaves e Moto"
                    L"res SA (Brazil)",
                    L"AERONCA – Aeronautical Corporation of America (United States); – Aeronca Manufact"
                    L"uring Corporation (United States)",
                    L"AEROPLASTIKA – Aeroplastika (Lithuania)", L"AEROPRACT – Aeropract JSC (Russia); KB Aeropract (Russia); LM Aeropract Samara (R"
                    L"ussia); OKB Aeroprakt (Russia)",
                    L"AEROPRAKT – Aeroprakt Firma (Ukraine); Aeroprakt ooo (Ukraine)", L"AEROPRO – Aeropro sro (Slovakia)", L"AEROPROGRESS – Aeroprogress Corporation (Russia)",
                    L"AERORIC – Aeroric Nauchno-Proizvodstvennoye Predpriyatie OOO (Russia)", L"AEROSPATIALE – Aerospatiale Matra SA (France); Société Nationale Industrielle Aer"
                    L"ospatiale (France)",
                    L"AEROSPOOL – Aerospool spol sro (Slovakia)", L"AEROSPORT – Aerosport Inc (United States)", L"AEROSTAR (1) – Aerostar Aircraft Corporation (United States)",
                    L"AEROSTAR (2) – SC Aerostar SA (Romania)", L"AEROSTRUCTURE – Aérostructure SARL (France)", L"AEROSTYLE – Aerostyle GmbH (Germany)",
                    L"AEROTEC – Aerotec S.A. Indústria Aeronáutica (Brazil)", L"AEROTECHNIK – Aerotechnik CZ SRO (Czech Republic)", L"AEROTEK (1) – Aerotek Inc (United States)",
                    L"AEROTEK (2) – Aeronautical Systems Technology (South Africa)", L"AERO-VOLGA – NPO Aero-Volga (Russia)", L"AESL – Aero Engine Services Ltd (New Zealand)",
                    L"AFIC – AFIC Pty Ltd (South Africa)", L"AG-CAT – Ag-Cat Corporation (United States)", L"AGRO-COPTEROS – Agro-Copteros Ltda (Colombia)",
                    L"AGROLOT – Fundacja Agrolot (Poland); Wyposazen Agrolotniczych (Poland)", L"AGUSTA – Agusta SpA (Italy); Agusta, Division of Leonardo (Italy); Costruzioni Ae"
                    L"ronautiche Giovanni Agusta SpA (Italy)",
                    L"AGUSTAWESTLAND – AgustaWestland International Ltd (United Kingdom/Italy) > Leonar"
                    L"do", L"AI(R) – Aero International (Regional) (UK/France/Italy)",
                    L"AIAA – Atelier Industriel de l\'Aéronautique d\'Alger (Algeria)", L"AICSA – Aero Industrial Colombiana S.A. (Colombia)", L"AIDC – Aerospace Industrial Development Corporation (Republic of China-Taiwan); A"
                    L"ero Industry Development Center (Republic of China-Taiwan)",
                    L"AIEP – Aeronautical Industrial Engineering and Project Management Company Ltd (Ni"
                    L"geria)", L"AII – Aviation Industries of Iran (Iran)",
                    L"AIL – Aeronautics (India) Ltd (India)", L"AIR – Aircraft Investor Resources LLC (United States)", L"AIRBOT SYSTEMS - Drones (France)",
                    L"AIR & SPACE – Air & Space America Inc (United States); Air & Space Manufacturing "
                    L"Inc (United States)", L"AIR COMMAND – Air Command International Inc (United States)",
                    L"AIR PARTS – Air Parts (NZ) Ltd (New Zealand)", L"AIR PRODUCTS – Air Products Company Inc (United States)", L"AIR TRACTOR – Air Tractor Inc (United States)",
                    L"AIRBUS – Airbus SAS (France/Germany/UK/Spain); GIE Airbus Industrie (France/Germa"
                    L"ny/UK/Spain)", L"AIRCONCEPT – Airconcept Flugzeug und Gerätebau GmbH und Co KG (Germany)",
                    L"AIRCRAFT DESIGNS – Aircraft Designs Inc (United States)", L"AIRCRAFT HYDRO-FORMING – Aircraft Hydro-Forming Inc (United States)",
                    L"AIRCRAFT PARTS – Aircraft Parts and Development Corporation (United States)", L"AIRCRAFT SPRUCE – Aircraft Spruce & Specialty Company (United States)",
                    L"AIRCRAFT TECHNOLOGIES – Aircraft Technologies Inc (United States)", L"AIR-FOUGA – Air-Fouga (France)", L"AIRMASTER – Airmaster Inc (United States)",
                    L"AIRTECH (1) – Airtech Canada Aviation Services Ltd (Canada)", L"AIRTECH (2) – Aircraft Technology Industries (Indonesia/Spain)",
                    L"AISA – Aeronáutica Industrial S.A. (Spain)", L"AJEP – AJEP Developments (United Kingdom)", L"AJI – American Jet Industries Inc (United States)",
                    L"AKAFLIEG BERLIN – Akademische Fliegergruppe Berlin eV (Germany)", L"AKAFLIEG DARMSTADT – Akademische Fliegergruppe Darmstadt eV (Germany)",
                    L"AKAFLIEG KARLSRUHE – Akademische Fliegergruppe Karlsruhe eV (Germany)", L"AKAFLIEG MUNCHEN – Akademische Fliegergruppe München eV (Germany)",
                    L"AKRON – Akron Aircraft Company Inc (United States)", L"AKROTECH – Akrotech Aviation Inc (United States)", L"AKROTECH EUROPE – Akrotech Europe SA (France)",
                    L"ALANNE – Pentti Alanne (Finland)", L"ALENIA – Alenia (Italy); Alenia Aerospazio, Division of Leonardo-Finmeccanica (It"
                    L"aly)",
                    L"ALFA-M – Alfa-M Nauchno-Proizvodstvennoye Predpriyatie AOOT (Russia)", L"ALLISON – Allison Gas Turbine Division GMC (United States)",
                    L"ALON – Alon Inc (United States)", L"ALPAVIA – Alpavia SA (France); Société Alpavia (France)", L"ALPHA – Alpha (Poland)", L"ALPI – Alpi Aviation Srl (Italy)",
                    L"ALPLA – Alpla-Werke Alwin Lechner OHG (Austria)", L"ALTAIR COELHO – Altair Coelho (Brazil)", L"ALTURAIR – Alturair (United States)",
                    L"ALVAREZ – Joseph P.Alvarez (United States)", L"AMAX – Amax Engineering (Australia)", L"AMBROSINI – Societa Aeronautica Italiana Ing.A.Ambrosini & Companie (Italy)",
                    L"AMC – Aircraft Manufacturing Company (United States)", L"AMD – Aircraft Manufacturing and Development Company Inc (United States)",
                    L"AMEAGLE – AmEagle Corporation (United States)", L"AMERICAN – American Aviation Corporation (United States)", L"AMERICAN AFFORDABLE – American Affordable Aircraft (United States)",
                    L"AMERICAN AIRCRAFT – American Aircraft Inc (United States)", L"AMERICAN AUTOGYRO – American Autogyro Inc (United States)", L"AMERICAN CHAMPION – American Champion Aircraft Corporation (United States)",
                    L"AMERICAN EAGLE – American Eagle Aircraft Corporation (United States)"
            });
            this->comboBox21->Location = System::Drawing::Point(166, 122);
            this->comboBox21->Name = L"comboBox21";
            this->comboBox21->Size = System::Drawing::Size(282, 24);
            this->comboBox21->TabIndex = 3;
            this->comboBox21->Text = L"Select The Manufacturer";
            // 
            // comboBox24
            // 
            this->comboBox24->FormattingEnabled = true;
            this->comboBox24->Items->AddRange(gcnew cli::array< System::Object^  >(202) {
                L"A - E", L"A", L"Aegean Airlines", L"Aer Lingus",
                    L"Aeroflot", L"Aerolineas Argentinas", L"Aeromexico", L"Air Arabia", L"Air Astana", L"Air Austral", L"Air Baltic", L"Air Belgium",
                    L"Air Canada", L"Air Caraibes", L"Air China", L"Air Corsica", L"Air Dolomiti", L"Air Europa", L"Air France", L"Air India", L"Air India Express",
                    L"Air Macau", L"Air Malta", L"Air Mauritius", L"Air Namibia", L"Air New Zealand", L"Air North", L"Air Seoul", L"Air Serbia",
                    L"Air Tahiti Nui", L"Air Transat", L"Air Vanuatu", L"AirAsia", L"AirAsia X", L"Aircalin", L"Alaska Airlines", L"Alitalia", L"Allegiant",
                    L"American Airlines", L"ANA", L"Asiana", L"Austrian", L"Avianca", L"Azerbaijan Hava Yollary", L"Azores Airlines", L"Azul", L"B",
                    L"Bamboo Airways", L"Bangkok Airways", L"British Airways", L"Brussels Airlines", L"C", L"Caribbean Airlines", L"Cathay Dragon",
                    L"Cathay Pacific", L"Cayman Airways", L"CEBU Pacific Air", L"China Airlines", L"China Eastern", L"China Southern", L"Condor",
                    L"Copa Airlines", L"Croatia Airlines", L"Czech Airlines", L"D", L"Delta", L"E", L"easyJet", L"Edelweiss Air", L"Egyptair", L"EL AL",
                    L"Emirates", L"Ethiopian Airlines", L"Etihad", L"Eurowings", L"EVA Air", L"F - O", L"F", L"Fiji Airways", L"Finnair", L"flydubai",
                    L"FlyOne", L"French bee", L"Frontier", L"G", L"Garuda Indonesia", L"Gol", L"Gulf Air", L"H", L"Hainan Airlines", L"Hawaiian Airlines",
                    L"Helvetic Airways", L"HK Express", L"Hong Kong Airlines", L"I", L"Iberia", L"Icelandair", L"IndiGo Airlines", L"InterJet", L"J",
                    L"Japan Airlines", L"Jeju Air", L"Jet2", L"JetBlue", L"Jetstar", L"Jin Air", L"K", L"Kenya Airways", L"KLM", L"Korean Air", L"Kulula",
                    L"L", L"La Compagnie", L"LATAM", L"Lion Airlines", L"LOT Polish Airlines", L"Lufthansa", L"Luxair", L"M", L"Malaysia Airlines",
                    L"Mango", L"Middle East Airlines", L"N", L"Nok Air", L"Nordwind Airlines", L"Norwegian Air International", L"Norwegian Air Shuttle",
                    L"Norwegian Air Sweden", L"Norwegian Air UK", L"O", L"Oman Air", L"P - W", L"P", L"Pakistan International Airlines", L"Peach",
                    L"Pegasus Airlines", L"Philippine Airlines", L"Porter", L"Q", L"Qantas", L"Qatar Airways", L"R", L"Regional Express", L"Rossiya - Russian Airlines",
                    L"Royal Air Maroc", L"Royal Brunei", L"Royal Jordanian", L"RwandAir", L"Ryanair", L"S", L"S7 Airlines", L"SAS", L"Saudia", L"Scoot Airlines",
                    L"Shanghai Airlines", L"Silkair", L"Silver", L"Singapore Airlines", L"Skylanes", L"South African Airways", L"Southwest", L"SpiceJet",
                    L"Spirit", L"Spring Airlines", L"Spring Japan", L"SriLankan Airlines", L"Sun Country", L"Sunclass Airlines", L"Sunwing", L"SWISS",
                    L"Swoop", L"T", L"TAAG", L"TACA", L"TAP Portugal", L"THAI", L"tigerair Australia", L"Transavia Airlines", L"TUI UK", L"TUIfly",
                    L"Tunis Air", L"Turkish Airlines", L"U", L"Ukraine International", L"United", L"Ural Airlines", L"UTair Aviation", L"Uzbekistan Airways",
                    L"V", L"Vietnam Airlines", L"Virgin Atlantic", L"Virgin Australia", L"Vistara", L"Viva Aerobus", L"Volaris", L"Volotea", L"Vueling Airlines",
                    L"W", L"WestJet", L"Wizzair", L"X", L"Xiamen Airlines"
            });
            this->comboBox24->Location = System::Drawing::Point(166, 13);
            this->comboBox24->Name = L"comboBox24";
            this->comboBox24->Size = System::Drawing::Size(282, 24);
            this->comboBox24->TabIndex = 3;
            this->comboBox24->Text = L"Select The Airline";
            // 
            // comboBox22
            // 
            this->comboBox22->FormattingEnabled = true;
            this->comboBox22->Items->AddRange(gcnew cli::array< System::Object^  >(79) {
                L"ATR 42", L"ATR 72", L"Airbus A220", L"Airbus A300",
                    L"Airbus A310", L"Airbus A318", L"Airbus A319", L"Airbus A320", L"Airbus A321", L"Airbus A330", L"Airbus A340", L"Airbus A350",
                    L"Airbus A380", L"Antonov An-140", L"Antonov An-148", L"Antonov An-158", L"Antonov An-225", L"Beechcraft 200 Super King Air",
                    L"Beechcraft 1300", L"Beriev Be-200", L"British Aerospace BAe 146", L"Boeing 717", L"Boeing 757", L"Boeing 767", L"Boeing 777",
                    L"Boeing 787", L"Bombardier CRJ-100", L"Bombardier CRJ-200", L"Bombardier CRJ-700", L"Bombardier CRJ-900", L"Bombardier Dash 8",
                    L"CASA C-212 Aviocar", L"Cessna 208", L"Cessna 404", L"Comac C919 (project)", L"Convair CV5800", L"de Havilland Canada Dash 7",
                    L"De Havilland Canada Dash 8", L"Dornier 328", L"Embraer EMB 121 Xingu", L"Embraer EMB 120 Brasilia", L"Embraer EMB 820C", L"Embraer/FMA CBA 123 Vector",
                    L"Embraer ERJ 135", L"Embraer ERJ 140", L"Embraer ERJ 145", L"Embraer 170", L"Embraer 175", L"Embraer 190", L"Embraer 195", L"Fairchild Dornier 328JET",
                    L"Fokker 50", L"Fokker 70", L"Fokker 100", L"Irkut MS-21 (project)", L"Ilyushin Il-86", L"Ilyushin Il-96", L"Ilyushin Il-114",
                    L"Indonesian Aerospace N-219", L"Indonesian Aerospace N-245", L"Indonesian Aerospace N-270", L"IPTN N-250", L"IPTN N-2130", L"McDonnell-Douglas MD-11",
                    L"McDonnell Douglas MD-80", L"McDonnell Douglas MD-90", L"McDonnell-Douglas MD-95", L"Mitsubishi Regional Jet (project)", L"Neiva Carajá",
                    L"Piper Chieftain", L"Piper T-1020", L"Piper T-1040", L"Reims-Cessna F406 Caravan II", L"Short 330", L"Short 360", L"Sukhoi Superjet 100",
                    L"Tupolev Tu-204", L"Yakovlev Yak-42", L"Saab 2000"
            });
            this->comboBox22->Location = System::Drawing::Point(166, 70);
            this->comboBox22->Name = L"comboBox22";
            this->comboBox22->Size = System::Drawing::Size(282, 24);
            this->comboBox22->TabIndex = 3;
            this->comboBox22->Text = L"Select The Plane";
            // 
            // comboBox23
            // 
            this->comboBox23->FormattingEnabled = true;
            this->comboBox23->Items->AddRange(gcnew cli::array< System::Object^  >(50) {
                L"Aalborg\tDenmark\tAAL", L"Aalesund\tNorway\tAES",
                    L"Aarhus\tDenmark\tAAR", L"Abbotsford, BC\tCanada\tYXX", L"Abbotsford, BC \tCanada \tYXX", L"Aberdeen \tScotland\tABZ", L"Aberdeen, SD \tUSA \tABR",
                    L"Abidjan\tIvory Coast\tABJ", L"Abilene, TX \tUSA \tABI", L"Abu Dhabi\tUnited Arab Emirates\tAUH", L"Abuja\tNigeria\tABV", L"Acapulco\tMexico\tACA",
                    L"Accra\tGhana\tACC", L"Adana\tTurkey\tADA", L"Addis Ababa\tEthiopia\tADD", L"Adelaide, S.A.\tAustralia\tADL", L"Aden\tYemen\tADE",
                    L"Adiyaman\tTurkey\tADF", L"Agadir\tMorocco\tAGA", L"Agana\tGuam\tGUM", L"Aguadilla\tPuerto Rico\tBQN", L"Aguascalientes\tMexico\tAGU",
                    L"Ahe\tFrench Polynesia\tAHE", L"Ahmedabad\tIndia\tAMD", L"Ajaccio, Corsica\tFrance\tAJA", L"Akita\tJapan\tAXT", L"Akron, OH \tUSA \tCAK",
                    L"Alamosa, CO \tUSA \tALS", L"Albany, GA \tUSA \tABY", L"Albany, NY \tUSA \tALB", L"Albenga\tItaly\tALL", L"Albuquerque, NM \tUSA \tABQ",
                    L"Albury, N.S.W.\tAustralia\tABX", L"Alexandria\tEgypt\tALY", L"Alexandria\tEgypt\tHBE", L"Alexandria, LA \tUSA \tAEX", L"Alexandroupolis\tGreece\tAXD",
                    L"Alghero, Sardinia\tItaly\tAHO", L"Algiers\tAlgeria\tALG", L"Alicante\tSpain\tALC", L"Alice Springs, N.T.\tAustralia\tASP",
                    L"Alice Town, North Bimini Island\tBahamas\tNSB", L"Allentown, PA \tUSA \tABE", L"Alliance, NE \tUSA \tAIA", L"Almaty\tKazakhstan\tALA",
                    L"Almeria\tSpain\tLEI", L"Alor Setar\tMalaysia\tAOR", L"Alpena, MI \tUSA \tAPN", L"Alta\tNorway\tALF", L"Altenrhein\tSwitzerland\tACH"
            });
            this->comboBox23->Location = System::Drawing::Point(166, 226);
            this->comboBox23->Name = L"comboBox23";
            this->comboBox23->Size = System::Drawing::Size(282, 24);
            this->comboBox23->TabIndex = 3;
            this->comboBox23->Text = L"Choose Airport";
            // 
            // label31
            // 
            this->label31->AutoSize = true;
            this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label31->Location = System::Drawing::Point(4, 122);
            this->label31->Name = L"label31";
            this->label31->Size = System::Drawing::Size(152, 29);
            this->label31->TabIndex = 1;
            this->label31->Text = L"Manufacturer";
            // 
            // label32
            // 
            this->label32->AutoSize = true;
            this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label32->Location = System::Drawing::Point(3, 226);
            this->label32->Name = L"label32";
            this->label32->Size = System::Drawing::Size(50, 36);
            this->label32->TabIndex = 1;
            this->label32->Text = L"To";
            // 
            // tableLayoutPanel5
            // 
            this->tableLayoutPanel5->ColumnCount = 2;
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                50.41322F)));
            this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
                49.58678F)));
            this->tableLayoutPanel5->Location = System::Drawing::Point(477, 349);
            this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
            this->tableLayoutPanel5->RowCount = 2;
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
            this->tableLayoutPanel5->Size = System::Drawing::Size(242, 277);
            this->tableLayoutPanel5->TabIndex = 0;
            // 
            // tabPage2
            // 
            this->tabPage2->Location = System::Drawing::Point(4, 25);
            this->tabPage2->Name = L"tabPage2";
            this->tabPage2->Padding = System::Windows::Forms::Padding(3);
            this->tabPage2->Size = System::Drawing::Size(1333, 737);
            this->tabPage2->TabIndex = 1;
            this->tabPage2->Text = L"Database";
            this->tabPage2->UseVisualStyleBackColor = true;
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
            this->ClientSize = System::Drawing::Size(1924, 1040);
            this->Controls->Add(this->tabControl1);
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
            this->Text = L"MyForm";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
            this->tabControl1->ResumeLayout(false);
            this->tabPage1->ResumeLayout(false);
            this->panel8->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel7->ResumeLayout(false);
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
        private: System::Void Airlinesupload()
        {
            sqlconn->ConnectionString = "server="+server+";"+"username="+username+";" + "password="+password+";" + "database=" + database;


            sqlconn->Open();
            sqlcmd->Connection = sqlconn;
            sqlcmd->CommandText = "select* from AirlinesReservationSystem4db ";
            sqlRd = sqlcmd->ExecuteReader();
            sqlDt->Load(sqlRd);
            sqlRd->Close();
            sqlconn->Close();
            dataGridView1->DataSource = sqlDt;
        }




	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    Airlinesupload();
}
private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
