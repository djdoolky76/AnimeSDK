#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class BrowserWin32Helper_EnumWindowsProc; }
namespace MiHoYo::SDK { class BrowserWin32Helper_WndProcDelegate; }

namespace MiHoYo::SDK
{
	class BrowserWin32Helper___O : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate** StaticGet__0___wndProc()
		{
			return (::MiHoYo::SDK::BrowserWin32Helper_WndProcDelegate**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1E630);
		}

		static ::MiHoYo::SDK::BrowserWin32Helper_EnumWindowsProc** StaticGet__1___EnumThreadWindowsProc()
		{
			return (::MiHoYo::SDK::BrowserWin32Helper_EnumWindowsProc**)UnitySDK::FromName("MiHoYo.SDK", "<>O")->GetStaticField(0x1E638);
		}

	};
}
