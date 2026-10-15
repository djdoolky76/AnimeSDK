#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class Comparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Max__MaxAwaitWithCancellationAsync_d__3_2_TypeDefinitionIndex = 45459;

	template <typename T1, typename T2>
	struct alignas(8) Max__MaxAwaitWithCancellationAsync_d__3_2
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Func_3<T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* selector; // 0x0
		T2 _value_5__2; // 0x0
		::System::Collections::Generic::Comparer_1<T1>* _comparer_5__3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* _e_5__4; // 0x0
		::System::Object* __7__wrap4; // 0x0
		::System::Int32 __7__wrap5; // 0x0
		T2 __7__wrap6; // 0x0
		::System::Object* __u__1; // 0x0
		::System::Object* __u__2; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__3; // 0x0
	};
}
