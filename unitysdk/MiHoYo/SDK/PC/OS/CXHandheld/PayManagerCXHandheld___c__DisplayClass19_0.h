#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelAuthTokenResult; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF0B950)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS19_0__GENERATEXSTSACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1BF0E0F0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	class PayManagerCXHandheld___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::String* xuid; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Void _GenerateXstsAccessToken_b__0(::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelAuthTokenResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_PAYMANAGERCXHANDHELD___C__DISPLAYCLASS19_0__GENERATEXSTSACCESSTOKEN_B__0_OFFSET))(this, a1);
		}

	};
}
