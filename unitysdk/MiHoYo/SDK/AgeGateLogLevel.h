#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_AGEGATELOGLEVEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC09750)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateLogLevel_TypeDefinitionIndex = 7554;

	class AgeGateLogLevel : public ::System::Object
	{
	public:
		// static const ::System::Object DEFAULT; // 0x0
		// static const ::System::Object US_CHILD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATELOGLEVEL_CTOR_OFFSET))(this);
		}

	};
}
