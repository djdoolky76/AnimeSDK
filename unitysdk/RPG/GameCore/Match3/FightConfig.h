#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class FightConfig; }

#define RPG_GAMECORE_MATCH3_FIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D84B990)
#define RPG_GAMECORE_MATCH3_FIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D84B7D0)

namespace RPG::GameCore::Match3
{
	class FightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single BattleShowMaxDuration; // 0x10
		::System::Single BirdInitScale; // 0x14
		::System::Single BirdScalePerPower; // 0x18
		::System::Single BirdMaxScale; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_FIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::FightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::FightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_FIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
