﻿#pragma once
//为什么加入这个定义就好了？
#ifndef __AFXCVIEW_H__
#include <afxcview.h>
#endif

// CSelectView1 视图

class CSelectView1 : public CTreeView
{
	DECLARE_DYNCREATE(CSelectView1)

protected:
	CSelectView1();           // 动态创建所使用的受保护的构造函数
	virtual ~CSelectView1();

public:
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

private:
	CTreeCtrl *m_treeCtrl; //树控件
	CImageList m_imageList; //图标列表
protected:
	DECLARE_MESSAGE_MAP()
public:
	virtual void OnInitialUpdate();
	afx_msg void OnTvnSelchanged(NMHDR* pNMHDR, LRESULT* pResult);
};


