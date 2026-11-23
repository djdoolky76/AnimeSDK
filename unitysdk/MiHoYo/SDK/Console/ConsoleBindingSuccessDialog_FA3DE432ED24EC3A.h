#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Console { class ConsoleBindingSuccessDialog; }
namespace System { class String; }

#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_FA3DE432ED24EC3A_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3B0A600)
#define MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_FA3DE432ED24EC3A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleBindingSuccessDialog_FA3DE432ED24EC3A_TypeDefinitionIndex = 12244;

	class ConsoleBindingSuccessDialog_FA3DE432ED24EC3A : public ::System::Object
	{
	public:
		::System::String* F72ADE84A7CA8ECF; // 0x10
		::System::String* F84B5F67F40C0E97; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_FA3DE432ED24EC3A__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Console::ConsoleBindingSuccessDialog* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Console::ConsoleBindingSuccessDialog*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBINDINGSUCCESSDIALOG_FA3DE432ED24EC3A_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
