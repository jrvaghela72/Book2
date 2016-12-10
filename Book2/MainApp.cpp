#include "MainApp.h"
#include "resource.h"


//CmainApp Constructor
CMainApp::CMainApp()
{

}

//CmainApp DeStructor
CMainApp::~CMainApp()
{
}

//APP INITIALIZATION STARTED FROM HERE
BOOL CMainApp::InitInstance()
{
	CSingleDocTemplate *pDocTemplate;
	pDocTemplate = new CSingleDocTemplate(IDR_MAINFRAME, RUNTIME_CLASS(CMainDoc), RUNTIME_CLASS(CMainFrame), RUNTIME_CLASS(CMainView));
	AddDocTemplate(pDocTemplate);
	CCommandLineInfo cmdInfo;
	//DISPATCH COMMAND SPECIFIED ON THE COMMAND LINE
	if(!ProcessShellCommand(cmdInfo))
	{
		return FALSE;
	}

	//ONLY ONE WINDOWS WILL BE CREATED 
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();

	return TRUE;
}
BEGIN_MESSAGE_MAP(CMainApp,CWinApp)

END_MESSAGE_MAP()

CMainApp theApp;

