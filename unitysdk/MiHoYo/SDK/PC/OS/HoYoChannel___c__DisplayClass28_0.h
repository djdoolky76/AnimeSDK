#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS28_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF174E0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS28_0__GETACHIEVEMENTS_B__0_OFFSET UNITYSDK_OFFSET(0x1BF1F8F0)

namespace MiHoYo::SDK::PC::OS
{
	class HoYoChannel___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS28_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetAchievements_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAchievementsResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS28_0__GETACHIEVEMENTS_B__0_OFFSET))(this, a1);
		}

	};
}
