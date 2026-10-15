#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/GameModeState.h"
namespace RPG::GameCore { class LevelGameModeStateChanged; }

#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_CTOR_OFFSET UNITYSDK_OFFSET(0xE6EF0B0)
#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6EF060)
#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6EF010)
#define RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_INIT_OFFSET UNITYSDK_OFFSET(0xE6EEFC0)

namespace RPG::GameCore
{
	class LevelGameModeStateChanged : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameModeState CurrentGameModeState; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelGameModeStateChanged* Init(::RPG::GameCore::GameModeState a1)
		{
			return ((::RPG::GameCore::LevelGameModeStateChanged*(*)(::PVOID, ::RPG::GameCore::GameModeState))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGAMEMODESTATECHANGED_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
