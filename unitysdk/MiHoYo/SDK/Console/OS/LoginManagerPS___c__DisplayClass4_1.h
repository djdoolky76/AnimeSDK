#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }

#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC65520)
#define MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS4_1__ONCONSOLELOGINCALLBACK_G__SUCCESSCALLBACK_0_OFFSET UNITYSDK_OFFSET(0x1CC65530)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int LoginManagerPS___c__DisplayClass4_1_TypeDefinitionIndex = 20381;

	template <typename T>
	class LoginManagerPS___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* userModel; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS4_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnConsoleLoginCallback_g__successCallback_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_LOGINMANAGERPS___C__DISPLAYCLASS4_1__ONCONSOLELOGINCALLBACK_G__SUCCESSCALLBACK_0_OFFSET))(this);
		}
	};
}
