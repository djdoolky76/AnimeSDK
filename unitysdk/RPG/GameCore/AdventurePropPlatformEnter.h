#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AdventurePropPlatformEnter; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_CLEAR_OFFSET UNITYSDK_OFFSET(0xE5725A0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_CTOR_OFFSET UNITYSDK_OFFSET(0xE5726C0)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE572670)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE572620)
#define RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_INIT_OFFSET UNITYSDK_OFFSET(0xE572540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePropPlatformEnter_TypeDefinitionIndex = 56648;

	class AdventurePropPlatformEnter : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* ColliderEntity; // 0x18
		::RPG::GameCore::GameEntity* StepOnSourceEntity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventurePropPlatformEnter* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AdventurePropPlatformEnter*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPROPPLATFORMENTER_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
