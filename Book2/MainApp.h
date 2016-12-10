
#include<afxwin.h>
#include "afxext.h"

class CMainApp :public CWinApp
{
public:
	CMainApp();
	~CMainApp();
protected:
	BOOL InitInstance();
	DECLARE_MESSAGE_MAP()
};

class CMainFrame :public CFrameWnd
{
public:
	CMainFrame();
	~CMainFrame();
protected:
	DECLARE_DYNCREATE(CMainFrame);
	
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);

	DECLARE_MESSAGE_MAP();

};

class CMainDoc :public CDocument
{
public:
	CMainDoc();
	~CMainDoc();
protected:
	DECLARE_DYNCREATE(CMainDoc);
	DECLARE_MESSAGE_MAP();
};

class CMainView :public CEditView
{
public:
	CMainView();
	~CMainView();
protected:
	DECLARE_DYNCREATE(CMainView);
	DECLARE_MESSAGE_MAP();
};

