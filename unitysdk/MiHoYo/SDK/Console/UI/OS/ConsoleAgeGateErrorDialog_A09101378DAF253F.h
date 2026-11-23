#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateErrorDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_A09101378DAF253F_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3A2A210)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_A09101378DAF253F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateErrorDialog_A09101378DAF253F_TypeDefinitionIndex = 12921;

	class ConsoleAgeGateErrorDialog_A09101378DAF253F : public ::System::Object
	{
	public:
		::System::String* B383F0530E7FBDBD; // 0x10
		::System::String* E7F13465F7E064E1; // 0x18
		::System::String* FD42EDAF932E31C8; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_A09101378DAF253F__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateErrorDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateErrorDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEERRORDIALOG_A09101378DAF253F_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
