#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatAdditivePropertyType.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_ModifierAdditivePropertyCompare; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E0FD0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E0FE0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E2070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_ModifierAdditivePropertyCompare_TypeDefinitionIndex = 16090;

	class DiceCombatPredicateConfig_ModifierAdditivePropertyCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatAdditivePropertyType AdditiveProperty; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Logic; // 0x24
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_ModifierAdditivePropertyCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_MODIFIERADDITIVEPROPERTYCOMPARE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
