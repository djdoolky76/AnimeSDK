#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_PERFORMANCEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PerformanceInfo_TypeDefinitionIndex = 12361;

	class PerformanceInfo : public ::System::Object
	{
	public:
		::System::Int32 startAppMem; // 0x10
		::System::Int32 startThreadCnt; // 0x14
		::System::Int32 endAppMem; // 0x18
		::System::Int32 endThreadCnt; // 0x1C
		::System::String* actionName; // 0x20
		::System::String* actionType; // 0x28
		::System::String* endType; // 0x30
		::System::Int32 time; // 0x38
		::System::Byte _padding0[0x4];
		::System::String* performanceType; // 0x40
		::System::String* eventId; // 0x48
		::System::DateTime startTime; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PERFORMANCEINFO__CTOR_OFFSET))(this);
		}
	};
}
