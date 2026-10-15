#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchMascotTriggerUIShootEffect; }

#define RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB44980)
#define RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB44990)
#define RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB448C0)

namespace RPG::GameCore
{
	class SwitchMascotTriggerUIShootEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchMascotTriggerUIShootEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHMASCOTTRIGGERUISHOOTEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
