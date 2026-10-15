#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPEGLPPPAJJ;
class LEFAKCMDGNB;

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS50_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDEEB030)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS50_0___ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xDEED5C0)

namespace RPG::Client
{
	class RogueAdventureModule___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::LEFAKCMDGNB* rsp; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS50_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdHandleRogueCommonPendingActionScRsp_b__0(::DPEGLPPPAJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPEGLPPPAJJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS50_0___ONCMDHANDLEROGUECOMMONPENDINGACTIONSCRSP_B__0_OFFSET))(this, a1);
		}

	};
}
