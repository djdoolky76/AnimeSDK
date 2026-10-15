#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatGlobalModifiers; }
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace RPG::GameCore { class DiceCombatModifierConfig; }

#define RPG_GAMECORE_DICECOMBATGLOBALMODIFIERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DBD40)
#define RPG_GAMECORE_DICECOMBATGLOBALMODIFIERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5DBBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatGlobalModifiers_TypeDefinitionIndex = 16160;

	class DiceCombatGlobalModifiers : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DiceCombatInsertAbilityConfig*>* Abilities; // 0x10
		::Il2CppArray<::RPG::GameCore::DiceCombatModifierConfig*>* Modifiers; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATGLOBALMODIFIERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatGlobalModifiers* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatGlobalModifiers*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATGLOBALMODIFIERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
