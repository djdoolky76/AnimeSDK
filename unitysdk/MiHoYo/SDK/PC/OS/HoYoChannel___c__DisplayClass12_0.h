#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF16310)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS12_0__GETFRIENDLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1BF1EDC0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass12_0_TypeDefinitionIndex = 8502;

	class HoYoChannel___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetFriendList_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelFriendListResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS12_0__GETFRIENDLIST_B__0_OFFSET))(this, a1);
		}

	};
}
