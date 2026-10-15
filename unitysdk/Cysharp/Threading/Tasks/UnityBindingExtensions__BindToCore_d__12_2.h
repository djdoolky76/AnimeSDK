#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityBindingExtensions__BindToCore_d__12_2_TypeDefinitionIndex = 38488;

	template <typename T1, typename T2>
	struct alignas(8) UnityBindingExtensions__BindToCore_d__12_2
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Boolean rebindOnError; // 0x0
		::System::Action_2<T2, T1>* bindAction; // 0x0
		T2 bindTarget; // 0x0
		::System::Boolean _repeat_5__2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* _e_5__3; // 0x0
		::System::Object* __7__wrap3; // 0x0
		::System::Int32 __7__wrap4; // 0x0
		::System::Object* __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}
