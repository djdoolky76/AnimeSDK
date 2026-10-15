#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_MODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BEA5790)

namespace MiHoYo::SDK
{
	class Model : public ::System::Object
	{
	public:
		// static const ::System::String* LOGIN; // 0x0
		// static const ::System::String* BIND; // 0x0
		// static const ::System::String* PAY; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MODEL_CTOR_OFFSET))(this);
		}

	};
}
