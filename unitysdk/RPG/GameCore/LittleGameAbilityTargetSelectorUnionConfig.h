#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTargetSelectorConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }
namespace RPG::GameCore { class LittleGameAbilityTargetSelectorUnionConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AD490)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AD4A0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AD440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTargetSelectorUnionConfig_TypeDefinitionIndex = 21368;

	class LittleGameAbilityTargetSelectorUnionConfig : public ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*>* Targets; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameAbilityTargetSelectorUnionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTARGETSELECTORUNIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
