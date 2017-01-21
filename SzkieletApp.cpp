//---------------------------------------------------------------------------
//
// Name:        SzkieletApp.cpp
// Author:      
// Created:     21.01.2017 13:19:14
// Description: 
//
//---------------------------------------------------------------------------

#include "SzkieletApp.h"
#include "SzkieletFrm.h"

IMPLEMENT_APP(SzkieletFrmApp)

bool SzkieletFrmApp::OnInit()
{
    SzkieletFrm* frame = new SzkieletFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    return true;
}
 
int SzkieletFrmApp::OnExit()
{
	return 0;
}
