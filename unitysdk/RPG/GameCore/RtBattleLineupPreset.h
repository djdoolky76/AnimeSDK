#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleLineupPreset; }

#define RPG_GAMECORE_RTBATTLELINEUPPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA20750)
#define RPG_GAMECORE_RTBATTLELINEUPPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA20710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleLineupPreset_TypeDefinitionIndex = 18050;

	class RtBattleLineupPreset : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPPRESET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleLineupPreset* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleLineupPreset*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPPRESET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
