#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGWANDERMOVE_CONFIGWANDERMOVEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x19251250)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigWanderMove_ConfigWanderMoveEntry_TypeDefinitionIndex = 86395;

	class ConfigWanderMove_ConfigWanderMoveEntry : public ::System::Object
	{
	public:
		::System::String* Comment; // 0x10
		::System::Int32 MoveType; // 0x18
		::System::Single RotateSpeed; // 0x1C
		::System::Single PatrolRadius; // 0x20
		::System::Single MinPatrolDistance; // 0x24
		::System::Single MaxPatrolDistance; // 0x28
		::System::Single ArrivalDistance; // 0x2C
		::System::Single MinRestTime; // 0x30
		::System::Single MaxRestTime; // 0x34
		::System::Single SectorAngle; // 0x38
		::System::Int32 SideSwitchCount; // 0x3C
		::System::Int32 MaxTryCount; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGWANDERMOVE_CONFIGWANDERMOVEENTRY__CTOR_OFFSET))(this);
		}
	};
}
