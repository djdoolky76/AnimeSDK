#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class Comparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Max__MaxAsync_d__1_2_TypeDefinitionIndex = 45422;

	template <typename T1, typename T2>
	struct alignas(8) Max__MaxAsync_d__1_2
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<T1> __t__builder; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Func_2<T2, T1>* selector; // 0x0
		T2 _value_5__2; // 0x0
		::System::Collections::Generic::Comparer_1<T1>* _comparer_5__3; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* _e_5__4; // 0x0
		::System::Object* __7__wrap4; // 0x0
		::System::Int32 __7__wrap5; // 0x0
		T2 __7__wrap6; // 0x0
		::System::Object* __u__1; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}
