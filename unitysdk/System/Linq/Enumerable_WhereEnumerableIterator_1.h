#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_WhereEnumerableIterator_1_TypeDefinitionIndex = 3135;

	template <typename T>
	class Enumerable_WhereEnumerableIterator_1
	{
	public:
		::System::Collections::Generic::IEnumerable_1<T>* source; // 0x0
		::System::Func_2<T, ::System::Boolean>* predicate; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* enumerator; // 0x0
	};
}
