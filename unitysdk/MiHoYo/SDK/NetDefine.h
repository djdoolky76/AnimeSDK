#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_NETDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA62E0)

namespace MiHoYo::SDK
{
	class NetDefine : public ::System::Object
	{
	public:
		// static const ::System::Object ACCOUNT_PLAT_TIMEOUT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETDEFINE_CTOR_OFFSET))(this);
		}

	};
}
