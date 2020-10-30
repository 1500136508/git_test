#pragma once

class CImage
{
public:
	CImage() = default;
	CImage(int nWidth, int nHeight) :m_nWidth(nWidth), m_nHeight(nHeight)
	{

	}
	virtual ~CImage() = default;
private:
	int m_nWidth;
	int m_nHeight;
};
