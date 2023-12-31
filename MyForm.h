#pragma once

namespace Laboratorna9Sytiuk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ actionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ addBtn;
	private: System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::Button^ loadBtn;
	private: System::Windows::Forms::Button^ updateBtn;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::ToolStripMenuItem^ доToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ видалитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оновитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ завантажитиToolStripMenuItem;























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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->actionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->loadBtn = (gcnew System::Windows::Forms::Button());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->addBtn = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->доToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видалитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оновитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завантажитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->actionsToolStripMenuItem,
					this->aboutProgramToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1261, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// actionsToolStripMenuItem
			// 
			this->actionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->доToolStripMenuItem,
					this->видалитиToolStripMenuItem, this->оновитиToolStripMenuItem, this->завантажитиToolStripMenuItem
			});
			this->actionsToolStripMenuItem->Name = L"actionsToolStripMenuItem";
			this->actionsToolStripMenuItem->Size = System::Drawing::Size(33, 20);
			this->actionsToolStripMenuItem->Text = L"Дії";
			// 
			// aboutProgramToolStripMenuItem
			// 
			this->aboutProgramToolStripMenuItem->Name = L"aboutProgramToolStripMenuItem";
			this->aboutProgramToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->aboutProgramToolStripMenuItem->Text = L"Про програму";
			this->aboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutProgramToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->exitToolStripMenuItem->Text = L"Вихід";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->deleteBtn);
			this->groupBox1->Controls->Add(this->loadBtn);
			this->groupBox1->Controls->Add(this->updateBtn);
			this->groupBox1->Controls->Add(this->addBtn);
			this->groupBox1->Location = System::Drawing::Point(1105, 61);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(135, 250);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Дії";
			// 
			// deleteBtn
			// 
			this->deleteBtn->Location = System::Drawing::Point(17, 80);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(104, 23);
			this->deleteBtn->TabIndex = 3;
			this->deleteBtn->Text = L"Видалити";
			this->deleteBtn->UseVisualStyleBackColor = true;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &MyForm::deleteBtn_Click);
			// 
			// loadBtn
			// 
			this->loadBtn->Location = System::Drawing::Point(17, 198);
			this->loadBtn->Name = L"loadBtn";
			this->loadBtn->Size = System::Drawing::Size(104, 23);
			this->loadBtn->TabIndex = 2;
			this->loadBtn->Text = L"Завантажити";
			this->loadBtn->UseVisualStyleBackColor = true;
			this->loadBtn->Click += gcnew System::EventHandler(this, &MyForm::loadBtn_Click);
			// 
			// updateBtn
			// 
			this->updateBtn->Location = System::Drawing::Point(17, 138);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(104, 23);
			this->updateBtn->TabIndex = 1;
			this->updateBtn->Text = L"Оновити";
			this->updateBtn->UseVisualStyleBackColor = true;
			this->updateBtn->Click += gcnew System::EventHandler(this, &MyForm::updateBtn_Click);
			// 
			// addBtn
			// 
			this->addBtn->Location = System::Drawing::Point(17, 29);
			this->addBtn->Name = L"addBtn";
			this->addBtn->Size = System::Drawing::Size(104, 23);
			this->addBtn->TabIndex = 0;
			this->addBtn->Text = L"Додати";
			this->addBtn->UseVisualStyleBackColor = true;
			this->addBtn->Click += gcnew System::EventHandler(this, &MyForm::addBtn_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(22, 61);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->Size = System::Drawing::Size(797, 250);
			this->dataGridView1->TabIndex = 2;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID замовлення";
			this->Column1->MinimumWidth = 8;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 70;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Email замовника";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 180;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Тип прибирання";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 180;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Тип сплати";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Адреса";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Вартість";
			this->Column6->Name = L"Column6";
			// 
			// доToolStripMenuItem
			// 
			this->доToolStripMenuItem->Name = L"доToolStripMenuItem";
			this->доToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->доToolStripMenuItem->Text = L"Додати";
			// 
			// видалитиToolStripMenuItem
			// 
			this->видалитиToolStripMenuItem->Name = L"видалитиToolStripMenuItem";
			this->видалитиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->видалитиToolStripMenuItem->Text = L"Видалити";
			// 
			// оновитиToolStripMenuItem
			// 
			this->оновитиToolStripMenuItem->Name = L"оновитиToolStripMenuItem";
			this->оновитиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->оновитиToolStripMenuItem->Text = L"Оновити";
			// 
			// завантажитиToolStripMenuItem
			// 
			this->завантажитиToolStripMenuItem->Name = L"завантажитиToolStripMenuItem";
			this->завантажитиToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->завантажитиToolStripMenuItem->Text = L"Завантажити";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1261, 346);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Лабораторна 9";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	// Oбробник для кнопки завантаження БД
	private: System::Void loadBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0; Data Source=CleaningDB.mdb";
		OleDbConnection ^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "SELECT * FROM [Orders]";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();
		if (dbReader->HasRows == false) {
			MessageBox::Show("Дані відсутні", "Помилка");
		}
		else {
			while (dbReader->Read())
				dataGridView1->Rows->Add(
					dbReader["ID"], 
					dbReader["Customer_Email"], 
					dbReader["Service_Type"], 
					dbReader["Payment_Type"], 
					dbReader["Address"], 
					dbReader["Price"]
				);
		}

		dbReader->Close();
		dbConnection->Close();
	}

	private: System::Void addBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
			return;
		}
		
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[5]->Value == nullptr) {
			MessageBox::Show("Не всі дані є", "Зверніть увагу");
			return;
		}
		
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ email = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
		String^ type = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
		String^ payment = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
		String^ address = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
		String^ price = dataGridView1->Rows[index]->Cells[5]->Value->ToString();
		

		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=CleaningDB.mdb";
		OleDbConnection ^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();

		String^ query = "INSERT INTO [Orders] (ID, Customer_Email, Service_Type, Payment_Type, Address, Price) VALUES (?, ?, ?, ?, ?, ?)";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		dbCommand->Parameters->Add("?", OleDbType::Integer)->Value = Int32::Parse(id);
		dbCommand->Parameters->Add("?", OleDbType::VarChar)->Value = email;
		dbCommand->Parameters->Add("?", OleDbType::VarChar)->Value = type;
		dbCommand->Parameters->Add("?", OleDbType::VarChar)->Value = payment;
		dbCommand->Parameters->Add("?", OleDbType::VarChar)->Value = address;
		dbCommand->Parameters->Add("?", OleDbType::Integer)->Value = Int32::Parse(price);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("Execution error", "Error");
		else
			MessageBox::Show("Row added", "OK");
		
		dbConnection->Close();
	}

	private: System::Void deleteBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
			return;
		}

		int index = dataGridView1->SelectedRows[0]->Index;

		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr) 
		{
			MessageBox::Show("Не всі дані є", "Зверніть увагу");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source = CleaningDB.mdb";
		OleDbConnection ^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "DELETE FROM [Orders] WHERE ID=" + id;
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("Помилка у виконанні", "Помилка");
		else {
			MessageBox::Show("Row deleted", "OK");
			dataGridView1->Rows->RemoveAt(index);
		}
		dbConnection->Close();
	}
