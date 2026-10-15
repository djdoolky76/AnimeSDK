#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeWhileIntAwait_1__TakeWhileIntAwait_TypeDefinitionIndex = 45666;

	template <typename T>
	class TakeWhileIntAwait_1__TakeWhileIntAwait
	{
	public:
		::System::Func_3<T, ::System::Int32, ::Cysharp::Threading::Tasks::UniTask_1<::System::Boolean>>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}
