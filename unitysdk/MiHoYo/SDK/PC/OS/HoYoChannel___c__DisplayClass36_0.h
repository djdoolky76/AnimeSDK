#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelActivityResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS36_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF1A6C0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS36_0__GETACTIVITIES_B__0_OFFSET UNITYSDK_OFFSET(0x1BF20CC0)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannel___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS36_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetActivities_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelActivityResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS36_0__GETACTIVITIES_B__0_OFFSET))(this, a1);
		}

	};
}
