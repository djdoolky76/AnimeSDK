#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_BossChangePhase; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6114B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6114C0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D611420)

namespace RPG::GameCore
{
	class DiceCombatTaskConfig_BossChangePhase : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_BOSSCHANGEPHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
