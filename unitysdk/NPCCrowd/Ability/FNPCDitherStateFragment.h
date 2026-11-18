#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_GET_COLLISIONDITHER_OFFSET UNITYSDK_OFFSET(0x3E3C90)
#define NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_GET_PLAYERCOLLISIONDITHER_OFFSET UNITYSDK_OFFSET(0x5FFD90)
#define NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_SETCOLLISIONDITHERSTATE_OFFSET UNITYSDK_OFFSET(0x5FFDC0)
#define NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_SETCOLLISIONDITHER_OFFSET UNITYSDK_OFFSET(0x5FFDA0)
#define NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_SETPLAYERCOLLISIONDITHER_OFFSET UNITYSDK_OFFSET(0x5FFDB0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCDitherStateFragment_TypeDefinitionIndex = 77916;

	struct alignas(4) FNPCDitherStateFragment
	{
		::System::Int32 nearestEntityID; // 0x10
		::System::Single nearestEntityDistance; // 0x14
		::System::Boolean _collisionDither; // 0x18
		::System::Boolean _playerCollisionDither; // 0x19
		::System::Boolean enableCollisionDither; // 0x1A

		::System::Boolean get_collisionDither()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_GET_COLLISIONDITHER_OFFSET))(this);
		}

		::System::Boolean get_playerCollisionDither()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_GET_PLAYERCOLLISIONDITHER_OFFSET))(this);
		}

		::System::Boolean SetCollisionDither(::System::UInt32 entityId, ::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_SETCOLLISIONDITHER_OFFSET))(this, entityId, value);
		}

		::System::Boolean SetPlayerCollisionDither(::System::UInt32 entityId, ::System::Boolean value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_SETPLAYERCOLLISIONDITHER_OFFSET))(this, entityId, value);
		}

		::System::Boolean SetCollisionDitherState(::System::UInt32 entityId, ::System::Boolean collisionDitherValue, ::System::Boolean playerCollisionDitherValue)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_FNPCDITHERSTATEFRAGMENT_SETCOLLISIONDITHERSTATE_OFFSET))(this, entityId, collisionDitherValue, playerCollisionDitherValue);
		}
	};
}
