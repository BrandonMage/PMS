//---------------------------------------------------------------------------

#ifndef RegistrationFormH
#define RegistrationFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.ListBox.hpp>
//---------------------------------------------------------------------------
class TUserRegistrationForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *AgeReg;
	TLabel *Label2;
	TEdit *UsernameReg;
	TLabel *Label3;
	TEdit *PasswordReg;
	TLabel *Label4;
	TButton *RegistrationButton;
	TEdit *Edit1;
	TLabel *Label5;
	TComboBox *ComboBox1;
	TListBoxItem *ListBoxItem1;
	TListBoxItem *ListBoxItem2;
	TListBoxItem *ListBoxItem3;
	TListBoxItem *ListBoxItem4;
private:	// User declarations
public:		// User declarations
	__fastcall TUserRegistrationForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUserRegistrationForm *UserRegistrationForm;
//---------------------------------------------------------------------------
#endif
