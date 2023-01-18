
// MainMFCDlg.h : header file
//

#pragma once

#include "../CreateDLL/MyDLL.h" //dll header include
#pragma comment (lib, "../Debug/CreateDLL.lib") //dll lib ют╥б

// CMainMFCDlg dialog
class CMainMFCDlg : public CDialogEx
{
// Construction
public:
	CMainMFCDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAINMFC_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
