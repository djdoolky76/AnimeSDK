#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllEven; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60C670)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60C680)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60F4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceAllEven_TypeDefinitionIndex = 16100;

	class DiceCombatPredicateConfig_DiceAllEven : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllEven*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLEVEN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
