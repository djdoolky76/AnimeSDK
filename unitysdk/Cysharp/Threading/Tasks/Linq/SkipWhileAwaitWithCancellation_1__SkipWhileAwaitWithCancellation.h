#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class SkipWhileAwaitWithCancellation_1__SkipWhileAwaitWithCancellation
	{
	public:
		::System::Func_3<T, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* predicate; // 0x0
	};
}
