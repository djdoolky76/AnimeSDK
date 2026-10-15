#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChallengePeakTeam; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC9B8F50)
#define RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS32_0__GETNORMALTEAMBYID_B__0_OFFSET UNITYSDK_OFFSET(0xC9B9E20)

namespace RPG::Client
{
	class ChallengePeakTeamContext___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::UInt32 id; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetNormalTeamByID_b__0(::RPG::Client::ChallengePeakTeam* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChallengePeakTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMCONTEXT___C__DISPLAYCLASS32_0__GETNORMALTEAMBYID_B__0_OFFSET))(this, a1);
		}

	};
}
