#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupByAwaitWithCancellation_4__GroupByAwaitWithCancellation_TypeDefinitionIndex = 45388;

	template <typename T1, typename T2, typename T3, typename T4>
	class GroupByAwaitWithCancellation_4__GroupByAwaitWithCancellation : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source; // 0x0
		::System::Func_3<T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<T2>>* keySelector; // 0x0
		::System::Func_3<T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<T3>>* elementSelector; // 0x0
		::System::Func_4<T2, ::System::Collections::Generic::IEnumerable_1<T3>*, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask_1<T4>>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T2>* comparer; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Linq::IGrouping_2<T2, T3>*>* groupEnumerator; // 0x0
		::System::Object* awaiter; // 0x0
		T4 _Current_k__BackingField; // 0x0
		static ::System::Action_1<::System::Object*>** StaticGet_ResultSelectCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_GroupByAwaitWithCancellation")->GetStaticField(0x0);
		}

	};
}
