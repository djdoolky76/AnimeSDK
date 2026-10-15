#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_AGEGATECONSTDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC29CF0)

namespace MiHoYo::SDK
{
	class AgeGateConstDefine : public ::System::Object
	{
	public:
		// static const ::System::String* AGE_GATE_PAYLOAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATECONSTDEFINE_CTOR_OFFSET))(this);
		}

	};
}
