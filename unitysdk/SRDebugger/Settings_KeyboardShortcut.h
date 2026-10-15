#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/Settings_ShortcutActions.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/KeyCode.h"

#define SRDEBUGGER_SETTINGS_KEYBOARDSHORTCUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED52F90)

namespace SRDebugger
{
	class Settings_KeyboardShortcut : public ::System::Object
	{
	public:
		::SRDebugger::Settings_ShortcutActions Action; // 0x10
		::System::Boolean Alt; // 0x14
		::System::Boolean Control; // 0x15
		::System::Byte _padding0[0x2];
		::UnityEngine::KeyCode Key; // 0x18
		::System::Boolean Shift; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SETTINGS_KEYBOARDSHORTCUT_CTOR_OFFSET))(this);
		}

	};
}
