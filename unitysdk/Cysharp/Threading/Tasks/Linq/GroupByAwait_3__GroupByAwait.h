#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupByAwait_3__GroupByAwait_TypeDefinitionIndex = 45379;

	template <typename T1, typename T2, typename T3>
	class GroupByAwait_3__GroupByAwait : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source; // 0x0
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask_1<T2>>* keySelector; // 0x0
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask_1<T3>>* elementSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* comparer; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<T2, T3>*>* groupEnumerator; // 0x0
		::System::Linq::IGrouping_2<T2, T3>* _Current_k__BackingField; // 0x0
	};
}
