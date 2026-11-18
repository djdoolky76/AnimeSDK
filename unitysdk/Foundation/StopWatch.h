#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_STOPWATCH_RECORD_OFFSET UNITYSDK_OFFSET(0x1F3A74E0)
#define FOUNDATION_STOPWATCH_START_OFFSET UNITYSDK_OFFSET(0x1F3A7460)
#define FOUNDATION_STOPWATCH_STOP_OFFSET UNITYSDK_OFFSET(0x1F3A75A0)
#define FOUNDATION_STOPWATCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3A75F0)
#define FOUNDATION_STOPWATCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A7350)
#define FOUNDATION_STOPWATCH___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3A7B70)

namespace Foundation
{
	inline static constexpr unsigned int StopWatch_TypeDefinitionIndex = 8142;

	class StopWatch : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::DateTime, ::System::String*>>* _data; // 0x10
		::System::String* _name; // 0x18
		::System::DateTime _stopTime; // 0x20
		::System::Boolean _bRecordDebug; // 0x28
		::System::Boolean _bStart; // 0x29
		::System::Byte _padding0[0x6];
		::System::DateTime _startTime; // 0x30

		::System::Void _ctor(::System::String* name, ::System::Boolean autoStart, ::System::Boolean recordDebug)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FOUNDATION_STOPWATCH__CTOR_OFFSET))(this, name, autoStart, recordDebug);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STOPWATCH_START_OFFSET))(this);
		}

		::System::Void Record(::System::String* log)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FOUNDATION_STOPWATCH_RECORD_OFFSET))(this, log);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STOPWATCH_STOP_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STOPWATCH_TOSTRING_OFFSET))(this);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_STOPWATCH___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
