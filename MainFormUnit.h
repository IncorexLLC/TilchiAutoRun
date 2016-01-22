//$$---- Form HDR ----
//---------------------------------------------------------------------------
#ifndef MainFormUnitH
#define MainFormUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "RzLabel.hpp"
#include <ExtCtrls.hpp>
#include <jpeg.hpp>
#include "RzEdit.hpp"
#include "RzBorder.hpp"
#include "RzBckgnd.hpp"
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TRzLabel *ExitLabel;
	TRzLabel *BrowseLabel;
	TRzLabel *WebLabel;
	TImage *Image1;
	TRzMemo *Memo;
	TImage *IncorexImage;
	TRzSeparator *RzSeparator1;
	TImage *TilchiImage;
	TImage *ExitImage;
	TImage *BrowseImage;
	TImage *WebImage;
	TRzSeparator *RzSeparator4;
	TRzLabel *TilchiLabel;
	void __fastcall ExitLabelMouseEnter(TObject *Sender);
	void __fastcall WebLabelMouseEnter(TObject *Sender);
	void __fastcall BrowseLabelMouseEnter(TObject *Sender);
	void __fastcall TilchiLabelMouseEnter(TObject *Sender);
	void __fastcall TilchiLabelMouseLeave(TObject *Sender);
	void __fastcall BrowseLabelMouseLeave(TObject *Sender);
	void __fastcall WebLabelMouseLeave(TObject *Sender);
	void __fastcall ExitLabelMouseLeave(TObject *Sender);
	void __fastcall TilchiLabelClick(TObject *Sender);
	void __fastcall BrowseLabelClick(TObject *Sender);
	void __fastcall WebLabelClick(TObject *Sender);
	void __fastcall ExitLabelClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall IncorexImageClick(TObject *Sender);
private:	// User declarations
    TFontStyles fs;
	void __fastcall SetLinkCursor(TControl *Control);
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
