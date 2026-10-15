#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionAddBuildCoinByStepConfig; }

#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2C670)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC2C680)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC2C620)

namespace RPG::GameCore
{
	class TrainPartyActionAddBuildCoinByStepConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Int32 AddNumPerStep; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
