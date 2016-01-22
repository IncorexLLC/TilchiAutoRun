//$$---- Form CPP ----
//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "MainFormUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "RzLabel"
#pragma link "RzEdit"
#pragma link "RzBorder"
#pragma resource "*.dfm"
TMainForm *MainForm;
//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner) : TForm(Owner)
{
	fs = ExitLabel->Font->Style;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ExitLabelMouseEnter(TObject *Sender)
{
	Memo->Text = "  Выход из программы установки.";
	ExitLabel->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::WebLabelMouseEnter(TObject *Sender)
{
	Memo->Text = "  Открыть веб-сайт Incorex Ltd.";
	WebLabel->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::BrowseLabelMouseEnter(TObject *Sender)
{
	Memo->Text = "  Просмотр файлов установки на CD.";
	BrowseLabel->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::TilchiLabelMouseEnter(TObject *Sender)
{
	AnsiString text = "  Установка системы электронных словарей Incorex ";
	text += " Tilchi 1.0 на Ваш персональный компьютер.";
	text += "\r\n  © 2007 Incorex Ltd.";
	text += "\r\n  Все права защищены.";
	Memo->Text = text;
	TilchiLabel->Font->Style = TFontStyles() << fsUnderline << fsBold;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::TilchiLabelMouseLeave(TObject *Sender)
{
	TilchiLabel->Font->Style = fs;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::BrowseLabelMouseLeave(TObject *Sender)
{
	BrowseLabel->Font->Style = fs;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::WebLabelMouseLeave(TObject *Sender)
{
	WebLabel->Font->Style = fs;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ExitLabelMouseLeave(TObject *Sender)
{
	ExitLabel->Font->Style = fs;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::TilchiLabelClick(TObject *Sender)
{
	ShellExecute(Handle, "open", "Setup\\setup.exe", 0, 0, SW_SHOW);
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::BrowseLabelClick(TObject *Sender)
{
	ShellExecute(Handle, "open", 0, 0, GetCurrentDir().c_str(), SW_SHOW);
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::WebLabelClick(TObject *Sender)
{
	ShellExecute(Handle, "open", "http://www.incorex.com", 0, 0, SW_SHOW);
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ExitLabelClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::FormShow(TObject *Sender)
{
	Screen->Cursors[1] = LoadCursor(HInstance,"LINK_CURSOR");
	SetLinkCursor(TilchiImage);
	SetLinkCursor(BrowseImage);
	SetLinkCursor(WebImage);
	SetLinkCursor(ExitImage);
	SetLinkCursor(IncorexImage);
	SetLinkCursor(TilchiLabel);
	SetLinkCursor(BrowseLabel);
	SetLinkCursor(WebLabel);
 	SetLinkCursor(ExitLabel);
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::SetLinkCursor(TControl *Control)
{
	Control->Cursor = (TCursor) 1;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::IncorexImageClick(TObject *Sender)
{
 	ShellExecute(Handle, "open", "http://www.incorex.com", 0, 0, SW_SHOW);
}
//---------------------------------------------------------------------------
