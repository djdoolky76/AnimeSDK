#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_MHYSDKC_CTOR_OFFSET UNITYSDK_OFFSET(0xAFBC970)

namespace MiHoYo::SDK
{
	class MHYSDKC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MHYSDKC_CTOR_OFFSET))(this);
		}

	};
}
