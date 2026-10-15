#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupJoinAwait_4_TypeDefinitionIndex = 45393;

	template <typename T1, typename T2, typename T3, typename T4>
	class GroupJoinAwait_4 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* outer; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* inner; // 0x0
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask_1<T3>>* outerKeySelector; // 0x0
		::System::Func_2<T2, ::Cysharp::Threading::Tasks::UniTask_1<T3>>* innerKeySelector; // 0x0
		::System::Func_3<T1, ::System::Collections::Generic::IEnumerable_1<T2>*, ::Cysharp::Threading::Tasks::UniTask_1<T4>>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T3>* comparer; // 0x0
	};
}
