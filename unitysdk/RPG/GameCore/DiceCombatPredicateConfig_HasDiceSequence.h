#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasDiceSequence; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D60D8B0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D60D910)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D60F7D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDiceSequence_TypeDefinitionIndex = 16098;

	class DiceCombatPredicateConfig_HasDiceSequence : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* MinLength; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
