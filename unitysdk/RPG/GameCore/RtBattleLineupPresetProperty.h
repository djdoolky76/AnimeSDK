#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtBattleLineupPresetProperty; }

#define RPG_GAMECORE_RTBATTLELINEUPPRESETPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4E040)
#define RPG_GAMECORE_RTBATTLELINEUPPRESETPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4E000)

namespace RPG::GameCore
{
	class RtBattleLineupPresetProperty : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPPRESETPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtBattleLineupPresetProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtBattleLineupPresetProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTBATTLELINEUPPRESETPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
