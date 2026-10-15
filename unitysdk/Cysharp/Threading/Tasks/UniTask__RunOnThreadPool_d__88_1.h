#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTask__RunOnThreadPool_d__88_1_TypeDefinitionIndex = 38356;

	template <typename T>
	struct alignas(8) UniTask__RunOnThreadPool_d__88_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Boolean configureAwait; // 0x0
		::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* func; // 0x0
		::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable_Awaiter __u__1; // 0x0
		::System::Object* __7__wrap1; // 0x0
		::System::Int32 __7__wrap2; // 0x0
		T __7__wrap3; // 0x0
		::System::Object* __u__2; // 0x0
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__3; // 0x0
	};
}
