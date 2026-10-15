#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceAllOdd; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60C820)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60C830)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60F500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceAllOdd_TypeDefinitionIndex = 16099;

	class DiceCombatPredicateConfig_DiceAllOdd : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
