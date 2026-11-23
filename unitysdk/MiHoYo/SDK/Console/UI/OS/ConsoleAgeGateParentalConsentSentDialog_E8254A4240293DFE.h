#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/FD14982CCE056603.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateParentalConsentSentDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_E8254A4240293DFE_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3B0F470)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_E8254A4240293DFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentSentDialog_E8254A4240293DFE_TypeDefinitionIndex = 12231;

	class ConsoleAgeGateParentalConsentSentDialog_E8254A4240293DFE : public ::System::Object
	{
	public:
		::System::String* BD22A8D67B6C10A1; // 0x10
		::System::String* F51E83A249C13FAD; // 0x18
		::BED79290917896D4::FD14982CCE056603 A288CB28FC2A6DA3; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_E8254A4240293DFE__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentSentDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentSentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTSENTDIALOG_E8254A4240293DFE_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
