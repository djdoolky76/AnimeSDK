#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterLimboRevivable; }

#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_CLEAR_OFFSET UNITYSDK_OFFSET(0x18492BD0)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x18492CC0)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x18492C70)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x18492C20)
#define RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_INIT_OFFSET UNITYSDK_OFFSET(0x18492B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelCharacterLimboRevivable_TypeDefinitionIndex = 57991;

	class LevelCharacterLimboRevivable : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterLimboRevivable* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelCharacterLimboRevivable*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERLIMBOREVIVABLE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
