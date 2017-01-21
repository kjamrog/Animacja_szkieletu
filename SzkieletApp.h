//---------------------------------------------------------------------------
//
// Name:        SzkieletApp.h
// Author:      
// Created:     21.01.2017 13:19:14
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __SZKIELETFRMApp_h__
#define __SZKIELETFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif

class SzkieletFrmApp : public wxApp
{
	public:
		bool OnInit();
		int OnExit();
};

#endif
