#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupByAwait_4_TypeDefinitionIndex = 45381;

	template <typename T1, typename T2, typename T3, typename T4>
	class GroupByAwait_4 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source; // 0x0
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask>* keySelector; // 0x0
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask>* elementSelector; // 0x0
		::System::Func_3<T2, ::System::Collections::Generic::IEnumerable_1<T3>*, ::Cysharp::Threading::Tasks::UniTask>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* comparer; // 0x0
	};
}
