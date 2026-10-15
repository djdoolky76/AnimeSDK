#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS54_0_CTOR_OFFSET UNITYSDK_OFFSET(0xAF933F0)
#define MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS54_0__ONCONSUMECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xAF98F40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelInterface___c__DisplayClass54_0_TypeDefinitionIndex = 46531;

	class HoYoChannelInterface___c__DisplayClass54_0 : public ::System::Object
	{
	public:
		::System::String* jsonResponse; // 0x10
		::System::Action* callback; // 0x18
		::System::Int32 resultCode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS54_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnConsumeCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELINTERFACE___C__DISPLAYCLASS54_0__ONCONSUMECALLBACK_B__0_OFFSET))(this);
		}

	};
}
