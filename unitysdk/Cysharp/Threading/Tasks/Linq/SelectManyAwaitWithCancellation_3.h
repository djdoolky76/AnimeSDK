#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SelectManyAwaitWithCancellation_3_TypeDefinitionIndex = 45569;

	template <typename T1, typename T2, typename T3>
	class SelectManyAwaitWithCancellation_3 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source; // 0x0
		::System::Func_3<T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* selector1; // 0x0
		::System::Func_4<T1, ::System::Int32, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* selector2; // 0x0
		::System::Func_4<T1, T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* resultSelector; // 0x0
	};
}
