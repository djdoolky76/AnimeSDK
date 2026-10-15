#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D8780)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D8790)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D86C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig_TypeDefinitionIndex = 21361;

	class LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percent; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectShieldFromBurnPercentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTSHIELDFROMBURNPERCENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
