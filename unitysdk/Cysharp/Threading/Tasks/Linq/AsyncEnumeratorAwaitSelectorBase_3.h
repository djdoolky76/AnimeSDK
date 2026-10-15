#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int AsyncEnumeratorAwaitSelectorBase_3_TypeDefinitionIndex = 45227;

	template <typename T1, typename T2, typename T3>
	class AsyncEnumeratorAwaitSelectorBase_3 : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* enumerator; // 0x0
		::System::Object* sourceMoveNext; // 0x0
		::System::Object* resultAwaiter; // 0x0
		T2 _SourceCurrent_k__BackingField; // 0x0
		T3 _Current_k__BackingField; // 0x0
		static ::System::Action_1<::System::Object*>** StaticGet_moveNextCallbackDelegate()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "AsyncEnumeratorAwaitSelectorBase`3")->GetStaticField(0x0);
		}

		static ::System::Action_1<::System::Object*>** StaticGet_setCurrentCallbackDelegate()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "AsyncEnumeratorAwaitSelectorBase`3")->GetStaticField(0x0);
		}

	};
}
