#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityEffectApplyChargeConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D69C0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D69D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D6900)

namespace RPG::GameCore
{
	class LittleGameAbilityEffectApplyChargeConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* ChargeValue; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyChargeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectApplyChargeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyChargeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectApplyChargeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYCHARGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
