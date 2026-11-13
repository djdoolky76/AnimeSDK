#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityTargetSelectorConfig; }

#define RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C304720)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1C3046C0)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1C303E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseLittleGameAbilityTargetSelectorConfig_TypeDefinitionIndex = 21709;

	class BaseLittleGameAbilityTargetSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseLittleGameAbilityTargetSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYTARGETSELECTORCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
