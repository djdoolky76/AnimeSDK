#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/FD14982CCE056603.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateParentalConsentProcessDialog; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_A8BA01A09676A85D_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3923EF0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_A8BA01A09676A85D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentProcessDialog_A8BA01A09676A85D_TypeDefinitionIndex = 12332;

	class ConsoleAgeGateParentalConsentProcessDialog_A8BA01A09676A85D : public ::System::Object
	{
	public:
		::BED79290917896D4::FD14982CCE056603 A288CB28FC2A6DA3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_A8BA01A09676A85D__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentProcessDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentProcessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTPROCESSDIALOG_A8BA01A09676A85D_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
