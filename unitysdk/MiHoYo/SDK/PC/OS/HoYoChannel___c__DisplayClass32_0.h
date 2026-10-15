#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLeaderboardResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS32_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF19010)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS32_0__GETLEADERBOARD_B__0_OFFSET UNITYSDK_OFFSET(0x1BF20290)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass32_0_TypeDefinitionIndex = 8509;

	class HoYoChannel___c__DisplayClass32_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS32_0_CTOR_OFFSET))(this);
		}

		::System::Void _GetLeaderboard_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelLeaderboardResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS32_0__GETLEADERBOARD_B__0_OFFSET))(this, a1);
		}

	};
}
