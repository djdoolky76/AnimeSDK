#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class OnlinePlayRoomModule; }
namespace System { class Action; }

#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS62_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEE8C10)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS62_0__TRANSFERTOARRANGEPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x1BEE8C20)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS62_0__TRANSFERTOARRANGEPAGE_B__1_OFFSET UNITYSDK_OFFSET(0x1BEE9410)
#define RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS62_0__TRANSFERTOARRANGEPAGE_B__2_OFFSET UNITYSDK_OFFSET(0x1BEE8CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int OnlinePlayRoomModule___c__DisplayClass62_0_TypeDefinitionIndex = 68342;

	class OnlinePlayRoomModule___c__DisplayClass62_0 : public ::System::Object
	{
	public:
		::System::Action* doTransferAction; // 0x10
		::RPG::Client::OnlinePlayRoomModule* __4__this; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS62_0_CTOR_OFFSET))(this);
		}

		::System::Void _TransferToArrangePage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS62_0__TRANSFERTOARRANGEPAGE_B__0_OFFSET))(this);
		}

		::System::Void _TransferToArrangePage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS62_0__TRANSFERTOARRANGEPAGE_B__2_OFFSET))(this);
		}

		::System::Void _TransferToArrangePage_b__1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ONLINEPLAYROOMMODULE___C__DISPLAYCLASS62_0__TRANSFERTOARRANGEPAGE_B__1_OFFSET))(this, a1);
		}

	};
}
