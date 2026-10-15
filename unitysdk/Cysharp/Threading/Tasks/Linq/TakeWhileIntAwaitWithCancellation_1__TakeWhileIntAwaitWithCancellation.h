#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation_TypeDefinitionIndex = 45670;

	template <typename T>
	class TakeWhileIntAwaitWithCancellation_1__TakeWhileIntAwaitWithCancellation
	{
	public:
		::System::Func_4<T, ::System::Int32, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}
