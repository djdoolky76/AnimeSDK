#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerDiceUpgrade; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D613E10)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D613E20)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D613DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerDiceUpgrade_TypeDefinitionIndex = 16058;

	class DiceCombatTaskConfig_TriggerDiceUpgrade : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerDiceUpgrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERDICEUPGRADE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
