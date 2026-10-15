#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelLoseHP; }

#define RPG_GAMECORE_LEVELLOSEHP_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E9020)
#define RPG_GAMECORE_LEVELLOSEHP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E8FD0)
#define RPG_GAMECORE_LEVELLOSEHP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E8F80)
#define RPG_GAMECORE_LEVELLOSEHP_INIT_OFFSET UNITYSDK_OFFSET(0xE6E8F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelLoseHP_TypeDefinitionIndex = 56789;

	class LevelLoseHP : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::GameEntity* Attacker; // 0x20
		::RPG::GameCore::FixPoint Damage; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelLoseHP* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::RPG::GameCore::LevelLoseHP*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHP_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELLOSEHP_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