private: System::Void updateBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
		return;
	}
	int index = dataGridView1->SelectedRows[0]->Index;
	if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
		dataGridView1->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не всі дані є", "Зверніть увагу");
		return;
	}
	String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ email = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ type = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ payment = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ address = dataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ price = dataGridView1->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=CleaningDB.mdb";
	OleDbConnection ^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();

	String^ query = "UPDATE [Orders] SET Customer_Email=?, Service_Type=?, Payment_Type=?, Address=?, Price=? WHERE ID=?";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

	dbCommand->Parameters->Add("?", OleDbType::VarChar)->Value = email; 
	dbCommand->Parameters->Add("?", OleDbType::VarChar)->Value = type;
	dbCommand->Parameters->Add("?", OleDbType::VarChar)->Value = payment;
	dbCommand->Parameters->Add("?", OleDbType::VarChar)->Value = address;
	dbCommand->Parameters->Add("?", OleDbType::Integer)->Value = Int32::Parse(price);
	dbCommand->Parameters->Add("?", OleDbType::Integer)->Value = Int32::Parse(id);

	if (dbCommand->ExecuteNonQuery() != 1)
		MessageBox::Show("Execution error", "Error");
	else
		MessageBox::Show("Row changed", "OK");
	dbConnection->Close();

}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void aboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ aboutMessage = "Laboratorna Robota #9\nAuthor: Oleh Sytiuk";
	MessageBox::Show(aboutMessage, "About program", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
};
}
