#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_TIMEDURATIONDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE3180)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TimeDurationDefine_TypeDefinitionIndex = 7599;

	class TimeDurationDefine : public ::System::Object
	{
	public:
		// static const ::System::Object ONE_MINTUE; // 0x0
		// static const ::System::Object FIVE_MINTUE; // 0x0
		// static const ::System::Object ONE_HOUR; // 0x0
		// static const ::System::Object ONE_DAY; // 0x0
		// static const ::System::Object SEVEN_DAY; // 0x0
		// static const ::System::Object ONE_MONTH; // 0x0
		// static const ::System::Object SIX_MONTH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEDURATIONDEFINE_CTOR_OFFSET))(this);
		}

	};
}
