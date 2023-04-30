#pragma once
#include "MainForm.h"
#include "MenuForm.h"
namespace controller {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Sumário para AddForm
	/// </summary>
	/// 


	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbusuario;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtusuario;

	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ bttnregistrar;
	private: System::Windows::Forms::ComboBox^ comboBox1;



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
			this->lbusuario = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->bttnregistrar = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// lbusuario
			// 
			this->lbusuario->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lbusuario->AutoSize = true;
			this->lbusuario->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbusuario->Location = System::Drawing::Point(12, 163);
			this->lbusuario->Name = L"lbusuario";
			this->lbusuario->Size = System::Drawing::Size(31, 19);
			this->lbusuario->TabIndex = 5;
			this->lbusuario->Text = L"dia";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 94);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 19);
			this->label1->TabIndex = 6;
			this->label1->Text = L"telefone";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 28);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(49, 19);
			this->label2->TabIndex = 7;
			this->label2->Text = L"nome";
			this->label2->Click += gcnew System::EventHandler(this, &AddForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 19);
			this->label3->TabIndex = 8;
			this->label3->Text = L"email";
			// 
			// txtusuario
			// 
			this->txtusuario->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtusuario->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->txtusuario->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtusuario->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->txtusuario->Location = System::Drawing::Point(91, 251);
			this->txtusuario->MaxLength = 25;
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(280, 27);
			this->txtusuario->TabIndex = 9;
			this->txtusuario->TextChanged += gcnew System::EventHandler(this, &AddForm::txtusuario_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox2->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox2->Location = System::Drawing::Point(91, 91);
			this->textBox2->MaxLength = 25;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(280, 27);
			this->textBox2->TabIndex = 11;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &AddForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->textBox3->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->textBox3->Location = System::Drawing::Point(91, 25);
			this->textBox3->MaxLength = 25;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(280, 27);
			this->textBox3->TabIndex = 12;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &AddForm::textBox3_TextChanged);
			// 
			// bttnregistrar
			// 
			this->bttnregistrar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bttnregistrar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnregistrar->Location = System::Drawing::Point(246, 336);
			this->bttnregistrar->Name = L"bttnregistrar";
			this->bttnregistrar->Size = System::Drawing::Size(125, 27);
			this->bttnregistrar->TabIndex = 13;
			this->bttnregistrar->Text = L"adicionar";
			this->bttnregistrar->UseVisualStyleBackColor = true;
			this->bttnregistrar->Click += gcnew System::EventHandler(this, &AddForm::bttnregistrar_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"segunda", L"terça", L"quarta", L"quinta", L"sexta",
					L"sabado"
			});
			this->comboBox1->Location = System::Drawing::Point(91, 164);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(280, 21);
			this->comboBox1->TabIndex = 14;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &AddForm::comboBox1_SelectedIndexChanged);
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 476);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->bttnregistrar);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->txtusuario);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbusuario);
			this->Name = L"AddForm";
			this->Text = L"AddForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void bttnregistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ nome = "";
	String^ telefone = "";
	String^ dia = "";
	String^ email = "";
	nome = textBox3->Text;
	telefone = textBox2->Text;
	dia = comboBox1->Text;
	email = txtusuario-> Text;

	SqlConnection^ connection = gcnew SqlConnection("Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True");
	SqlCommand^ command = gcnew SqlCommand("INSERT INTO alunos (nome, telefone, dia, email) VALUES (@nome, @telefone, @dia, @email)", connection);
	command->Parameters->AddWithValue("@nome", nome);
	command->Parameters->AddWithValue("@telefone", telefone);
	command->Parameters->AddWithValue("@dia", dia);
	command->Parameters->AddWithValue("@email", email);
	try
	{
		connection->Open();
		int rowsInserted = command->ExecuteNonQuery();
		Console::WriteLine("{0} linhas inseridas", rowsInserted);
		MessageBox::Show("registrado");

	}
	catch (Exception^)
	{
		MessageBox::Show("Erro");

	}
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtusuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
