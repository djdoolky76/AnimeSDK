#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SkipWhileAwait_1__SkipWhileAwait_TypeDefinitionIndex = 45593;

	template <typename T>
	class SkipWhileAwait_1__SkipWhileAwait
	{
	public:
		::System::Func_2<T, ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>>* predicate; // 0x0
	};
}
