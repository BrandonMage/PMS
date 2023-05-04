//---------------------------------------------------------------------------

#ifndef LoginFormH
#define LoginFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.ComboEdit.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Types.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TUserLoginForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *UsernameLogin;
	TLabel *Label1;
	TEdit *PasswordLogin;
	TLabel *Label2;
	TButton *GoToRegistrationButton;
	TButton *Button1;
	void __fastcall GoToRegistrationButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TUserLoginForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TUserLoginForm *UserLoginForm;
//---------------------------------------------------------------------------
#endif
