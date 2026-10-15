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

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T1, typename T2, typename T3>
	class ZipAwaitWithCancellation_3__ZipAwaitWithCancellation : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* first; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* second; // 0x0
		::System::Func_4<T1, T2, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* resultSelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* firstEnumerator; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* secondEnumerator; // 0x0
		::System::Object* firstAwaiter; // 0x0
		::System::Object* secondAwaiter; // 0x0
		::System::Object* resultAwaiter; // 0x0
		T3 _Current_k__BackingField; // 0x0
		static ::System::Action** StaticGet_firstMoveNextCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_ZipAwaitWithCancellation")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_secondMoveNextCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_ZipAwaitWithCancellation")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_resultAwaitCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_ZipAwaitWithCancellation")->GetStaticField(0x0);
		}

	};
}
