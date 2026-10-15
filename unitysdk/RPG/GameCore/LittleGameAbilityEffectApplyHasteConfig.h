#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityEffectApplyHasteConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A9090)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A90A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A8FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectApplyHasteConfig_TypeDefinitionIndex = 21341;

	class LittleGameAbilityEffectApplyHasteConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* HasteDuration; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyHasteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectApplyHasteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectApplyHasteConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectApplyHasteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTAPPLYHASTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
