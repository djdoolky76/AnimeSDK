#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::PC::OS { class HoYoChannelLogoutResult; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB51270)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS69_0__ONLOGOUTCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1FB51280)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass69_0_TypeDefinitionIndex = 35551;

	class HoYoChannelInterface___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelLogoutResult*>* callback; // 0x10
		::System::String* jsonResponse; // 0x18
		::System::Int32 resultCode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnLogoutCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS69_0__ONLOGOUTCALLBACK_B__0_OFFSET))(this);
		}
	};
}
