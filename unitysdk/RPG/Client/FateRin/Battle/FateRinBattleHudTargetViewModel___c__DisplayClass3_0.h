#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTargetSingleViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCED5F40)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_0___REFRESHVIEWMODEL_B__0_OFFSET UNITYSDK_OFFSET(0xCED6040)

namespace RPG::Client::FateRin::Battle
{
	class FateRinBattleHudTargetViewModel___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel* targetViewModel; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshViewModel_b__0(::ECNEEKNHIOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_0___REFRESHVIEWMODEL_B__0_OFFSET))(this, a1);
		}

	};
}
