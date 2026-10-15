#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF9D000)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS5_0__ONFRIENDLISTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAF9E740)

namespace MiHoYo::SDK
{
	class HoYoChannelSocialServices___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action* callback; // 0x18
		::System::Int32 resultCode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnFriendListCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS5_0__ONFRIENDLISTCALLBACK_B__0_OFFSET))(this);
		}

	};
}
