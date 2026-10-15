#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
class HPBAKOEHBHJ;
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_LEVELSTOREDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6EAF00)
#define RPG_GAMECORE_LEVELSTOREDAMAGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6EAF60)
#define RPG_GAMECORE_LEVELSTOREDAMAGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6EAF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelStoreDamage_TypeDefinitionIndex = 56742;

	class LevelStoreDamage : public ::System::Object
	{
	public:
		::HPBAKOEHBHJ* StoreData; // 0x10
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::HPBAKOEHBHJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::HPBAKOEHBHJ*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTOREDAMAGE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTOREDAMAGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSTOREDAMAGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
