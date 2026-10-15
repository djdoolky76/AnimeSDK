#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameAbilityAttributeType.h"
#include "unitysdk/RPG/GameCore/LittleGameValueCompareType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorFilterByAttributeConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DA5A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DA5B0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DA550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorFilterByAttributeConfig_TypeDefinitionIndex = 21381;

	class LittleGameAbilityTargetSelectorFilterByAttributeConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* Source; // 0x10
		::RPG::GameCore::LittleGameAbilityAttributeType AttributeType; // 0x18
		::RPG::GameCore::LittleGameValueCompareType CompareType; // 0x1C
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* CompareValue; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorFilterByAttributeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORFILTERBYATTRIBUTECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
