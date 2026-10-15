#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelBlockListResult; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS23_1_CTOR_OFFSET UNITYSDK_OFFSET(0xAF9E070)
#define MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS23_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET UNITYSDK_OFFSET(0xAF9E5C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSocialServices___c__DisplayClass23_1_TypeDefinitionIndex = 46555;

	template <typename T>
	class HoYoChannelSocialServices___c__DisplayClass23_1 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS23_1_CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSOCIALSERVICES___C__DISPLAYCLASS23_1__CLEANUPTIMEDOUTCALLBACKS_B__1_OFFSET))(this);
		}

	};
}
