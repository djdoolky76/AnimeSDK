#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelInviteResult; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_4_CTOR_OFFSET UNITYSDK_OFFSET(0xAF87790)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_4__CLEANUPTIMEDOUTCALLBACKS_B__4_OFFSET UNITYSDK_OFFSET(0xAF88430)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass41_4_TypeDefinitionIndex = 46518;

	template <typename T1, typename T2, typename T3, typename T4>
	class HoYoChannelGameplayServices___c__DisplayClass41_4 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_4_CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_4__CLEANUPTIMEDOUTCALLBACKS_B__4_OFFSET))(this);
		}

	};
}
