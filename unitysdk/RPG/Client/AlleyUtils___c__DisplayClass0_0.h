#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }
namespace System { class Action; }

#define RPG_CLIENT_ALLEYUTILS___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC67A150)
#define RPG_CLIENT_ALLEYUTILS___C__DISPLAYCLASS0_0__SHOWALLEYMAINENTRANCEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0xC67A5E0)

namespace RPG::Client
{
	class AlleyUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Void _ShowAlleyMainEntrancePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYUTILS___C__DISPLAYCLASS0_0__SHOWALLEYMAINENTRANCEPAGE_B__0_OFFSET))(this);
		}

	};
}
