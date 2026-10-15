#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityEffectMultiplyShieldConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D6F30)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D6F40)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D6E70)

namespace RPG::GameCore
{
	class LittleGameAbilityEffectMultiplyShieldConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Multiplier; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectMultiplyShieldConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectMultiplyShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectMultiplyShieldConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectMultiplyShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTMULTIPLYSHIELDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
