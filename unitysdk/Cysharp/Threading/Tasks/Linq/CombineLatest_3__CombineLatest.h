#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int CombineLatest_3__CombineLatest_TypeDefinitionIndex = 45276;

	template <typename T1, typename T2, typename T3>
	class CombineLatest_3__CombineLatest : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source1; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* source2; // 0x0
		::System::Func_3<T1, T2, T3>* resultSelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* enumerator1; // 0x0
		::System::Object* awaiter1; // 0x0
		::System::Boolean hasCurrent1; // 0x0
		::System::Boolean running1; // 0x0
		T3 current1; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* enumerator2; // 0x0
		::System::Object* awaiter2; // 0x0
		::System::Boolean hasCurrent2; // 0x0
		::System::Boolean running2; // 0x0
		T3 current2; // 0x0
		::System::Int32 completedCount; // 0x0
		::System::Boolean syncRunning; // 0x0
		T3 result; // 0x0
		static ::System::Action** StaticGet_Completed1Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_Completed2Delegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_CombineLatest")->GetStaticField(0x0);
		}

		// static const ::System::Object CompleteCount; // 0x0
	};
}
