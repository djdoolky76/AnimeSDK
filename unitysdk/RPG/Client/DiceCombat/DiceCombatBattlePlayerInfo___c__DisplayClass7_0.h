#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatBattlePlayerInfo; }
namespace System { class Action; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCC1DDD0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS7_0__SETDICESELECTEDCHANGEDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xCC1DDE0)

namespace RPG::Client::DiceCombat
{
	class DiceCombatBattlePlayerInfo___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo* __4__this; // 0x10
		::System::Action* onSelectChanged; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetDiceSelectedChangedCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__DISPLAYCLASS7_0__SETDICESELECTEDCHANGEDCALLBACK_B__0_OFFSET))(this);
		}

	};
}
