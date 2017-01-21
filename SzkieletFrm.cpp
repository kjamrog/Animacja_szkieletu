///-----------------------------------------------------------------
///
/// @file      SzkieletFrm.cpp
/// @author    
/// Created:   21.01.2017 13:19:15
/// @section   DESCRIPTION
///            SzkieletFrm class implementation
///
///------------------------------------------------------------------

#include "SzkieletFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// SzkieletFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(SzkieletFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(SzkieletFrm::OnClose)
END_EVENT_TABLE()
////Event Table End

SzkieletFrm::SzkieletFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

SzkieletFrm::~SzkieletFrm()
{
}

void SzkieletFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	SetTitle(_("Szkielet"));
	SetIcon(wxNullIcon);
	SetSize(8,8,320,334);
	Center();
	
	////GUI Items Creation End
}

void SzkieletFrm::OnClose(wxCloseEvent& event)
{
	Destroy();
}
