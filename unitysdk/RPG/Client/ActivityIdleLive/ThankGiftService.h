#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0xC51FA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC51FC90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE__ONTHANKGIFT_OFFSET UNITYSDK_OFFSET(0xC51FAA0)

namespace RPG::Client::ActivityIdleLive
{
	class ThankGiftService : public ::System::Object
	{
	public:
		// static const ::System::Object _MAX_RECORD_GIFT_THANK_NUM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE_CTOR_OFFSET))(this);
		}

		::System::Void _OnThankGift(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE__ONTHANKGIFT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_THANKGIFTSERVICE_DISPOSE_OFFSET))(this);
		}

	};
}
