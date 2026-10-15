#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Reverse_1__Reverse_TypeDefinitionIndex = 45549;

	template <typename T>
	class Reverse_1__Reverse : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 index; // 0x0
		T _Current_k__BackingField; // 0x0
	};
}
