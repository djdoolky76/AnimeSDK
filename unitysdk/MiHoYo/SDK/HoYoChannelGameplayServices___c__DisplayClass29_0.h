#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS29_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF840F0)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS29_0__ONINVITECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAF87FF0)

namespace MiHoYo::SDK
{
	class HoYoChannelGameplayServices___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action* callback; // 0x18
		::System::Int32 resultCode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS29_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnInviteCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS29_0__ONINVITECALLBACK_B__0_OFFSET))(this);
		}

	};
}
