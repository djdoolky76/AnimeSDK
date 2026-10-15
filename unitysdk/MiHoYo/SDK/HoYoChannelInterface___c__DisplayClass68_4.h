#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelEntitlementsResult; }
namespace System { class Action; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_4_CTOR_OFFSET UNITYSDK_OFFSET(0xAF93E60)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_4__CLEANUPTIMEDOUTCALLBACKS_B__4_OFFSET UNITYSDK_OFFSET(0xAF992E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass68_4_TypeDefinitionIndex = 46536;

	template <typename T1, typename T2, typename T3, typename T4>
	class HoYoChannelInterface___c__DisplayClass68_4 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_4_CTOR_OFFSET))(this);
		}

		::System::Void _CleanupTimedOutCallbacks_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS68_4__CLEANUPTIMEDOUTCALLBACKS_B__4_OFFSET))(this);
		}

	};
}
