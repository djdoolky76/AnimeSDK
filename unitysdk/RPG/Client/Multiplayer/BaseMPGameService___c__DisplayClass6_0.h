#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LobbyMemberData; }

#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD8E0D10)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS6_0__REMINDPREPARE_B__0_OFFSET UNITYSDK_OFFSET(0xD8E3500)

namespace RPG::Client::Multiplayer
{
	class BaseMPGameService___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::UInt32 memberUID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemindPrepare_b__0(::RPG::Client::LobbyMemberData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS6_0__REMINDPREPARE_B__0_OFFSET))(this, a1);
		}

	};
}
