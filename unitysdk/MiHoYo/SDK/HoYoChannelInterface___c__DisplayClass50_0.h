#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelCheckoutResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS50_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF916B0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS50_0__ONCHECKOUTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAF98E00)

namespace MiHoYo::SDK
{
	class HoYoChannelInterface___c__DisplayClass50_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::String* jsonResponse; // 0x18
		::System::Int32 resultCode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS50_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnCheckoutCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS50_0__ONCHECKOUTCALLBACK_B__0_OFFSET))(this);
		}

	};
}
