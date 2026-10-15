#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOECBKCCIJF;

#define RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD1DA0E0)
#define RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS39_0__ISVICTORYRULEUNLOCK_B__0_OFFSET UNITYSDK_OFFSET(0xD1DC1F0)

namespace RPG::Client
{
	class GridFightPlayer___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::System::UInt32 groupID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _IsVictoryRuleUnlock_b__0(::KOECBKCCIJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOECBKCCIJF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPLAYER___C__DISPLAYCLASS39_0__ISVICTORYRULEUNLOCK_B__0_OFFSET))(this, a1);
		}

	};
}
