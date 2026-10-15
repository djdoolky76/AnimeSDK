#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelPrivilegeResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF9A870)
#define MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS8_0__ONRESOLVEPRIVILEGECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAF9B430)

namespace MiHoYo::SDK
{
	class HoYoChannelOnlineServices___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action* callback; // 0x18
		::System::Int32 resultCode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnResolvePrivilegeCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELONLINESERVICES___C__DISPLAYCLASS8_0__ONRESOLVEPRIVILEGECALLBACK_B__0_OFFSET))(this);
		}

	};
}
