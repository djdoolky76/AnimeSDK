#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX___C__DISPLAYCLASS5_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE14490)
#define MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX___C__DISPLAYCLASS5_0__GENERATEACCESSTOKEN_B__0_OFFSET UNITYSDK_OFFSET(0x1BE14860)

namespace MiHoYo::SDK::Windows::OS::Channel
{
	class BindManagerXbox___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX___C__DISPLAYCLASS5_0_CTOR_OFFSET))(this);
		}

		::System::Void _GenerateAccessToken_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WINDOWS_OS_CHANNEL_BINDMANAGERXBOX___C__DISPLAYCLASS5_0__GENERATEACCESSTOKEN_B__0_OFFSET))(this, a1);
		}

	};
}
