#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMESNAPSHOT_TOJSON_OFFSET UNITYSDK_OFFSET(0x860D00)
#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMESNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x860C70)
#define PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMESNAPSHOT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x860D10)

namespace ProfilingRecorder
{
	inline static constexpr unsigned int SystemTimeRecorder_SystemTimeSnapshot_TypeDefinitionIndex = 36007;

	struct alignas(8) SystemTimeRecorder_SystemTimeSnapshot
	{
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* SystemTimes; // 0x10
		::System::Double TotalElapsedMs; // 0x18
		::System::DateTime Timestamp; // 0x20

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMESNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMESNAPSHOT_TOJSON_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROFILINGRECORDER_SYSTEMTIMERECORDER_SYSTEMTIMESNAPSHOT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
