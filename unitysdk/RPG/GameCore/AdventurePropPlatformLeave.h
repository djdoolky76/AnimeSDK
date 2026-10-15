#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AdventurePropPlatformLeave; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE572730)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_CTOR_OFFSET UNITYSDK_OFFSET(0xE572850)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE572800)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE5727B0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_INIT_OFFSET UNITYSDK_OFFSET(0xE5726D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePropPlatformLeave_TypeDefinitionIndex = 56649;

	class AdventurePropPlatformLeave : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* LeaveSourceEntity; // 0x18
		::RPG::GameCore::GameEntity* ColliderEntity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePropPlatformLeave* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AdventurePropPlatformLeave*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMLEAVE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
