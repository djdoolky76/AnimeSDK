#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_AddUltimateEnergy; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D32FC30)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D32FC40)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D32FC00)

namespace RPG::Client
{
	class RoadRashGameModifier_AddUltimateEnergy : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Speed; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
