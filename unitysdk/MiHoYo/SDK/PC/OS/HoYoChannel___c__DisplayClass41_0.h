#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS41_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF1B550)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS41_0__SENDSESSIONINVITEINTERNAL_B__0_OFFSET UNITYSDK_OFFSET(0x1BF215F0)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannel___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS41_0_CTOR_OFFSET))(this);
		}

		::System::Void _SendSessionInviteInternal_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelInviteResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS41_0__SENDSESSIONINVITEINTERNAL_B__0_OFFSET))(this, a1);
		}

	};
}
