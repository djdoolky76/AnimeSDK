#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
namespace Cysharp::Threading::Tasks::Linq { template <typename T1, typename T2> class AsyncSelectorEnumerableSorter_2; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	struct alignas(8) AsyncSelectorEnumerableSorter_2__ComputeKeysAsync_d__6
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::AsyncSelectorEnumerableSorter_2<T1, T2>* __4__this; // 0x0
		::System::Int32 count; // 0x0
		::Il2CppArray<T1>* elements; // 0x0
		::System::Int32 _i_5__2; // 0x0
		::Il2CppArray<T2>* __7__wrap2; // 0x0
		::System::Int32 __7__wrap3; // 0x0
		::System::Object* __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}
