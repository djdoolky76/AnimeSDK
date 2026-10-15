#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudSingleViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1_CTOR_OFFSET UNITYSDK_OFFSET(0xCEB4AC0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1___REFRESHVIEWMODEL_B__1_OFFSET UNITYSDK_OFFSET(0xCEB4DF0)

namespace RPG::Client::FateRin::Battle
{
	template <typename T>
	class FateRinBattleEnemyHudViewModel___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::ECNEEKNHIOE* enemyModel; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshViewModel_b__1(::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1___REFRESHVIEWMODEL_B__1_OFFSET))(this, a1);
		}

	};
}
