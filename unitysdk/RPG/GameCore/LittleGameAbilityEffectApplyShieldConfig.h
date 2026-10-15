#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityEffectApplyShieldConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A91E0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A91F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A9120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectApplyShieldConfig_TypeDefinitionIndex = 21340;

	class LittleGameAbilityEffectApplyShieldConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* ShieldValue; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyShieldConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectApplyShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyShieldConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectApplyShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYSHIELDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
