#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HPFull; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DF830)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DF840)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E1C10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HPFull_TypeDefinitionIndex = 16105;

	class DiceCombatPredicateConfig_HPFull : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_HPFull*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HPFULL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
