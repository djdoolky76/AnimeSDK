#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace System { class Action; }

#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE0FC210)
#define RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS3_0__SHOWSPACEZOOBAGPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xE1000C0)

namespace RPG::Client
{
	class SpaceZooUtils___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowSpaceZooBagPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOUTILS___C__DISPLAYCLASS3_0__SHOWSPACEZOOBAGPAGE_B__0_OFFSET))(this);
		}

	};
}
