#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_WhereListIterator_1_TypeDefinitionIndex = 3137;

	template <typename T>
	class Enumerable_WhereListIterator_1
	{
	public:
		::System::Collections::Generic::List_1<T>* source; // 0x0
		::System::Func_2<T, ::System::Boolean>* predicate; // 0x0
		::System::Object* enumerator; // 0x0
	};
}
