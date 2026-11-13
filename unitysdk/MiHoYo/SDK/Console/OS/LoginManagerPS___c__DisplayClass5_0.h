#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Console::OS { class LoginManagerPS; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x18629930)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS5_0__CHECKANDSHOWPROTOCOL_B__0_OFFSET UNITYSDK_OFFSET(0x1862A540)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerPS___c__DisplayClass5_0_TypeDefinitionIndex = 9095;

	class LoginManagerPS___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* userModel; // 0x10
		::MiHoYo::SDK::Console::OS::LoginManagerPS* __4__this; // 0x18
		::System::String* callbackMessage; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _CheckAndShowProtocol_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS5_0__CHECKANDSHOWPROTOCOL_B__0_OFFSET))(this);
		}

	};
}
