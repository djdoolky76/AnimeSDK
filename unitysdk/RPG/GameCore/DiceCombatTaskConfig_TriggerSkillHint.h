#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSkillHint; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6144D0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6144E0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D614440)

namespace RPG::GameCore
{
	class DiceCombatTaskConfig_TriggerSkillHint : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERSKILLHINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
