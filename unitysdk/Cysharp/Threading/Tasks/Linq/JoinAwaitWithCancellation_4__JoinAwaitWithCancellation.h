#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class ILookup_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T1, typename T2, typename T3, typename T4>
	class JoinAwaitWithCancellation_4__JoinAwaitWithCancellation : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* outer; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* inner; // 0x0
		::System::Func_3<T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* outerKeySelector; // 0x0
		::System::Func_3<T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* innerKeySelector; // 0x0
		::System::Func_4<T1, T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T3>* comparer; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Linq::ILookup_2<T3, T2>* lookup; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* enumerator; // 0x0
		::System::Object* awaiter; // 0x0
		T4 currentOuterValue; // 0x0
		::System::Collections::Generic::IEnumerator_1<T2>* valueEnumerator; // 0x0
		::System::Object* resultAwaiter; // 0x0
		::System::Object* outerKeyAwaiter; // 0x0
		::System::Boolean continueNext; // 0x0
		T4 _Current_k__BackingField; // 0x0
		static ::System::Action** StaticGet_MoveNextCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_JoinAwaitWithCancellation")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_OuterSelectCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_JoinAwaitWithCancellation")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_ResultSelectCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_JoinAwaitWithCancellation")->GetStaticField(0x0);
		}

	};
}
