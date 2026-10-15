#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

#define CYSHARP_THREADING_TASKS_LINQ_RANGE__RANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F10AE60)
#define CYSHARP_THREADING_TASKS_LINQ_RANGE__RANGE_DISPOSEASYNC_OFFSET UNITYSDK_OFFSET(0x1F10AF80)
#define CYSHARP_THREADING_TASKS_LINQ_RANGE__RANGE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F10AE80)
#define CYSHARP_THREADING_TASKS_LINQ_RANGE__RANGE_MOVENEXTASYNC_OFFSET UNITYSDK_OFFSET(0x1F10AE90)

namespace Cysharp::Threading::Tasks::Linq
{
	class Range__Range : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Int32 current; // 0x18
		::System::Int32 start; // 0x1C
		::System::Int32 end; // 0x20
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Threading::CancellationToken a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_RANGE__RANGE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_Current()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_RANGE__RANGE_GET_CURRENT_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask MoveNextAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_RANGE__RANGE_MOVENEXTASYNC_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask DisposeAsync()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + CYSHARP_THREADING_TASKS_LINQ_RANGE__RANGE_DISPOSEASYNC_OFFSET))(this);
		}

	};
}
