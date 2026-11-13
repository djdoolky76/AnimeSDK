#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::SocialPlay { class SocialPlayMapInfo; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE9440)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS7_0__TRANSFERTOSOCIALPLAYMAPPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0x1BEE9450)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c__DisplayClass7_0_TypeDefinitionIndex = 68343;

	class OnlinePlayRoomModule___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::RPG::Client::SocialPlay::SocialPlayMapInfo* map; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void _TransferToSocialPlayMapPromise_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS7_0__TRANSFERTOSOCIALPLAYMAPPROMISE_B__0_OFFSET))(this);
		}

	};
}
