#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Except_1_TypeDefinitionIndex = 45358;

	template <typename T>
	class Except_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* first; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* second; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* comparer; // 0x0
	};
}
