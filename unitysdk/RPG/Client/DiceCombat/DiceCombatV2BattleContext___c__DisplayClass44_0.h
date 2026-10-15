#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatForceRefreshEvent; }
namespace System { class Action; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLECONTEXT___C__DISPLAYCLASS44_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCC44E70)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLECONTEXT___C__DISPLAYCLASS44_0__APPENDFORCEREFRESHEVENTHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0xCC48510)

namespace RPG::Client::DiceCombat
{
	class DiceCombatV2BattleContext___c__DisplayClass44_0 : public ::System::Object
	{
	public:
		::System::Action* eventHandler; // 0x10
		::XLua::LuaTable* target; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLECONTEXT___C__DISPLAYCLASS44_0_CTOR_OFFSET))(this);
		}

		::System::Void _AppendForceRefreshEventHandler_b__0(::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatForceRefreshEvent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2BATTLECONTEXT___C__DISPLAYCLASS44_0__APPENDFORCEREFRESHEVENTHANDLER_B__0_OFFSET))(this, a1);
		}

	};
}
