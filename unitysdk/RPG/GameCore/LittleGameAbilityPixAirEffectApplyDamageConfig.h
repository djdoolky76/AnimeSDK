#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityPixAirEffectApplyDamageConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F258970)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F258980)
#define RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F2588B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityPixAirEffectApplyDamageConfig_TypeDefinitionIndex = 21681;

	class LittleGameAbilityPixAirEffectApplyDamageConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Damage; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyDamageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyDamageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityPixAirEffectApplyDamageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYPIXAIREFFECTAPPLYDAMAGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
