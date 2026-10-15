#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC2510)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_1__ONCONSOLELOGINCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BCC2AD0)

namespace MiHoYo::SDK::Console::OS
{
	template <typename T>
	class LoginManagerCX___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* userModel; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnConsoleLoginCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERCX___C__DISPLAYCLASS5_1__ONCONSOLELOGINCALLBACK_B__0_OFFSET))(this);
		}

	};
}
