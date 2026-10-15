#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudSingleViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCEAC3B0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_0___REFRESHVIEWMODEL_B__0_OFFSET UNITYSDK_OFFSET(0xCEAC5F0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudViewModel___c__DisplayClass13_0_TypeDefinitionIndex = 80867;

	class FateRinBattleEnemyHudViewModel___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel* vm; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshViewModel_b__0(::ECNEEKNHIOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECNEEKNHIOE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__DISPLAYCLASS13_0___REFRESHVIEWMODEL_B__0_OFFSET))(this, a1);
		}

	};
}
