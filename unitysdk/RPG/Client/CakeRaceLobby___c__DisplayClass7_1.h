#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CakeRaceParticipantData; }
namespace RPG::Client { class LobbyMemberData; }

#define RPG_CLIENT_CAKERACELOBBY___C__DISPLAYCLASS7_1_CTOR_OFFSET UNITYSDK_OFFSET(0xC920300)
#define RPG_CLIENT_CAKERACELOBBY___C__DISPLAYCLASS7_1___SYNCPARTICIPANTS_B__1_OFFSET UNITYSDK_OFFSET(0xC920800)

namespace RPG::Client
{
	template <typename T>
	class CakeRaceLobby___c__DisplayClass7_1 : public ::System::Object
	{
	public:
		::RPG::Client::LobbyMemberData* member; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___C__DISPLAYCLASS7_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __SyncParticipants_b__1(::RPG::Client::CakeRaceParticipantData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::CakeRaceParticipantData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKERACELOBBY___C__DISPLAYCLASS7_1___SYNCPARTICIPANTS_B__1_OFFSET))(this, a1);
		}

	};
}
