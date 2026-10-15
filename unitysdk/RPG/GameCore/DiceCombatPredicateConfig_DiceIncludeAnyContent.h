#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_DiceIncludeAnyContent; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60CC40)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60CC50)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60F5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceIncludeAnyContent_TypeDefinitionIndex = 16102;

	class DiceCombatPredicateConfig_DiceIncludeAnyContent : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ValueList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceIncludeAnyContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEINCLUDEANYCONTENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
