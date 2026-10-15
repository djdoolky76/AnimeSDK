#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xE466490)
#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0xE466410)
#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xE466500)
#define RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xE466480)

namespace RPG::Client
{
	class WindowsHelper_EnumWindowsCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::IntPtr a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WINDOWSHELPER_ENUMWINDOWSCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}

	};
}
