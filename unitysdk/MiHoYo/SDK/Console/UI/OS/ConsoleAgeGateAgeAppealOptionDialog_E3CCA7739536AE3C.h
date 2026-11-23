#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console::UI::OS { class ConsoleAgeGateAgeAppealOptionDialog; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_E3CCA7739536AE3C_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x38F5570)
#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_E3CCA7739536AE3C__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateAgeAppealOptionDialog_E3CCA7739536AE3C_TypeDefinitionIndex = 11779;

	class ConsoleAgeGateAgeAppealOptionDialog_E3CCA7739536AE3C : public ::System::Object
	{
	public:
		::System::Int32 A45DF5F605241316; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_E3CCA7739536AE3C__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::UI::OS::ConsoleAgeGateAgeAppealOptionDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEAGEAPPEALOPTIONDIALOG_E3CCA7739536AE3C_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
