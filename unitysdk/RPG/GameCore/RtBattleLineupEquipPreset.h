#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleLineupEquipPreset; }

#define RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA20700)
#define RPG_GAMECORE_RTBATTLELINEUPEQUIPPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA206C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleLineupEquipPreset_TypeDefinitionIndex = 18047;

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
