#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BED79290917896D4/FD14982CCE056603.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateParentalConsentDialog; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_EA7F79BB827017E2_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A2B2C0)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_EA7F79BB827017E2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateParentalConsentDialog_EA7F79BB827017E2_TypeDefinitionIndex = 12904;

	class ConsoleAgeGateParentalConsentDialog_EA7F79BB827017E2 : public ::System::Object
	{
	public:
		::BED79290917896D4::FD14982CCE056603 A288CB28FC2A6DA3; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_EA7F79BB827017E2__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateParentalConsentDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEPARENTALCONSENTDIALOG_EA7F79BB827017E2_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
