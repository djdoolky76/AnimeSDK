#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeResult; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS99_6__CLEANUPTIMEDOUTCALLBACKS_B__6_OFFSET UNITYSDK_OFFSET(0x1EAC2CD0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS99_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2CC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass99_6_TypeDefinitionIndex = 35562;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class HoYoChannelInterface___c__DisplayClass99_6 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS99_6__CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS99_6__CLEANUPTIMEDOUTCALLBACKS_B__6_OFFSET))(this);
		}
	};
}
