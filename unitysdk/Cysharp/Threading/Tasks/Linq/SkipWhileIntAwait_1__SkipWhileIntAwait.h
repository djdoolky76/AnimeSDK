#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class SkipWhileIntAwait_1__SkipWhileIntAwait
	{
	public:
		::System::Func_3<T, ::System::Int32, ::Cysharp::Threading::Tasks::UniTask>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}
