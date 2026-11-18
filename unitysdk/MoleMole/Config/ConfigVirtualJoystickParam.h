#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/VirtualJoystickMoveType.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGVIRTUALJOYSTICKPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xFFE4970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVirtualJoystickParam_TypeDefinitionIndex = 51659;

	class ConfigVirtualJoystickParam : public ::System::Object
	{
	public:
		::System::Single DeadZonePercent; // 0x10
		::System::Single CenterMoveAreaSize; // 0x14
		::System::Single LeftRightAngle; // 0x18
		::System::Single DirSharedAngle; // 0x1C
		::MoleMole::VirtualJoystickMoveType MoveType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIRTUALJOYSTICKPARAM__CTOR_OFFSET))(this);
		}
	};
}
