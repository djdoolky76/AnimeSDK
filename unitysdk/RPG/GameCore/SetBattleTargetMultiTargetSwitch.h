#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetBattleTargetMultiTargetSwitch; }

#define RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA97BB0)
#define RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA97BC0)
#define RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA97B80)

namespace RPG::GameCore
{
	class SetBattleTargetMultiTargetSwitch : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetBattleTargetMultiTargetSwitch*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETBATTLETARGETMULTITARGETSWITCH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
