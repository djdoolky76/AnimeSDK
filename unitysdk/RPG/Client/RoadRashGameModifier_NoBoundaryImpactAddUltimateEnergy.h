#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D332460)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D332470)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D332430)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy_TypeDefinitionIndex = 10304;

	class RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x18
		::RPG::GameCore::FixPoint Speed; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_NoBoundaryImpactAddUltimateEnergy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_NOBOUNDARYIMPACTADDULTIMATEENERGY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
