#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatAttackConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_StrikeBackDamage; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E5ED0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E5EE0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E5E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_StrikeBackDamage_TypeDefinitionIndex = 16051;

	class DiceCombatTaskConfig_StrikeBackDamage : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DiceCombatAttackConfig* AttackConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_STRIKEBACKDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
