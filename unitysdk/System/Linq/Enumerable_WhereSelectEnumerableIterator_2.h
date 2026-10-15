#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_WhereSelectEnumerableIterator_2_TypeDefinitionIndex = 3138;

	template <typename T1, typename T2>
	class Enumerable_WhereSelectEnumerableIterator_2
	{
	public:
		::System::Collections::Generic::IEnumerable_1<T1>* source; // 0x0
		::System::Func_2<T1, ::System::Boolean>* predicate; // 0x0
		::System::Func_2<T1, T2>* selector; // 0x0
		::System::Collections::Generic::IEnumerator_1<T1>* enumerator; // 0x0
	};
}
