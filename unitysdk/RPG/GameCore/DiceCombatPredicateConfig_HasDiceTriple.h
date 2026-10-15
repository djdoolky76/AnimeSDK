#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDiceTriple; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E0090)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E00A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E1DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDiceTriple_TypeDefinitionIndex = 16097;

	class DiceCombatPredicateConfig_HasDiceTriple : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Boolean AnyValue; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DynamicFloat* Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceTriple*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICETRIPLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
