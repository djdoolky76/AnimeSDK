#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJAFBEGOCHP;
namespace RPG::Client { class PlayerModule; }

#define RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS57_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDBF55B0)
#define RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS57_0___CMDPLAYERGETTOKENSCRSP_B__0_OFFSET UNITYSDK_OFFSET(0xDBFA860)

namespace RPG::Client
{
	class PlayerModule___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::RPG::Client::PlayerModule* __4__this; // 0x10
		::KJAFBEGOCHP* rsp; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS57_0_CTOR_OFFSET))(this);
		}

		::System::Void __CmdPlayerGetTokenScRsp_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERMODULE___C__DISPLAYCLASS57_0___CMDPLAYERGETTOKENSCRSP_B__0_OFFSET))(this);
		}

	};
}
