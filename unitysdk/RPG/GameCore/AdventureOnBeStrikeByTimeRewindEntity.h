#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class AdventureOnBeStrikeByTimeRewindEntity; }
namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CLEAR_OFFSET UNITYSDK_OFFSET(0xE57AEA0)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0xE57AFC0)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE57AF70)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE57AF20)
#define RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_INIT_OFFSET UNITYSDK_OFFSET(0xE57AE40)

namespace RPG::GameCore
{
	class AdventureOnBeStrikeByTimeRewindEntity : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* SourceTimeRewindEntity; // 0x18
		::RPG::GameCore::GameEntity* BeStrikeEntity; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::AdventureOnBeStrikeByTimeRewindEntity* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::RPG::GameCore::AdventureOnBeStrikeByTimeRewindEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREONBESTRIKEBYTIMEREWINDENTITY_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
