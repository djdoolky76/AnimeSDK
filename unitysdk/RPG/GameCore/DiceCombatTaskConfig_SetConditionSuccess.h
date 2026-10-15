#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_SetConditionSuccess; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D613190)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6131A0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D613100)

namespace RPG::GameCore
{
	class DiceCombatTaskConfig_SetConditionSuccess : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConditionSuccess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_SetConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_SetConditionSuccess* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_SetConditionSuccess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_SETCONDITIONSUCCESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
