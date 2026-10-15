#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/TimeSpan.h"

#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F120D90)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ELAPSEDTICKS_OFFSET UNITYSDK_OFFSET(0x3C5E860)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x3C5E860)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ISINVALID_OFFSET UNITYSDK_OFFSET(0x2F097F0)
#define CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_STARTNEW_OFFSET UNITYSDK_OFFSET(0x1F120BF0)

namespace Cysharp::Threading::Tasks::Internal
{
	struct alignas(4) ValueStopwatch
	{
		::System::Int64 startTimestamp; // 0x10
		static ::System::Double* StaticGet_TimestampToTicks()
		{
			return (::System::Double*)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "ValueStopwatch")->GetStaticField(0xD9E0);
		}

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_CCTOR_OFFSET))();
		}

		/*
		static ::Cysharp::Threading::Tasks::Internal::ValueStopwatch StartNew()
		{
			return ((::Cysharp::Threading::Tasks::Internal::ValueStopwatch(*)())((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_STARTNEW_OFFSET))();
		}
		*/

		::System::TimeSpan get_Elapsed()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ELAPSED_OFFSET))(this);
		}

		::System::Boolean get_IsInvalid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ISINVALID_OFFSET))(this);
		}

		::System::Int64 get_ElapsedTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_INTERNAL_VALUESTOPWATCH_GET_ELAPSEDTICKS_OFFSET))(this);
		}

	};
}
