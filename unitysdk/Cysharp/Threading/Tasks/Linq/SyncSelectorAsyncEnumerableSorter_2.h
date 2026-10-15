#pragma once
#include "unitysdk/unitysdk.h"
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class AsyncEnumerableSorter_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SyncSelectorAsyncEnumerableSorter_2_TypeDefinitionIndex = 45520;

	template <typename T1, typename T2>
	class SyncSelectorAsyncEnumerableSorter_2
	{
	public:
		::System::Func_2<T1, T2>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<T2>* comparer; // 0x0
		::System::Boolean descending; // 0x0
		::Cysharp::Threading::Tasks::Linq::AsyncEnumerableSorter_1<T1>* next; // 0x0
		::Il2CppArray<T2>* keys; // 0x0
	};
}
