#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SingleOperator__SingleAsync_d__0_1_TypeDefinitionIndex = 45575;

	template <typename T>
	struct alignas(8) SingleOperator__SingleAsync_d__0_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Boolean defaultIfEmpty; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* _e_5__2; // 0x0
		::System::Object* __7__wrap2; // 0x0
		::System::Int32 __7__wrap3; // 0x0
		T __7__wrap4; // 0x0
		::System::Object* __u__1; // 0x0
		T _v_5__6; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x0
	};
}
