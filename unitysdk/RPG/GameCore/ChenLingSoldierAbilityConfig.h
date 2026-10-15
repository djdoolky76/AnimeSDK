#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingAbilityConfig; }
namespace RPG::GameCore { class ChenLingSoldierAbilityConfig; }

#define RPG_GAMECORE_CHENLINGSOLDIERABILITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D593EB0)
#define RPG_GAMECORE_CHENLINGSOLDIERABILITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D593DD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingSoldierAbilityConfig_TypeDefinitionIndex = 15703;

	class ChenLingSoldierAbilityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingAbilityConfig* Ability; // 0x10
		::RPG::GameCore::ChenLingAbilityConfig* PromotionAbility; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERABILITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingSoldierAbilityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingSoldierAbilityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSOLDIERABILITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
