#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class Publish_1; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Publish_1__ConsumeEnumerator_d__8_TypeDefinitionIndex = 45537;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	struct alignas(8) Publish_1__ConsumeEnumerator_d__8
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::Linq::Publish_1<T1>* __4__this; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
		::System::Object* __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}
