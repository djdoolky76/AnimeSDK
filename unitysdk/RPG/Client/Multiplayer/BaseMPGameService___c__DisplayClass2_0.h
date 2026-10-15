#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Multiplayer { class BaseMPGameService; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD8E0620)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xD8E2FC0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xD8E3070)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xD8E33B0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__3_OFFSET UNITYSDK_OFFSET(0xD8E3450)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__4_OFFSET UNITYSDK_OFFSET(0xD8E3300)

namespace RPG::Client::Multiplayer
{
	class BaseMPGameService___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FMHEHLIFNGJ* extInfo; // 0x10
		::RPG::Client::Multiplayer::BaseMPGameService* __4__this; // 0x18
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__4; // 0x20
		::System::UInt64 lobbyID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _JoinLobby_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _JoinLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _JoinLobby_b__4()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__4_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _JoinLobby_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _JoinLobby_b__3()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS2_0__JOINLOBBY_B__3_OFFSET))(this);
		}

	};
}
