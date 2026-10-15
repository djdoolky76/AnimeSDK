#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelRecentPlayersResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_5_CTOR_OFFSET UNITYSDK_OFFSET(0xAF86730)
#define MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_5__CLEANUPTIMEDOUTCALLBACKS_B__5_OFFSET UNITYSDK_OFFSET(0xAF87480)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelGameplayServices___c__DisplayClass41_5_TypeDefinitionIndex = 46519;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class HoYoChannelGameplayServices___c__DisplayClass41_5 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelRecentPlayersResult*>* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_5_CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELGAMEPLAYSERVICES___C__DISPLAYCLASS41_5__CLEANUPTIMEDOUTCALLBACKS_B__5_OFFSET))(this);
		}

	};
}
