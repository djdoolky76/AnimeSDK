#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::ActivityMarble { class MarblePVPManagerBase; }
namespace System { class Action; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC548320)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0__JOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xC54B700)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0__JOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xC54B990)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0__JOINLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xC54BC70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0__JOINLOBBY_B__3_OFFSET UNITYSDK_OFFSET(0xC54BB70)

namespace RPG::Client::ActivityMarble
{
	class MarblePVPManagerBase___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* __9__1; // 0x10
		::RPG::Client::ActivityMarble::MarblePVPManagerBase* __4__this; // 0x18
		::System::Action* __9__3; // 0x20
		::System::Action* __9__2; // 0x28
		::System::UInt64 roomID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _JoinLobby_b__0(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0__JOINLOBBY_B__0_OFFSET))(this, a1);
		}

		::System::Void _JoinLobby_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0__JOINLOBBY_B__1_OFFSET))(this);
		}

		::System::Void _JoinLobby_b__3(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0__JOINLOBBY_B__3_OFFSET))(this, a1);
		}

		::System::Void _JoinLobby_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEPVPMANAGERBASE___C__DISPLAYCLASS23_0__JOINLOBBY_B__2_OFFSET))(this);
		}

	};
}
