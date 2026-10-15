#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__ContinueWith_d__54_1_TypeDefinitionIndex = 38414;

	template <typename T>
	struct alignas(8) UniTaskExtensions__ContinueWith_d__54_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::System::Action_1<T>* continuationFunction; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1<T> task; // 0x0
		::System::Action_1<T>* __7__wrap1; // 0x0
		::System::Object* __u__1; // 0x0
	};
}
