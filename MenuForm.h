#pragma once
#include "AddForm.h"
#include "MainForm.h"


namespace controller {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;

	public ref class MenuForm : public System::Windows::Forms::Form
	{
	public:
		MenuForm(void)
		{
		
			InitializeComponent();
		}

	protected:

		~MenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bttnsair;
	protected:
	private: System::Windows::Forms::Button^ bttnregistrar;
	private: System::Windows::Forms::Button^ bttnentrar;
	private: System::Windows::Forms::Label^ lbsenha;
	private: System::Windows::Forms::Label^ lbusuario;
	private: System::Windows::Forms::TextBox^ txtusuario;
	private: System::Windows::Forms::TextBox^ txtsenha;
	private: System::Windows::Forms::Button^ bttnlimpar;
	private: System::Windows::Forms::TextBox^ txtkey;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ Addbttn;
	private: System::Windows::Forms::Button^ btnVerificar;




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
			this->bttnsair = (gcnew System::Windows::Forms::Button());
			this->bttnregistrar = (gcnew System::Windows::Forms::Button());
			this->bttnentrar = (gcnew System::Windows::Forms::Button());
			this->lbsenha = (gcnew System::Windows::Forms::Label());
			this->lbusuario = (gcnew System::Windows::Forms::Label());
			this->txtusuario = (gcnew System::Windows::Forms::TextBox());
			this->txtsenha = (gcnew System::Windows::Forms::TextBox());
			this->bttnlimpar = (gcnew System::Windows::Forms::Button());
			this->txtkey = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->Addbttn = (gcnew System::Windows::Forms::Button());
			this->btnVerificar = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// bttnsair
			// 
			this->bttnsair->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bttnsair->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnsair->Location = System::Drawing::Point(383, 231);
			this->bttnsair->Name = L"bttnsair";
			this->bttnsair->Size = System::Drawing::Size(125, 30);
			this->bttnsair->TabIndex = 0;
			this->bttnsair->Text = L"sair";
			this->bttnsair->UseVisualStyleBackColor = true;
			this->bttnsair->Click += gcnew System::EventHandler(this, &MenuForm::bttnsair_Click);
			// 
			// bttnregistrar
			// 
			this->bttnregistrar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bttnregistrar->Enabled = false;
			this->bttnregistrar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnregistrar->Location = System::Drawing::Point(550, 371);
			this->bttnregistrar->Name = L"bttnregistrar";
			this->bttnregistrar->Size = System::Drawing::Size(178, 27);
			this->bttnregistrar->TabIndex = 1;
			this->bttnregistrar->Text = L"registrar";
			this->bttnregistrar->UseVisualStyleBackColor = true;
			this->bttnregistrar->Click += gcnew System::EventHandler(this, &MenuForm::bttnregistrar_Click);
			// 
			// bttnentrar
			// 
			this->bttnentrar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bttnentrar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnentrar->Location = System::Drawing::Point(75, 231);
			this->bttnentrar->Name = L"bttnentrar";
			this->bttnentrar->Size = System::Drawing::Size(125, 30);
			this->bttnentrar->TabIndex = 2;
			this->bttnentrar->Text = L"entrar";
			this->bttnentrar->UseVisualStyleBackColor = true;
			this->bttnentrar->Click += gcnew System::EventHandler(this, &MenuForm::bttnentrar_Click);
			// 
			// lbsenha
			// 
			this->lbsenha->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lbsenha->AutoSize = true;
			this->lbsenha->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbsenha->Location = System::Drawing::Point(12, 191);
			this->lbsenha->Name = L"lbsenha";
			this->lbsenha->Size = System::Drawing::Size(52, 19);
			this->lbsenha->TabIndex = 3;
			this->lbsenha->Text = L"senha";
			// 
			// lbusuario
			// 
			this->lbusuario->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->lbusuario->AutoSize = true;
			this->lbusuario->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbusuario->Location = System::Drawing::Point(12, 92);
			this->lbusuario->Name = L"lbusuario";
			this->lbusuario->Size = System::Drawing::Size(62, 19);
			this->lbusuario->TabIndex = 4;
			this->lbusuario->Text = L"usuario";
			this->lbusuario->Click += gcnew System::EventHandler(this, &MenuForm::lbusuario_Click);
			// 
			// txtusuario
			// 
			this->txtusuario->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtusuario->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->txtusuario->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtusuario->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->txtusuario->Location = System::Drawing::Point(80, 89);
			this->txtusuario->MaxLength = 25;
			this->txtusuario->Name = L"txtusuario";
			this->txtusuario->Size = System::Drawing::Size(280, 27);
			this->txtusuario->TabIndex = 5;
			this->txtusuario->TextChanged += gcnew System::EventHandler(this, &MenuForm::txtusuario_TextChanged);
			// 
			// txtsenha
			// 
			this->txtsenha->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->txtsenha->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtsenha->Location = System::Drawing::Point(75, 188);
			this->txtsenha->MaxLength = 20;
			this->txtsenha->Name = L"txtsenha";
			this->txtsenha->Size = System::Drawing::Size(285, 27);
			this->txtsenha->TabIndex = 6;
			this->txtsenha->UseSystemPasswordChar = true;
			this->txtsenha->TextChanged += gcnew System::EventHandler(this, &MenuForm::txtsenha_TextChanged);
			// 
			// bttnlimpar
			// 
			this->bttnlimpar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->bttnlimpar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bttnlimpar->Location = System::Drawing::Point(383, 188);
			this->bttnlimpar->Name = L"bttnlimpar";
			this->bttnlimpar->Size = System::Drawing::Size(125, 30);
			this->bttnlimpar->TabIndex = 7;
			this->bttnlimpar->Text = L"limpar";
			this->bttnlimpar->UseVisualStyleBackColor = true;
			this->bttnlimpar->Click += gcnew System::EventHandler(this, &MenuForm::bttnlimpar_Click);
			// 
			// txtkey
			// 
			this->txtkey->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->txtkey->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtkey->Location = System::Drawing::Point(734, 371);
			this->txtkey->Name = L"txtkey";
			this->txtkey->Size = System::Drawing::Size(211, 27);
			this->txtkey->TabIndex = 8;
			this->txtkey->UseSystemPasswordChar = true;
			this->txtkey->TextChanged += gcnew System::EventHandler(this, &MenuForm::txtkey_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(734, 338);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(211, 27);
			this->textBox1->TabIndex = 14;
			this->textBox1->UseSystemPasswordChar = true;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MenuForm::textBox1_TextChanged);
			// 
			// Addbttn
			// 
			this->Addbttn->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Addbttn->Enabled = false;
			this->Addbttn->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Addbttn->Location = System::Drawing::Point(550, 337);
			this->Addbttn->Name = L"Addbttn";
			this->Addbttn->Size = System::Drawing::Size(178, 27);
			this->Addbttn->TabIndex = 15;
			this->Addbttn->Text = L"Adicionar";
			this->Addbttn->UseVisualStyleBackColor = true;
			this->Addbttn->Click += gcnew System::EventHandler(this, &MenuForm::Addbttn_Click);
			// 
			// btnVerificar
			// 
			this->btnVerificar->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->btnVerificar->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVerificar->Location = System::Drawing::Point(647, 180);
			this->btnVerificar->Name = L"btnVerificar";
			this->btnVerificar->Size = System::Drawing::Size(125, 30);
			this->btnVerificar->TabIndex = 16;
			this->btnVerificar->Text = L"verificar";
			this->btnVerificar->UseVisualStyleBackColor = true;
			this->btnVerificar->Click += gcnew System::EventHandler(this, &MenuForm::btnVerificar_Click);
			// 
			// MenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(957, 410);
			this->Controls->Add(this->btnVerificar);
			this->Controls->Add(this->Addbttn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->txtkey);
			this->Controls->Add(this->bttnlimpar);
			this->Controls->Add(this->txtsenha);
			this->Controls->Add(this->txtusuario);
			this->Controls->Add(this->lbusuario);
			this->Controls->Add(this->lbsenha);
			this->Controls->Add(this->bttnentrar);
			this->Controls->Add(this->bttnregistrar);
			this->Controls->Add(this->bttnsair);
			this->Name = L"MenuForm";
			this->ShowIcon = false;
			this->Text = L"controller";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bttnregistrar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ usuario = "";
		String^ senha = "";
		usuario = txtusuario->Text;
		senha = txtsenha->Text;

		String^ connectionString = "Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True";
		SqlConnection^ connection = gcnew SqlConnection(connectionString);
		
		SqlCommand^ command = gcnew SqlCommand("INSERT INTO accounts (usuario, senha) VALUES (@usuario, @senha)", connection);

		// Define os parâmetros
		command->Parameters->AddWithValue("@usuario", usuario);
		command->Parameters->AddWithValue("@senha", senha);
		

		try {
			connection->Open();
			int rowsInserted = command->ExecuteNonQuery();
			Console::WriteLine("{0} linhas inseridas", rowsInserted);
			MessageBox::Show("registrado");
		}
		catch (SqlException^ e) {
			Console::WriteLine("Erro: {0}", e->Message);
		}
		finally {
			connection->Close();
		}
		
		

	}
private: System::Void bttnsair_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
private: System::Void bttnlimpar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	limpar();
}
private: System::Void bttnentrar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ usuario = "";
	String^ senha = "";
	usuario = txtusuario->Text;
	senha = txtsenha->Text;
	try
	{
		
		
		String^ stringconnection = "Data Source=DESKTOP-7PDBUGU\\SQLEXPRESS;Initial Catalog=SISTEMAADDER;Integrated Security=True";
		String^ sql = "SELECT usuario, senha FROM accounts where usuario=@usuario and senha=@senha";
		SqlConnection connection(stringconnection);
		SqlCommand cmd(sql, % connection);
		connection.Open();
		cmd.Parameters->AddWithValue("@usuario", usuario);
		cmd.Parameters->AddWithValue("@senha", senha);
		SqlDataReader^ rd = cmd.ExecuteReader();

		if (rd->Read()) {
			MessageBox::Show("Conectado");
			limpar();
			MainForm^ form2 = gcnew MainForm(); // substitua "MenuForm" pelo nome do seu formulário
			form2->Show();;
		}
		else 
		{
			MessageBox::Show("Erro(usuario ou senha incorretos)");
		}

	}
	catch (Exception^ e)
	{
		MessageBox::Show("Erro" + e);
	}
}
	private: void limpar()
	{
		txtsenha->Text = "";
		txtusuario->Text = "";
	}
	public: void Vconnection() 
	{
		
	}
private: System::Void txtkey_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ senhaCorreta = "123";
	if (txtkey->Text == senhaCorreta) {
		bttnregistrar->Enabled = true;
	}
	else {
		bttnregistrar->Enabled = false;
	}
}
private: System::Void txtusuario_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbusuario_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtsenha_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ senhaCorreta = "123";
	if (textBox1->Text == senhaCorreta) {
		Addbttn->Enabled = true;
	}
	else {
		Addbttn->Enabled = false;
	}
}

private: System::Void Addbttn_Click(System::Object^ sender, System::EventArgs^ e) {
	AddForm^ addform = gcnew AddForm();
	addform->Show();
}
private: System::Void btnVerificar_Click(System::Object^ sender, System::EventArgs^ e) {



}
};
}
