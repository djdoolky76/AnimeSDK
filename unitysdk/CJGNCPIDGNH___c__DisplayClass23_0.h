#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJGNCPIDGNH;
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Exception; }

#define CJGNCPIDGNH___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x177D3980)
#define CJGNCPIDGNH___C__DISPLAYCLASS23_0___REFRESHANDSYNCLOBBYSTATE_B__0_OFFSET UNITYSDK_OFFSET(0x177D5420)
#define CJGNCPIDGNH___C__DISPLAYCLASS23_0___REFRESHANDSYNCLOBBYSTATE_B__1_OFFSET UNITYSDK_OFFSET(0x177D54A0)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass23_0_TypeDefinitionIndex = 83046;

	class CJGNCPIDGNH___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::CJGNCPIDGNH* __4__this; // 0x10
		::RPG::Client::Promises::Promise* lobbyStopGamingPromise; // 0x18
		::RPG::Client::Promises::Promise* activeRefreshFallback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void __RefreshAndSyncLobbyState_b__0(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS23_0___REFRESHANDSYNCLOBBYSTATE_B__0_OFFSET))(this, a1);
		}

		::System::Void __RefreshAndSyncLobbyState_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS23_0___REFRESHANDSYNCLOBBYSTATE_B__1_OFFSET))(this, a1);
		}

	};
