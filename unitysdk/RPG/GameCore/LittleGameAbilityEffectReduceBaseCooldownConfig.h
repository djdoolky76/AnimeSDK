#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityEffectReduceBaseCooldownConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7D73D0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7D73E0)
#define RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7D7310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityEffectReduceBaseCooldownConfig_TypeDefinitionIndex = 21348;

	class LittleGameAbilityEffectReduceBaseCooldownConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* ReduceValue; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectReduceBaseCooldownConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectReduceBaseCooldownConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityEffectReduceBaseCooldownConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityEffectReduceBaseCooldownConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYEFFECTREDUCEBASECOOLDOWNCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
