#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_PlayerUltimateQTE; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D332D80)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D332D90)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D332D50)

namespace RPG::Client
{
	class RoadRashGameModifier_PlayerUltimateQTE : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint QTETriggerRangeMinPercent; // 0x18
		::RPG::GameCore::FixPoint QTETriggerRangeMaxPercent; // 0x20
		::RPG::GameCore::FixPoint QTEPressDuration; // 0x28
		::RPG::GameCore::FixPoint QTESuccessRecoverEnergy; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_PlayerUltimateQTE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERULTIMATEQTE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
