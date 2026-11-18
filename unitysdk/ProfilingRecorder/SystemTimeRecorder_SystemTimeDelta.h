#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA_TOJSON_OFFSET UNITYSDK_OFFSET(0x860A60)
#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8609D0)
#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x860A70)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int SystemTimeRecorder_SystemTimeDelta_TypeDefinitionIndex = 36008;

	struct alignas(8) SystemTimeRecorder_SystemTimeDelta
	{
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* SystemAverages; // 0x10
		::System::Double TotalElapsedMs; // 0x18
		::System::Double TotalAverageMs; // 0x20
		::System::Int32 TotalCallCount; // 0x28
		::System::Byte _padding0[0x4];
		::System::TimeSpan Duration; // 0x30

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA_TOSTRING_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA_TOJSON_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMEDELTA___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
