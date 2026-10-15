#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DF3C0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DF3D0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E1B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect_TypeDefinitionIndex = 16103;

	class DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnySpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYSPECIALEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
