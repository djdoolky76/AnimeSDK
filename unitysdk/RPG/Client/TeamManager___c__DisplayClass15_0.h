#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class TeamManager; }
namespace System { class Action; }

#define RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE1D22C0)

namespace RPG::Client
{
	class TeamManager___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::RPG::Client::TeamManager* __4__this; // 0x10
		::System::Action* onLoadFinish; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMMANAGER___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

	};
}
