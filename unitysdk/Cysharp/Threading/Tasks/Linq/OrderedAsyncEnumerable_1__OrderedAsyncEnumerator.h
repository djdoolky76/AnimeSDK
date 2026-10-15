#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks::Linq { template <typename T> class OrderedAsyncEnumerable_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int OrderedAsyncEnumerable_1__OrderedAsyncEnumerator_TypeDefinitionIndex = 45527;

	template <typename T>
	class OrderedAsyncEnumerable_1__OrderedAsyncEnumerator : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::Linq::OrderedAsyncEnumerable_1<T>* parent; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Il2CppArray<T>* buffer; // 0x0
		::Il2CppArray<::System::Int32>* map; // 0x0
		::System::Int32 index; // 0x0
		T _Current_k__BackingField; // 0x0
	};
}
