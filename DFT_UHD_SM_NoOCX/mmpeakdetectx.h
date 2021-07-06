#if !defined(AFX_MMPEAKDETECTX_H__731530A7_8240_47C6_B944_8043E8251DCE__INCLUDED_)
#define AFX_MMPEAKDETECTX_H__731530A7_8240_47C6_B944_8043E8251DCE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMMDspComponentX;

/////////////////////////////////////////////////////////////////////////////
// CMMPeakDetectX wrapper class

class CMMPeakDetectX : public CWnd
{
protected:
	DECLARE_DYNCREATE(CMMPeakDetectX)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xd664851f, 0xe237, 0x11d1, { 0x88, 0x19, 0xc1, 0x99, 0x19, 0x8e, 0x97, 0x2 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void Open();
	void Close();
	void Start();
	void Stop();
	void Process(long Buffer, long Length);
	void ResetData();
	long GetPeakIndex(float Freq);
	float GetResolution();
	long GetNumPeaks();
	long Peaks(long Index);
	long GetPeakLeft();
	long GetPeakRight();
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	long GetFFTLength();
	void SetFFTLength(long nNewValue);
	long GetWindow();
	void SetWindow(long nNewValue);
	long GetChannel();
	void SetChannel(long nNewValue);
	long GetPWaveFormat();
	void SetPWaveFormat(long nNewValue);
	CMMDspComponentX GetInput();
	void SetInput(LPDISPATCH newValue);
	CString GetInputX();
	void SetInputX(LPCTSTR lpszNewValue);
	CMMDspComponentX GetOutput();
	void SetOutput(LPDISPATCH newValue);
	CString GetOutputX();
	void SetOutputX(LPCTSTR lpszNewValue);
	void AboutBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MMPEAKDETECTX_H__731530A7_8240_47C6_B944_8043E8251DCE__INCLUDED_)
