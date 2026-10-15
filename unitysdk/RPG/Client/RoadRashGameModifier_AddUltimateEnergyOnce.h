#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_AddUltimateEnergyOnce; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3022F0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D302300)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3022C0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_AddUltimateEnergyOnce_TypeDefinitionIndex = 10306;

	class RoadRashGameModifier_AddUltimateEnergyOnce : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergyOnce*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_ADDULTIMATEENERGYONCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
