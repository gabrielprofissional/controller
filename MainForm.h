#pragma once
#include "MenuForm.h"
#include "AddForm.h"
namespace controller {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form

	{
	public:
		MainForm(void) 
		{
			InitializeComponent();
			


			
		}
	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bttnsair;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ btnSalvar;
	private: System::Windows::Forms::Button^ faltabttn;











	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->bttnsair = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->btnSalvar = (gcnew System::Windows::Forms::Button());
			this->faltabttn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// bttnsair
			// 
			this->bttnsair->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->bttnsair->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->bttnsair->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->bttnsair->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->bttnsair->FlatAppearance->BorderSize = 0;
			this->bttnsair->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->bttnsair->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bttnsair->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnsair->ForeColor = System::Drawing::SystemColors::ControlText;
			this->bttnsair->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->bttnsair->Location = System::Drawing::Point(1165, 528);
			this->bttnsair->Name = L"bttnsair";
			this->bttnsair->Size = System::Drawing::Size(178, 27);
			this->bttnsair->TabIndex = 1;
			this->bttnsair->Text = L"sair";
			this->bttnsair->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->bttnsair->UseMnemonic = false;
			this->bttnsair->UseVisualStyleBackColor = false;
			this->bttnsair->Click += gcnew System::EventHandler(this, &MainForm::bttnsair_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->dataGridView1->ClipboardCopyMode = System::Windows::Forms::DataGridViewClipboardCopyMode::Disable;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Roboto", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeight = 30;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->GridColor = System::Drawing::Color::DeepSkyBlue;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::White;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1134, 543);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->TabStop = false;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick_1);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->Location = System::Drawing::Point(1165, 495);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 27);
			this->button1->TabIndex = 4;
			this->button1->Text = L"ativos";
			this->button1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button1->UseMnemonic = false;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->Location = System::Drawing::Point(1165, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(178, 27);
			this->button2->TabIndex = 5;
			this->button2->Text = L"segunda-feira";
			this->button2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button2->UseMnemonic = false;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->Location = System::Drawing::Point(1165, 45);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(178, 27);
			this->button3->TabIndex = 6;
			this->button3->Text = L"terça-feira";
			this->button3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button3->UseMnemonic = false;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->Location = System::Drawing::Point(1165, 78);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(178, 27);
			this->button4->TabIndex = 7;
			this->button4->Text = L"quarta-feira";
			this->button4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button4->UseMnemonic = false;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button5->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->Location = System::Drawing::Point(1165, 111);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(178, 27);
			this->button5->TabIndex = 8;
			this->button5->Text = L"quinta-feira";
			this->button5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button5->UseMnemonic = false;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button6->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->Location = System::Drawing::Point(1165, 144);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(178, 27);
			this->button6->TabIndex = 9;
			this->button6->Text = L"sexta-feira";
			this->button6->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button6->UseMnemonic = false;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button7->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button7->Location = System::Drawing::Point(1165, 177);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(178, 27);
			this->button7->TabIndex = 10;
			this->button7->Text = L"sabado-feira";
			this->button7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button7->UseMnemonic = false;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MainForm::button7_Click);
			// 
			// btnSalvar
			// 
			this->btnSalvar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnSalvar->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->btnSalvar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnSalvar->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->btnSalvar->FlatAppearance->BorderSize = 0;
			this->btnSalvar->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->btnSalvar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalvar->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalvar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnSalvar->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnSalvar->Location = System::Drawing::Point(1165, 231);
			this->btnSalvar->Name = L"btnSalvar";
			this->btnSalvar->Size = System::Drawing::Size(178, 27);
			this->btnSalvar->TabIndex = 11;
			this->btnSalvar->Text = L"presente";
			this->btnSalvar->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnSalvar->UseMnemonic = false;
			this->btnSalvar->UseVisualStyleBackColor = false;
			this->btnSalvar->Click += gcnew System::EventHandler(this, &MainForm::btnSalvar_Click);
			// 
			// faltabttn
			// 
			this->faltabttn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->faltabttn->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->faltabttn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->faltabttn->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->faltabttn->FlatAppearance->BorderSize = 0;
			this->faltabttn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::LightBlue;
			this->faltabttn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->faltabttn->Font = (gcnew System::Drawing::Font(L"Roboto", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->faltabttn->ForeColor = System::Drawing::SystemColors::ControlText;
			this->faltabttn->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->faltabttn->Location = System::Drawing::Point(1165, 264);
			this->faltabttn->Name = L"faltabttn";
			this->faltabttn->Size = System::Drawing::Size(178, 27);
			this->faltabttn->TabIndex = 12;
			this->faltabttn->Text = L"falta";
			this->faltabttn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->faltabttn->UseMnemonic = false;
			this->faltabttn->UseVisualStyleBackColor = false;
			this->faltabttn->Click += gcnew System::EventHandler(this, &MainForm::faltabttn_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->ClientSize = System::Drawing::Size(1364, 571);
			this->Controls->Add(this->faltabttn);
			this->Controls->Add(this->btnSalvar);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->bttnsair);
			this->Name = L"MainForm";
			this->ShowIcon = false;
			this->Text = L"controller";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void bttnsair_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		

	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
	
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Estabelecer uma conexão com o banco de dados SQL Server
		
		SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True");
		try {
			connection->Open();

			// Executar a consulta SELECT * FROM alunos;
			SqlCommand^ command = gcnew SqlCommand("SELECT * FROM alunos", connection);
			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
			DataTable^ dataTable = gcnew DataTable();
			dataAdapter->Fill(dataTable);

			// Preencher a DataGridView com os resultados da consulta
			dataGridView1->DataSource = dataTable;
			dataGridView1->Columns["id"]->Visible = false;
			

	

			
		
		}
		catch (Exception^ ex) {
			// A consulta falhou, exibir uma mensagem de erro
			MessageBox::Show(ex->Message, "Erro ao executar a consulta", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			// Fechar a conexão com o banco de dados
			connection->Close();
		}
	}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	dataGridView1->Columns["id"]->Visible = false;

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True");
	try {
		connection->Open();

		// Executar a consulta SELECT * FROM alunos;
		SqlCommand^ command = gcnew SqlCommand("SELECT * FROM alunos WHERE dia = 'segunda'", connection);
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();
		dataAdapter->Fill(dataTable);

		// Preencher a DataGridView com os resultados da consulta
		dataGridView1->DataSource = dataTable;
		dataGridView1->Columns["id"]->Visible = false;






	}
	catch (Exception^ ex) {
		// A consulta falhou, exibir uma mensagem de erro
		MessageBox::Show(ex->Message, "Erro ao executar a consulta", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Fechar a conexão com o banco de dados
		connection->Close();
	}

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True");
	try {
		connection->Open();

		// Executar a consulta SELECT * FROM alunos;
		SqlCommand^ command = gcnew SqlCommand("SELECT * FROM alunos WHERE dia = 'terça'", connection);
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();
		dataAdapter->Fill(dataTable);

		// Preencher a DataGridView com os resultados da consulta
		dataGridView1->DataSource = dataTable;
		dataGridView1->Columns["id"]->Visible = false;






	}
	catch (Exception^ ex) {
		// A consulta falhou, exibir uma mensagem de erro
		MessageBox::Show(ex->Message, "Erro ao executar a consulta", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Fechar a conexão com o banco de dados
		connection->Close();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True");
	try {
		connection->Open();

		// Executar a consulta SELECT * FROM alunos;
		SqlCommand^ command = gcnew SqlCommand("SELECT * FROM alunos WHERE dia = 'quarta'", connection);
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();
		dataAdapter->Fill(dataTable);

		// Preencher a DataGridView com os resultados da consulta
		dataGridView1->DataSource = dataTable;
		dataGridView1->Columns["id"]->Visible = false;






	}
	catch (Exception^ ex) {
		// A consulta falhou, exibir uma mensagem de erro
		MessageBox::Show(ex->Message, "Erro ao executar a consulta", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Fechar a conexão com o banco de dados
		connection->Close();
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True");
	try {
		connection->Open();

		// Executar a consulta SELECT * FROM alunos;
		SqlCommand^ command = gcnew SqlCommand("SELECT * FROM alunos WHERE dia = 'quinta'", connection);
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();
		dataAdapter->Fill(dataTable);

		// Preencher a DataGridView com os resultados da consulta
		dataGridView1->DataSource = dataTable;
		dataGridView1->Columns["id"]->Visible = false;






	}
	catch (Exception^ ex) {
		// A consulta falhou, exibir uma mensagem de erro
		MessageBox::Show(ex->Message, "Erro ao executar a consulta", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Fechar a conexão com o banco de dados
		connection->Close();
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True");
	try {
		connection->Open();

		// Executar a consulta SELECT * FROM alunos;
		SqlCommand^ command = gcnew SqlCommand("SELECT * FROM alunos WHERE dia = 'sexta'", connection);
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();
		dataAdapter->Fill(dataTable);

		// Preencher a DataGridView com os resultados da consulta
		dataGridView1->DataSource = dataTable;
		dataGridView1->Columns["id"]->Visible = false;






	}
	catch (Exception^ ex) {
		// A consulta falhou, exibir uma mensagem de erro
		MessageBox::Show(ex->Message, "Erro ao executar a consulta", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Fechar a conexão com o banco de dados
		connection->Close();
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True");
	try {
		connection->Open();

		// Executar a consulta SELECT * FROM alunos;
		SqlCommand^ command = gcnew SqlCommand("SELECT * FROM alunos WHERE dia = 'sabado'", connection);
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(command);
		DataTable^ dataTable = gcnew DataTable();
		dataAdapter->Fill(dataTable);

		// Preencher a DataGridView com os resultados da consulta
		dataGridView1->DataSource = dataTable;
		dataGridView1->Columns["id"]->Visible = false;
	}
	catch (Exception^ ex) {
		// A consulta falhou, exibir uma mensagem de erro
		MessageBox::Show(ex->Message, "Erro ao executar a consulta", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		// Fechar a conexão com o banco de dados
		connection->Close();
	}
}
private: System::Void btnSalvar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Obtém o índice da linha selecionada
	int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
	// Obtém a linha selecionada
	DataGridViewRow^ selectedRow = dataGridView1->Rows[rowIndex];
	// Define a cor de fundo da linha selecionada
	selectedRow->DefaultCellStyle->BackColor = Color::GreenYellow;
	// Define a cor do texto da linha selecionada
	selectedRow->DefaultCellStyle->ForeColor = Color::Black;
	// Desmarca a seleção para que a cor seja atualizada
	dataGridView1->ClearSelection();
}
private: System::Void faltabttn_Click(System::Object^ sender, System::EventArgs^ e) {
	// Obtém o índice da linha selecionada
	int rowIndex = dataGridView1->SelectedCells[0]->RowIndex;
	// Obtém a linha selecionada
	DataGridViewRow^ selectedRow = dataGridView1->Rows[rowIndex];
	// Define a cor de fundo da linha selecionada
	selectedRow->DefaultCellStyle->BackColor = Color::MediumVioletRed;
	// Define a cor do texto da linha selecionada
	selectedRow->DefaultCellStyle->ForeColor = Color::Black;
	// Desmarca a seleção para que a cor seja atualizada
	dataGridView1->ClearSelection();
}
};
}
