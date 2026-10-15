#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class SkipWhileAwait_1__SkipWhileAwait
	{
	public:
		::System::Func_2<T, ::Cysharp::Threading::Tasks::UniTask>* predicate; // 0x0
	};
}
