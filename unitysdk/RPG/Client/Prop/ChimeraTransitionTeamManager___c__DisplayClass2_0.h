#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC81930)
#define RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS2_0__FILLPOSITION_B__0_OFFSET UNITYSDK_OFFSET(0xDC82AF0)

namespace RPG::Client::Prop
{
	class ChimeraTransitionTeamManager___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _FillPosition_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERATRANSITIONTEAMMANAGER___C__DISPLAYCLASS2_0__FILLPOSITION_B__0_OFFSET))(this);
		}

	};
}
