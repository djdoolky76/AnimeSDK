#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::UI::OS { class IAgeGateGeneralErrorDialog; }
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BCB2BB0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCB2BF0)
#define MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__HANDLEAGEGATEFROMERRORCODE_B__8_0_OFFSET UNITYSDK_OFFSET(0x1BCB2C00)

namespace MiHoYo::SDK::Console::OS
{
	inline static constexpr unsigned int AgeGateManager___c_TypeDefinitionIndex = 9057;

	class AgeGateManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Console.OS", "<>c")->GetStaticField(0x378C0);
		}

		static ::System::Action** StaticGet___9__8_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Console.OS", "<>c")->GetStaticField(0x378C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _HandleAgeGateFromErrorCode_b__8_0(::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UI::OS::IAgeGateGeneralErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_OS_AGEGATEMANAGER___C__HANDLEAGEGATEFROMERRORCODE_B__8_0_OFFSET))(this, a1);
		}

	};
}
