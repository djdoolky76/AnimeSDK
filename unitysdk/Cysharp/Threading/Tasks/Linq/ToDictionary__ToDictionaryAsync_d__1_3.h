#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int ToDictionary__ToDictionaryAsync_d__1_3_TypeDefinitionIndex = 45677;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) ToDictionary__ToDictionaryAsync_d__1_3
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Collections::Generic::Dictionary_2<T1, T2>*> __t__builder; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T1>* comparer; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T3>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Func_2<T3, T1>* keySelector; // 0x0
		::System::Func_2<T3, T2>* elementSelector; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, T2>* _dict_5__2; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T3>* _e_5__3; // 0x0
		::System::Object* __7__wrap3; // 0x0
		::System::Int32 __7__wrap4; // 0x0
		::System::Object* __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}
