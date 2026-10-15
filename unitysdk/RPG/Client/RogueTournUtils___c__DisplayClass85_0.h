#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }

#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE05A500)
#define RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_0___DELAYEDPROMISE_B__0_OFFSET UNITYSDK_OFFSET(0xE05B2F0)

namespace RPG::Client
{
	class RogueTournUtils___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::System::Single delayedTime; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __DelayedPromise_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNUTILS___C__DISPLAYCLASS85_0___DELAYEDPROMISE_B__0_OFFSET))(this);
		}

	};
}
