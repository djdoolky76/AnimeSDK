#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameAbilityEffectClearShieldConfig; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D6DC0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D6DD0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D6CF0)

namespace RPG::GameCore
{
	class LittleGameAbilityEffectClearShieldConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::String* StoreValueKey; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectClearShieldConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectClearShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectClearShieldConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectClearShieldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTCLEARSHIELDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
