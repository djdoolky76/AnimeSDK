#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int WhenEachEnumerable_1_Enumerator__RunWhenEachTask_d__11_TypeDefinitionIndex = 38380;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	struct alignas(8) WhenEachEnumerable_1_Enumerator__RunWhenEachTask_d__11
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T1> task; // 0x0
		::System::Object* self; // 0x0
		::System::Int32 length; // 0x0
		::System::Object* __u__1; // 0x0
	};
}
