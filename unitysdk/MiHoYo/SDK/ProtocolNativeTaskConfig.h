#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SwitchBaseConfig.h"
namespace System { class String; }

#define MIHOYO_SDK_PROTOCOLNATIVETASKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFBD4D0)

namespace MiHoYo::SDK
{
	class ProtocolNativeTaskConfig : public ::MiHoYo::SDK::SwitchBaseConfig
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLNATIVETASKCONFIG_CTOR_OFFSET))(this, a1);
		}

	};
}
