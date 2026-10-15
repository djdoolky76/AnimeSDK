#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNEEKNHIOE;
namespace RPG::Client::FateRin::Battle { class FateRinBattleHudTargetSingleViewModel; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_1_CTOR_OFFSET UNITYSDK_OFFSET(0xCECD620)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_1___REFRESHVIEWMODEL_B__1_OFFSET UNITYSDK_OFFSET(0xCECD7D0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudTargetViewModel___c__DisplayClass3_1_TypeDefinitionIndex = 80937;

	template <typename T>
	class FateRinBattleHudTargetViewModel___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::ECNEEKNHIOE* enemyModel; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __RefreshViewModel_b__1(::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleHudTargetSingleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDTARGETVIEWMODEL___C__DISPLAYCLASS3_1___REFRESHVIEWMODEL_B__1_OFFSET))(this, a1);
		}

	};
}
