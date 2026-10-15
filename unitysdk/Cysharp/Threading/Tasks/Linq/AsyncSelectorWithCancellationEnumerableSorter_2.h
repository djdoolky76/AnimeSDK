#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class AsyncEnumerableSorter_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int AsyncSelectorWithCancellationEnumerableSorter_2_TypeDefinitionIndex = 45524;

	template <typename T1, typename T2>
	class AsyncSelectorWithCancellationEnumerableSorter_2
	{
	public:
		::System::Func_3<T1, ::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<T2>* comparer; // 0x0
		::System::Boolean descending; // 0x0
		::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<T1>* next; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Il2CppArray<T2>* keys; // 0x0
	};
}
