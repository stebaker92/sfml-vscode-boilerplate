#ifndef WINDOWS_HELPER_HPP
#define WINDOWS_HELPER_HPP

#include "Icon.h"

class WindowsHelper
{
	public:
		WindowsHelper();

		void setIcon(const HWND &handle);

	private:
		PBYTE getIconDirectory(const int &inResourceId);
		HICON getIconFromIconDirectory(const PBYTE &inIconDirectory, const uint &inSize);

		HICON m_hIcon32;
		HICON m_hIcon16;

};

#endif // WINDOWS_HELPER_HPP
