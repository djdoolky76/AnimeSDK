#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_BOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC3C010)

namespace MiHoYo::SDK
{
	class Bool : public ::System::Object
	{
	public:
		// static const ::System::String* FALSE; // 0x0
		// static const ::System::String* TRUE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BOOL_CTOR_OFFSET))(this);
		}

	};
}
