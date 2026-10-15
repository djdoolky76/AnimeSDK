#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasSelectDicePointCompare; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E04E0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E04F0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E1E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasSelectDicePointCompare_TypeDefinitionIndex = 16115;

	class DiceCombatPredicateConfig_HasSelectDicePointCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x24
		::RPG::GameCore::DynamicFloat* DiceContentPoint; // 0x28
		::RPG::GameCore::DynamicFloat* Value; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HasSelectDicePointCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASSELECTDICEPOINTCOMPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
