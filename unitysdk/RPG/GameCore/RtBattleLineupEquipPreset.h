#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleLineupEquipPreset; }

#define RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DFA0)
#define RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4DF60)

namespace RPG::GameCore
{
	class RtBattleLineupEquipPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleLineupEquipPreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleLineupEquipPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
