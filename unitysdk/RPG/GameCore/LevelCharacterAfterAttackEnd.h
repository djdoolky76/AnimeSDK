#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterAfterAttackEnd; }

#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_CLEAR_OFFSET UNITYSDK_OFFSET(0xE6E2300)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E23F0)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E23A0)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E2350)
#define RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_INIT_OFFSET UNITYSDK_OFFSET(0xE6E22B0)

namespace RPG::GameCore
{
	class LevelCharacterAfterAttackEnd : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Attacker; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelCharacterAfterAttackEnd* Init(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::LevelCharacterAfterAttackEnd*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_INIT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELCHARACTERAFTERATTACKEND_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
