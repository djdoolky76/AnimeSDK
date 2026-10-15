#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ForEach__ForEachAwaitWithCancellationAsync_d__5_1_TypeDefinitionIndex = 45371;

	template <typename T>
	struct alignas(8) ForEach__ForEachAwaitWithCancellationAsync_d__5_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Func_4<T, ::System::Int32, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* action; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* _e_5__2; // 0x0
		::System::Object* __7__wrap2; // 0x0
		::System::Int32 __7__wrap3; // 0x0
		::System::Int32 _index_5__5; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x0
		::System::Object* __u__2; // 0x0
	};
}
