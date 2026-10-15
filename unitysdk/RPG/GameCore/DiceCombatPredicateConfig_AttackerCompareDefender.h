#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatPredicateConfig_AttackerCompareDefender; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5DDCC0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5DDCD0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E1800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_AttackerCompareDefender_TypeDefinitionIndex = 16117;

	class DiceCombatPredicateConfig_AttackerCompareDefender : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
