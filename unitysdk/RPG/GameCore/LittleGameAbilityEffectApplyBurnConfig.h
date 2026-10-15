#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityEffectApplyBurnConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A8DF0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A8E00)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A8D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectApplyBurnConfig_TypeDefinitionIndex = 21339;

	class LittleGameAbilityEffectApplyBurnConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* BurnCount; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyBurnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectApplyBurnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyBurnConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectApplyBurnConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYBURNCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
