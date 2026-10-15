#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D43F710)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D43F6B0)
#define RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D43F200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BaseLittleGameAbilityValueGetterConfig_TypeDefinitionIndex = 21383;

	class BaseLittleGameAbilityValueGetterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BASELITTLEGAMEABILITYVALUEGETTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
