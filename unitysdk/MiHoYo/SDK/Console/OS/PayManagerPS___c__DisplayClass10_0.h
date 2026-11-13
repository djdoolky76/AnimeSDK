#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Console/ConsoleProduct.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Console::OS { class PayManagerPS; }

#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0x186332A0)
#define MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS10_0__LAUNCHCONSOLEPAY_B__0_OFFSET UNITYSDK_OFFSET(0x18636EB0)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int PayManagerPS___c__DisplayClass10_0_TypeDefinitionIndex = 9104;

	class PayManagerPS___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Console::ConsoleProduct product; // 0x10
		::MiHoYo::SDK::Console::OS::PayManagerPS* __4__this; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void _LaunchConsolePay_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_PAYMANAGERPS___C__DISPLAYCLASS10_0__LAUNCHCONSOLEPAY_B__0_OFFSET))(this, a1);
		}

	};
}
