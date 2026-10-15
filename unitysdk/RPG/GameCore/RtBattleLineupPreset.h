#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleLineupPreset; }

#define RPG_GAMECORE_RTBATTLELINEUPPRESET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4DFF0)
#define RPG_GAMECORE_RTBATTLELINEUPPRESET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4DFB0)

namespace RPG::GameCore
{
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
