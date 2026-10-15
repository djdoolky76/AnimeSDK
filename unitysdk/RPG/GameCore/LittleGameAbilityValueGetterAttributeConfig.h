#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityValueGetterAttributeConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DC520)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DC530)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DC4D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterAttributeConfig_TypeDefinitionIndex = 21385;

	class LittleGameAbilityValueGetterAttributeConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::RPG::GameCore::LittleGameAbilityAttributeType AttributeType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* TargetSelector; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityValueGetterAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
