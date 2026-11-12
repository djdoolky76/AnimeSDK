#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E53F770)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E53F780)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E53F740)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy_TypeDefinitionIndex = 10315;

	class RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_FallingLandingQTEAddUltimateEnergy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_FALLINGLANDINGQTEADDULTIMATEENERGY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
