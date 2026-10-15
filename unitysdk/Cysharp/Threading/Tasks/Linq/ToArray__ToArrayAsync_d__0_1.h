#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class ArrayPool_1; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	struct alignas(8) ToArray__ToArrayAsync_d__0_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::Internal::ArrayPool_1<T>* _pool_5__2; // 0x0
		::Il2CppArray<T>* _array_5__3; // 0x0
		::Il2CppArray<T>* _result_5__4; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* _e_5__5; // 0x0
		::System::Object* __7__wrap5; // 0x0
		::System::Int32 __7__wrap6; // 0x0
		::System::Int32 _i_5__8; // 0x0
		::System::Object* __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}
