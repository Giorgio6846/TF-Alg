#pragma once

namespace TrabajoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Intrucciones
	/// </summary>
	public ref class Intrucciones : public System::Windows::Forms::Form
	{
	public:
		Intrucciones(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
			gr = this->CreateGraphics();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~Intrucciones()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
		Graphics^ gr;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Intrucciones
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 600);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Intrucciones";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Instrucciones";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Intrucciones::Intrucciones_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Intrucciones_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		Image^ Fondo = Image::FromFile("Recursos/Imagenes\\fondo_int.png");
		gr->DrawImage(Fondo, 0, 0, 900, 600);
	}
	};
}
