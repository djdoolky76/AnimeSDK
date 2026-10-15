#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatPerformanceBattleEvent; }
namespace System { class Action; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS34_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCC188C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS34_0__APPENDPERFORMANCEEVENTHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0xCC19AC0)

namespace RPG::Client::DiceCombat
{
	class DiceCombatBattleContext___c__DisplayClass34_0 : public ::System::Object
	{
	public:
		::System::Action* eventHandler; // 0x10
		::XLua::LuaTable* target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS34_0_CTOR_OFFSET))(this);
		}

		::System::Void _AppendPerformanceEventHandler_b__0(::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatPerformanceBattleEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLECONTEXT___C__DISPLAYCLASS34_0__APPENDPERFORMANCEEVENTHANDLER_B__0_OFFSET))(this, a1);
		}

	};
}
