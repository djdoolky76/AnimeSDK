#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelEntityMazeSkillEnterBattle; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_CLEAR_OFFSET UNITYSDK_OFFSET(0xF1EF550)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_CTOR_OFFSET UNITYSDK_OFFSET(0xF1EF640)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1EF5F0)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1EF5A0)
#define RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_INIT_OFFSET UNITYSDK_OFFSET(0xF1EF4E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEntityMazeSkillEnterBattle_TypeDefinitionIndex = 57985;

	class LevelEntityMazeSkillEnterBattle : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::GameEntity* Target; // 0x18
		::RPG::GameCore::TurnBasedModifierInstance* ModifierInstance; // 0x20
		::System::Boolean Precall; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityMazeSkillEnterBattle* Init(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2, ::System::Boolean a3)
		{
			return ((::RPG::GameCore::LevelEntityMazeSkillEnterBattle*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_CLEAR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELENTITYMAZESKILLENTERBATTLE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
