#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAttackConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackDamage; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E3450)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E3460)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E3390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AttackDamage_TypeDefinitionIndex = 16048;

	class DiceCombatTaskConfig_AttackDamage : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatAttackConfig* AttackConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AttackDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
