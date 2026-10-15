#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AK_WWISE_CALLBACKFLAGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1F56E330)

namespace AK::Wwise
{
	class CallbackFlags : public ::System::Object
	{
	public:
		::System::UInt32 value; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AK_WWISE_CALLBACKFLAGS_CTOR_OFFSET))(this);
		}

	};
}
