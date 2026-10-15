#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLGJDILNNDH;
namespace RPG::Client { class MatchThreeGameOpponent; }

#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS6_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD59AEC0)
#define RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS6_0___UPDATEPLAYER_B__0_OFFSET UNITYSDK_OFFSET(0xD59AED0)

namespace RPG::Client
{
	class MatchThreeGame___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::KLGJDILNNDH* match3PlayerData; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS6_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __UpdatePlayer_b__0(::RPG::Client::MatchThreeGameOpponent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME___C__DISPLAYCLASS6_0___UPDATEPLAYER_B__0_OFFSET))(this, a1);
		}

	};
}
