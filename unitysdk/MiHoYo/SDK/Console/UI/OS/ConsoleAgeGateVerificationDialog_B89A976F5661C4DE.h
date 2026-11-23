#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI { class Dropdown; }
namespace UnityEngine::UI { class Text; }

#define MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_B89A976F5661C4DE__CTOR_OFFSET UNITYSDK_OFFSET(0x3AD02D0)

namespace MiHoYo::SDK::Console::UI::OS
{
	inline static constexpr unsigned int ConsoleAgeGateVerificationDialog_B89A976F5661C4DE_TypeDefinitionIndex = 12178;

	struct alignas(8) ConsoleAgeGateVerificationDialog_B89A976F5661C4DE
	{
		::UnityEngine::UI::Dropdown* ED533A3F60D1011F; // 0x10
		::UnityEngine::UI::Text* F0C60DB62AA3F5E0; // 0x18
		::System::Boolean E9B452075EEC1D13; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 E937D4885DAA1AE8; // 0x24

		::System::Void _ctor(::System::Boolean E9B452075EEC1D13)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_UI_OS_CONSOLEAGEGATEVERIFICATIONDIALOG_B89A976F5661C4DE__CTOR_OFFSET))(this, E9B452075EEC1D13);
		}
	};
}
