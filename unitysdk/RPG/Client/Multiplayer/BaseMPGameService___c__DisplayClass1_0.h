#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMHEHLIFNGJ;
class PJMGBLIFDFP;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Multiplayer { class BaseMPGameService; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { template <typename T> class Func_1; }

#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE332B20)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__0_OFFSET UNITYSDK_OFFSET(0xE3355F0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__1_OFFSET UNITYSDK_OFFSET(0xE3356B0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__2_OFFSET UNITYSDK_OFFSET(0xE335A10)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__3_OFFSET UNITYSDK_OFFSET(0xE335AB0)
#define RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__4_OFFSET UNITYSDK_OFFSET(0xE335950)

namespace RPG::Client::Multiplayer
{
	inline static constexpr unsigned int BaseMPGameService___c__DisplayClass1_0_TypeDefinitionIndex = 83030;

	class BaseMPGameService___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FMHEHLIFNGJ* extInfo; // 0x10
		::PJMGBLIFDFP* roomExtInfo; // 0x18
		::System::Func_1<::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*>* __9__4; // 0x20
		::RPG::Client::Multiplayer::BaseMPGameService* __4__this; // 0x28
		::System::UInt32 createParam; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__1()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__4()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__4_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CreateLobby_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__2_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* _CreateLobby_b__3()
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYER_BASEMPGAMESERVICE___C__DISPLAYCLASS1_0__CREATELOBBY_B__3_OFFSET))(this);
		}

	};
}
