#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelLoginResult; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF93E20)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET UNITYSDK_OFFSET(0xAF98FE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass68_0_TypeDefinitionIndex = 46532;

	class HoYoChannelInterface___c__DisplayClass68_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_0_CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_0__CLEANUPTIMEDOUTCALLBACKS_B__0_OFFSET))(this);
		}

	};
}
