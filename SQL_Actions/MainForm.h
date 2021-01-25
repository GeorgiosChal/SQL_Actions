#pragma once
#include "sqlMyConn.h";
#include<string>
//#include <msclr\marshal_cppstd.h>
namespace SQLActions {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			
		}
		sqlConn^ mSql;
	private: System::Windows::Forms::ListBox^ List_Tables;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btn_Select;
	private: System::Windows::Forms::Button^ btn_Insert;
	private: System::Windows::Forms::Button^ btn_Update;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btn_Refresh;
	private: System::Windows::Forms::Button^ btn_Delete;
	private: System::Windows::Forms::DataGridView^ dataG_Results;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btn_Connect;
	private: System::Windows::Forms::TextBox^ txtBox_Password;
	private: System::Windows::Forms::TextBox^ txtBox_Username;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbl_ConnStatus;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btn_Logout;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Logout = (gcnew System::Windows::Forms::Button());
			this->lbl_ConnStatus = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btn_Connect = (gcnew System::Windows::Forms::Button());
			this->txtBox_Password = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_Username = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->List_Tables = (gcnew System::Windows::Forms::ListBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_Select = (gcnew System::Windows::Forms::Button());
			this->dataG_Results = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Insert = (gcnew System::Windows::Forms::Button());
			this->btn_Update = (gcnew System::Windows::Forms::Button());
			this->btn_Delete = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btn_Refresh = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataG_Results))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn_Logout);
			this->groupBox1->Controls->Add(this->lbl_ConnStatus);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->btn_Connect);
			this->groupBox1->Controls->Add(this->txtBox_Password);
			this->groupBox1->Controls->Add(this->txtBox_Username);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			resources->ApplyResources(this->groupBox1, L"groupBox1");
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->TabStop = false;
			// 
			// btn_Logout
			// 
			resources->ApplyResources(this->btn_Logout, L"btn_Logout");
			this->btn_Logout->Name = L"btn_Logout";
			this->btn_Logout->UseVisualStyleBackColor = true;
			this->btn_Logout->Click += gcnew System::EventHandler(this, &MainForm::btn_Logout_Click);
			// 
			// lbl_ConnStatus
			// 
			resources->ApplyResources(this->lbl_ConnStatus, L"lbl_ConnStatus");
			this->lbl_ConnStatus->Name = L"lbl_ConnStatus";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			// 
			// btn_Connect
			// 
			resources->ApplyResources(this->btn_Connect, L"btn_Connect");
			this->btn_Connect->Name = L"btn_Connect";
			this->btn_Connect->UseVisualStyleBackColor = true;
			this->btn_Connect->Click += gcnew System::EventHandler(this, &MainForm::btn_Connect_Click);
			// 
			// txtBox_Password
			// 
			resources->ApplyResources(this->txtBox_Password, L"txtBox_Password");
			this->txtBox_Password->Name = L"txtBox_Password";
			// 
			// txtBox_Username
			// 
			resources->ApplyResources(this->txtBox_Username, L"txtBox_Username");
			this->txtBox_Username->Name = L"txtBox_Username";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->Name = L"label1";
			// 
			// List_Tables
			// 
			resources->ApplyResources(this->List_Tables, L"List_Tables");
			this->List_Tables->FormattingEnabled = true;
			this->List_Tables->Name = L"List_Tables";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// btn_Select
			// 
			resources->ApplyResources(this->btn_Select, L"btn_Select");
			this->btn_Select->Name = L"btn_Select";
			this->btn_Select->UseVisualStyleBackColor = true;
			this->btn_Select->Click += gcnew System::EventHandler(this, &MainForm::btn_Select_Click);
			// 
			// dataG_Results
			// 
			this->dataG_Results->AllowUserToAddRows = false;
			this->dataG_Results->AllowUserToDeleteRows = false;
			resources->ApplyResources(this->dataG_Results, L"dataG_Results");
			this->dataG_Results->Name = L"dataG_Results";
			this->dataG_Results->ReadOnly = true;
			// 
			// btn_Insert
			// 
			resources->ApplyResources(this->btn_Insert, L"btn_Insert");
			this->btn_Insert->Name = L"btn_Insert";
			this->btn_Insert->UseVisualStyleBackColor = true;
			this->btn_Insert->Click += gcnew System::EventHandler(this, &MainForm::btn_Insert_Click);
			// 
			// btn_Update
			// 
			resources->ApplyResources(this->btn_Update, L"btn_Update");
			this->btn_Update->Name = L"btn_Update";
			this->btn_Update->UseVisualStyleBackColor = true;
			// 
			// btn_Delete
			// 
			resources->ApplyResources(this->btn_Delete, L"btn_Delete");
			this->btn_Delete->Name = L"btn_Delete";
			this->btn_Delete->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btn_Refresh);
			this->groupBox2->Controls->Add(this->dataGridView1);
			resources->ApplyResources(this->groupBox2, L"groupBox2");
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			resources->ApplyResources(this->dataGridView1, L"dataGridView1");
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			// 
			// btn_Refresh
			// 
			resources->ApplyResources(this->btn_Refresh, L"btn_Refresh");
			this->btn_Refresh->Name = L"btn_Refresh";
			this->btn_Refresh->UseVisualStyleBackColor = true;
			this->btn_Refresh->Click += gcnew System::EventHandler(this, &MainForm::btn_Refresh_Click);
			// 
			// MainForm
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->btn_Delete);
			this->Controls->Add(this->btn_Update);
			this->Controls->Add(this->btn_Insert);
			this->Controls->Add(this->dataG_Results);
			this->Controls->Add(this->btn_Select);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->List_Tables);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MainForm::MainForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataG_Results))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		/*std::string Marshaling(String^ String) {
			return msclr::interop::marshal_as<std::string>(String);
		}*/

		void UpdateFormState() {
			btn_Select->Enabled = List_Tables->Items->Count > 0;
			List_Tables->Enabled = List_Tables->Items->Count > 0;
		}

	private: System::Void btn_Connect_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(txtBox_Username->Text) || String::IsNullOrEmpty(txtBox_Password->Text)) {
			String^ Message = "Username or password should not be empty";
			String^ Caption = "Debug message";
			if (MessageBox::Show(Message, Caption, MessageBoxButtons::OK, MessageBoxIcon::Information) == System::Windows::Forms::DialogResult::OK) {

			}
		}
		else {
			mSql = gcnew sqlConn(txtBox_Username->Text, txtBox_Password->Text);
			mSql->setCondb(mSql->Connection());
			MySqlCommand^ query = gcnew MySqlCommand("show tables from world",mSql->getConnection());
			MySqlDataReader^ reader;
			try {
				mSql->getConnection()->Open();
				lbl_ConnStatus->Text = "Connected As:" + mSql->getUsername();
				reader = query->ExecuteReader();
				while (reader->Read()) {
					List_Tables->Items->Add(reader->GetString(0));
					//MessageBox::Show(reader->GetString(0));
				}
				//na elenxw an o h lista einai adiea.
				List_Tables->SelectedIndex = 0;
				UpdateFormState();
				mSql->getConnection()->Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message,"SLQ Error!",MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void btn_Select_Click(System::Object^ sender, System::EventArgs^ e) {
	//get Selected table
	int index = List_Tables->SelectedIndex;
	String^ table = List_Tables->Items[index]->ToString();
	//get data from database.
	MySqlDataAdapter^ SDA = gcnew MySqlDataAdapter;
	//bind data to datagridview
	DataTable^ dbDataSet = gcnew DataTable;
	BindingSource^ bSource = gcnew BindingSource;
	try {
		mSql->getConnection()->Open();
		MySqlCommand^ query = gcnew MySqlCommand("select * from world." + table, mSql->getConnection());
		SDA->SelectCommand = query;
		SDA->Fill(dbDataSet);
		bSource->DataSource = dbDataSet;
		dataG_Results->DataSource = bSource;
		SDA->Update(dbDataSet);
		mSql->getConnection()->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message,"There was an error",MessageBoxButtons::OK,MessageBoxIcon::Error);
	}
}
private: System::Void btn_Logout_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (mSql->getConnection()) {
		mSql->getConnection()->Close();
		delete mSql;
		lbl_ConnStatus->Text = "Not Connected";
		List_Tables->Items->Clear();
		dataG_Results->DataSource = NULL;
		UpdateFormState();
	}
}
private: System::Void MainForm_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e) {
	if (mSql->getConnection()) {
		mSql->getConnection()->Close();
		delete mSql;
	}
	
}
private: System::Void btn_Insert_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_Refresh_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}


