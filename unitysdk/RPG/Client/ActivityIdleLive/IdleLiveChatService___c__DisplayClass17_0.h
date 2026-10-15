#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDCJNKCNJDL;
class PBHBHNNFDCM;
namespace RPG::Client::ActivityIdleLive { class IdleLiveChatService; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC467BA0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0__ADDSPECIALCHAT_B__0_OFFSET UNITYSDK_OFFSET(0xC4680B0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveChatService___c__DisplayClass17_0_TypeDefinitionIndex = 75282;

	class IdleLiveChatService___c__DisplayClass17_0 : public ::System::Object
	{
	public:
		::GDCJNKCNJDL* specialChatData; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveChatService* __4__this; // 0x18
		::PBHBHNNFDCM* trigger; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0_CTOR_OFFSET))(this);
		}

		::System::Void _AddSpecialChat_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_IDLELIVECHATSERVICE___C__DISPLAYCLASS17_0__ADDSPECIALCHAT_B__0_OFFSET))(this);
		}

	};
}
