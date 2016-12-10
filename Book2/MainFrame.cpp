#include "MainApp.h"



CMainFrame::CMainFrame()
{
}


CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	//CALL THE BASE CLASS TO CREATE WINDOW
	if(CFrameWnd::OnCreate(lpCreateStruct)==0)
	{
		return 0;
	}
	return -1;
}

//MAPING
IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)
BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()//IT WILL USE OnCreate()
END_MESSAGE_MAP()
