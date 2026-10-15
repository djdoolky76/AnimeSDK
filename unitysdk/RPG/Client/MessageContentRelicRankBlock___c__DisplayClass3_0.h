#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MessageContentRelicRankBlock; }
namespace System { class Action; }

#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD6A2140)
#define RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK___C__DISPLAYCLASS3_0__REQUESTRELICRANKDATA_B__0_OFFSET UNITYSDK_OFFSET(0xD6A2360)

namespace RPG::Client
{
	class MessageContentRelicRankBlock___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::MessageContentRelicRankBlock* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestRelicRankData_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTRELICRANKBLOCK___C__DISPLAYCLASS3_0__REQUESTRELICRANKDATA_B__0_OFFSET))(this);
		}

	};
}
