#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/FD14982CCE056603.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateParentalConsentRequiredDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_B7C17CC2788FBF07_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3953F00)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_B7C17CC2788FBF07__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentRequiredDialog_B7C17CC2788FBF07_TypeDefinitionIndex = 12438;

	class ConsoleAgeGateParentalConsentRequiredDialog_B7C17CC2788FBF07 : public ::System::Object
	{
	public:
		::System::String* F51E83A249C13FAD; // 0x10
		::BED79290917896D4::FD14982CCE056603 A288CB28FC2A6DA3; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_B7C17CC2788FBF07__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentRequiredDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentRequiredDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTREQUIREDDIALOG_B7C17CC2788FBF07_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
