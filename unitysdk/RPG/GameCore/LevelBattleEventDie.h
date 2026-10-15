#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelBattleEventDie; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6D7060)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6D7150)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6D7100)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6D70B0)
#define RPG_GAMECORE_LEVELBATTLEEVENTDIE_INIT_OFFSET UNITYSDK_OFFSET(0xE6D6FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelBattleEventDie_TypeDefinitionIndex = 56772;

	class LevelBattleEventDie : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::System::String* CharacterName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelBattleEventDie* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelBattleEventDie*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELBATTLEEVENTDIE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
