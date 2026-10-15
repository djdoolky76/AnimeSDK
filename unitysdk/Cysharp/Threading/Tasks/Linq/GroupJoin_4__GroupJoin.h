#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class ILookup_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int GroupJoin_4__GroupJoin_TypeDefinitionIndex = 45391;

	template <typename T1, typename T2, typename T3, typename T4>
	class GroupJoin_4__GroupJoin : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* outer; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* inner; // 0x0
		::System::Func_2<T1, T3>* outerKeySelector; // 0x0
		::System::Func_2<T2, T3>* innerKeySelector; // 0x0
		::System::Func_3<T1, ::System::Collections::Generic::IEnumerable_1<T2>*, T4>* resultSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T3>* comparer; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Linq::ILookup_2<T3, T2>* lookup; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* enumerator; // 0x0
		::System::Object* awaiter; // 0x0
		T4 _Current_k__BackingField; // 0x0
		static ::System::Action_1<::System::Object*>** StaticGet_MoveNextCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_GroupJoin")->GetStaticField(0x0);
		}

	};
}
