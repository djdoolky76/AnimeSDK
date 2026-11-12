#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudSingleViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD87CF60)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_1___REFRESHVIEWMODEL_B__1_OFFSET UNITYSDK_OFFSET(0xD87D280)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudViewModel___c__DisplayClass13_1_TypeDefinitionIndex = 83649;

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
