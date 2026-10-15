#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeWhileAwaitWithCancellation_1__TakeWhileAwaitWithCancellation_TypeDefinitionIndex = 45668;

	template <typename T>
	class TakeWhileAwaitWithCancellation_1__TakeWhileAwaitWithCancellation
	{
	public:
		::System::Func_3<T, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* predicate; // 0x0
	};
}
