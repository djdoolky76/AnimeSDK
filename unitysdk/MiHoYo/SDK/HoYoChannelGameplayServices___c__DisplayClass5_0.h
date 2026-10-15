#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAchievementsResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF82320)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS5_0__ONACHIEVEMENTSCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAF885B0)

namespace MiHoYo::SDK
{
	class HoYoChannelGameplayServices___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::String* jsonResponse; // 0x18
		::System::Int32 resultCode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnAchievementsCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS5_0__ONACHIEVEMENTSCALLBACK_B__0_OFFSET))(this);
		}

	};
}
