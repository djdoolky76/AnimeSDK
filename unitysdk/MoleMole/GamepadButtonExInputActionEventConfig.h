#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDJLPLIMPNI.h"
#include "unitysdk/MoleMole/BaseInputActionEventConfig.h"
#include "unitysdk/MoleMole/GamepadButtonEx.h"

#define MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET UNITYSDK_OFFSET(0x1466D2F0)
#define MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1466D300)

namespace MoleMole
{
	inline static constexpr unsigned int GamepadButtonExInputActionEventConfig_TypeDefinitionIndex = 78377;

	class GamepadButtonExInputActionEventConfig : public ::MoleMole::BaseInputActionEventConfig
	{
	public:
		::System::Single FirstTriggerInterval; // 0x18
		::System::Single triggerInterval; // 0x1C
		::MoleMole::GamepadButtonEx gamepadButtonExType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG__CTOR_OFFSET))(this);
		}

		::KDJLPLIMPNI get_dataType()
		{
			return ((::KDJLPLIMPNI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADBUTTONEXINPUTACTIONEVENTCONFIG_GET_DATATYPE_OFFSET))(this);
		}
	};
}
