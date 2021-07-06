#if !defined(AFX_MMOSCOPEX_H__D1A55A15_8698_4A9C_A6C0_4F35BA89AB4A__INCLUDED_)
#define AFX_MMOSCOPEX_H__D1A55A15_8698_4A9C_A6C0_4F35BA89AB4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CMMBevelX;
class CPicture;

/////////////////////////////////////////////////////////////////////////////
// CMMOscopeX wrapper class

class CMMOscopeX : public CWnd
{
protected:
	DECLARE_DYNCREATE(CMMOscopeX)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x21c2a3c8, 0xd79c, 0x11d1, { 0x88, 0x18, 0xc1, 0x99, 0x19, 0x8e, 0x97, 0x2 } };
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
	void ResetData();
	long GetBytesPerScope();
	BOOL GetUsebackgroundDIB();
	void SetUsebackgroundDIB(BOOL bNewValue);
	BOOL GetPaletteRealize();
	void SetPaletteRealize(BOOL bNewValue);
	BOOL GetPaletteMapped();
	void SetPaletteMapped(BOOL bNewValue);
	unsigned long GetColor();
	void SetColor(unsigned long newValue);
	BOOL GetShowInfo();
	void SetShowInfo(BOOL bNewValue);
	BOOL GetEnabled();
	void SetEnabled(BOOL bNewValue);
	BOOL GetAccelerate();
	void SetAccelerate(BOOL bNewValue);
	BOOL GetScroll();
	void SetScroll(BOOL bNewValue);
	BOOL GetDrawMidLine();
	void SetDrawMidLine(BOOL bNewValue);
	long GetKind();
	void SetKind(long nNewValue);
	unsigned long GetForegroundColor();
	void SetForegroundColor(unsigned long newValue);
	unsigned long GetInactiveColor();
	void SetInactiveColor(unsigned long newValue);
	unsigned long GetEffectColor();
	void SetEffectColor(unsigned long newValue);
	unsigned long GetDisabledColor();
	void SetDisabledColor(unsigned long newValue);
	unsigned long GetScaleTextColor();
	void SetScaleTextColor(unsigned long newValue);
	unsigned long GetScaleLineColor();
	void SetScaleLineColor(unsigned long newValue);
	unsigned long GetScaleBackColor();
	void SetScaleBackColor(unsigned long newValue);
	unsigned long GetGridColor();
	void SetGridColor(unsigned long newValue);
	unsigned long GetBarColor();
	void SetBarColor(unsigned long newValue);
	unsigned long GetBarTickColor();
	void SetBarTickColor(unsigned long newValue);
	long GetBarWidth();
	void SetBarWidth(long nNewValue);
	long GetBitLength();
	void SetBitLength(long nNewValue);
	long GetChannel();
	void SetChannel(long nNewValue);
	long GetSampleRate();
	void SetSampleRate(long nNewValue);
	long GetMode();
	void SetMode(long nNewValue);
	long GetSteps();
	void SetSteps(long nNewValue);
	long GetZoom();
	void SetZoom(long nNewValue);
	long GetGain();
	void SetGain(long nNewValue);
	long GetEffect();
	void SetEffect(long nNewValue);
	BOOL GetDrawAmpScale();
	void SetDrawAmpScale(BOOL bNewValue);
	BOOL GetDrawTimeScale();
	void SetDrawTimeScale(BOOL bNewValue);
	BOOL GetDrawGrid();
	void SetDrawGrid(BOOL bNewValue);
	long GetFFTLength();
	void SetFFTLength(long nNewValue);
	long GetBitsPerPixel();
	void SetBitsPerPixel(long nNewValue);
	CMMBevelX GetBevel();
	CPicture GetBackgroundDIB();
	void SetBackgroundDIB(LPDISPATCH newValue);
	void RefreshPCMData(long lpPCMData);
	void SetData(long lpData);
	void Select(long sStart, long sEnd, BOOL Redraw);
	long GetSelectionStart();
	long GetSelectionEnd();
	long GetLocator();
	void SetLocator(long nNewValue);
	BOOL IsLocator(long X);
	BOOL IsSelectStart(long X);
	BOOL IsSelectEnd(long X);
	BOOL IsInSelection(long X);
	unsigned long GetSelctionColor();
	void SetSelctionColor(unsigned long newValue);
	unsigned long GetSelctionDotColor();
	void SetSelctionDotColor(unsigned long newValue);
	unsigned long GetLocatorColor();
	void SetLocatorColor(unsigned long newValue);
	BOOL GetLocked();
	void SetLocked(BOOL bNewValue);
	BOOL GetUseSelection();
	void SetUseSelection(BOOL bNewValue);
	long GetBevelExtend();
	long GetCursor();
	void SetCursor(long nNewValue);
	void AboutBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MMOSCOPEX_H__D1A55A15_8698_4A9C_A6C0_4F35BA89AB4A__INCLUDED_)
