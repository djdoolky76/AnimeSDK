#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask_WhenAnyPromise_13_TypeDefinitionIndex = 38320;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class UniTask_WhenAnyPromise_13 : public ::System::Object
	{
	public:
		::System::Int32 completedCount; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple> core; // 0x0
	};
}
