#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelFriendListResult; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF9E060)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS23_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET UNITYSDK_OFFSET(0xAF9E500)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSocialServices___c__DisplayClass23_0_TypeDefinitionIndex = 46554;

	class HoYoChannelSocialServices___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS23_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET))(this);
		}

	};
}
