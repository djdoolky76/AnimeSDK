#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MessageContentLightConeRecommendBlock; }
namespace System { class Action; }

#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD6A0DB0)
#define RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK___C__DISPLAYCLASS3_0__REQUESTLIGHTCONERECOMMENDDATA_B__0_OFFSET UNITYSDK_OFFSET(0xD6A0FD0)

namespace RPG::Client
{
	class MessageContentLightConeRecommendBlock___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::RPG::Client::MessageContentLightConeRecommendBlock* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Void _RequestLightConeRecommendData_b__0(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTLIGHTCONERECOMMENDBLOCK___C__DISPLAYCLASS3_0__REQUESTLIGHTCONERECOMMENDDATA_B__0_OFFSET))(this, a1);
		}

	};
}
