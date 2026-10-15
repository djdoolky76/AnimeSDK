#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelSocialUpdateResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS15_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF168B0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS15_0__REGISTERSOCIALUPDATECALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BF1F7E0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannel___c__DisplayClass15_0_TypeDefinitionIndex = 8505;

	class HoYoChannel___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS15_0_CTOR_OFFSET))(this);
		}

		::System::Void _RegisterSocialUpdateCallback_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelSocialUpdateResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNEL___C__DISPLAYCLASS15_0__REGISTERSOCIALUPDATECALLBACK_B__0_OFFSET))(this, a1);
		}

	};
}
