#pragma once

namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			findPorts();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
			this->textBoxRX->Enabled = false;
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^  _serialPort;
	protected:
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::TextBox^  textBoxID;
	private: System::Windows::Forms::TextBox^  textBoxCH;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxCMD;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBoxRX;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  buttonRST;
	private: System::ComponentModel::IContainer^  components;


	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->_serialPort = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCH = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxCMD = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBoxRX = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->buttonRST = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// _serialPort
			// 
			this->_serialPort->PortName = L"COM5";
			this->_serialPort->ReadTimeout = 500;
			this->_serialPort->WriteTimeout = 500;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(170, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Send";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(37, 54);
			this->textBoxID->MaxLength = 2;
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(100, 20);
			this->textBoxID->TabIndex = 3;
			this->textBoxID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBoxID_KeyPress);
			// 
			// textBoxCH
			// 
			this->textBoxCH->Location = System::Drawing::Point(37, 110);
			this->textBoxCH->MaxLength = 2;
			this->textBoxCH->Name = L"textBoxCH";
			this->textBoxCH->Size = System::Drawing::Size(100, 20);
			this->textBoxCH->TabIndex = 4;
			this->textBoxCH->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBoxCH_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Canal";
			// 
			// textBoxCMD
			// 
			this->textBoxCMD->Location = System::Drawing::Point(37, 168);
			this->textBoxCMD->MaxLength = 3;
			this->textBoxCMD->Name = L"textBoxCMD";
			this->textBoxCMD->Size = System::Drawing::Size(100, 20);
			this->textBoxCMD->TabIndex = 7;
			this->textBoxCMD->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBoxCMD_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(34, 152);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Comando";
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(152, 54);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 28);
			this->comboBox1->TabIndex = 10;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(277, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Abrir Porta";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBoxRX
			// 
			this->textBoxRX->Location = System::Drawing::Point(37, 229);
			this->textBoxRX->Name = L"textBoxRX";
			this->textBoxRX->Size = System::Drawing::Size(200, 20);
			this->textBoxRX->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 210);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(52, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Resposta";
			// 
			// buttonRST
			// 
			this->buttonRST->Location = System::Drawing::Point(152, 12);
			this->buttonRST->Name = L"buttonRST";
			this->buttonRST->Size = System::Drawing::Size(121, 23);
			this->buttonRST->TabIndex = 15;
			this->buttonRST->Text = L"Refresh/Close";
			this->buttonRST->UseVisualStyleBackColor = true;
			this->buttonRST->Click += gcnew System::EventHandler(this, &Form1::buttonRST_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 261);
			this->Controls->Add(this->buttonRST);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxRX);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxCMD);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxCH);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->ShowIcon = false;
			this->Text = L"Terminal de Configuração";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// find available ports
	private: void findPorts(void)
	{
		// get port names
		array<Object^>^ objectArray = SerialPort::GetPortNames();
		// add string array to combobox
		this->comboBox1->Items->AddRange(objectArray);

	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//EnvioTX->Clear();
		String ^ IdValue = textBoxID->Text;
		String ^ ChValue = textBoxCH->Text;
		String ^ CmdValue = textBoxCMD->Text;

		//EnvioTX->AppendText("G"+IdValue + ChValue + CmdValue +"g");

		// write to serial
		if (this->_serialPort->IsOpen)
		{
			//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
			this->_serialPort->Write("G" + IdValue + ChValue + CmdValue + "g");

			// Reset the text in the result label.
			this->textBoxRX->Text = String::Empty;

			// this will read manually
			try {
				this->textBoxRX->Text = this->_serialPort->ReadExisting();
			}
			catch (TimeoutException^) {
				this->textBoxRX->Text = "Timeout Exception";
			}


		}
		else
			this->textBoxRX->AppendText("Port Not Opened");
	}
	private: System::Void textBoxID_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') {
			if (e->KeyChar == 8) {
				e->Handled = false;
			}
			else {
				e->Handled = true;
			}
		}
	}
	private: System::Void textBoxCH_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') {
			if (e->KeyChar == 8) {
				e->Handled = false;
			}
			else {
				e->Handled = true;
			}
		}
	}
	private: System::Void textBoxCMD_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar < '0' || e->KeyChar > '9') {
			if (e->KeyChar == 8) {
				e->Handled = false;
			}
			else {
				e->Handled = true;
			}
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->comboBox1->Text == String::Empty)//|| this->comboBox2->Text == String::Empty)
			this->textBoxRX->Text = "Please Select Port Settings";
		else {
			try {
				// make sure port isn't open	
				if (!this->_serialPort->IsOpen) {
					this->_serialPort->PortName = this->comboBox1->Text;
					//this->textBox1->Text=this->comboBox1->Text;
					this->_serialPort->BaudRate = 19200;
					//this->textBoxRX->Text = "Enter Message Here";
					//open serial port 
					this->_serialPort->Open();

					// Disable open button
					this->button2->Enabled = false;

					// Disable comm box
					this->comboBox1->Enabled = false;
				}
				else
					this->textBoxRX->Text = "Port isn't openned";
			}
			catch (UnauthorizedAccessException^) {
				this->textBoxRX->Text = "UnauthorizedAccess";
			}
		}
	}
	private: System::Void buttonRST_Click(System::Object^  sender, System::EventArgs^  e) {

		//close serialPort
		this->_serialPort->Close();
		// Enable read button
		this->button2->Enabled = true;
		// Disable comm box
		this->comboBox1->Enabled = true;

		// get port names
		array<Object^>^ objectArray = SerialPort::GetPortNames();
		// add string array to combobox
		this->comboBox1->Items->Clear();
		this->comboBox1->Items->AddRange(objectArray);
	}
	};
}
