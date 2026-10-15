#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS25_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF283E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS25_0__LOGIN_B__0_OFFSET UNITYSDK_OFFSET(0x1BF29BB0)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannelEpic___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS25_0_CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__DISPLAYCLASS25_0__LOGIN_B__0_OFFSET))(this, a1);
		}

	};
}
