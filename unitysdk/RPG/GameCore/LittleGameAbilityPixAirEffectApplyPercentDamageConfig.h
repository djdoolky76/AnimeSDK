#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEffectApplyPercentDamageConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D7670)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D7680)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D75B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectApplyPercentDamageConfig_TypeDefinitionIndex = 21347;

	class LittleGameAbilityPixAirEffectApplyPercentDamageConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Percentage; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyPercentDamageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyPercentDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyPercentDamageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyPercentDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYPERCENTDAMAGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
