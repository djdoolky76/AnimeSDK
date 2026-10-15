#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_LAUNCHDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BE94F50)

namespace MiHoYo::SDK
{
	class LaunchDefine : public ::System::Object
	{
	public:
		// static const ::System::String* GET_DISK_FREE_SPACE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_LAUNCHDEFINE_CTOR_OFFSET))(this);
		}

	};
}
