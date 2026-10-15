#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__SelectManyIterator_d__23_3_TypeDefinitionIndex = 3146;

	template <typename T1, typename T2, typename T3>
	class Enumerable__SelectManyIterator_d__23_3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* __3__source; // 0x0
		::System::Func_2<T2, ::System::Collections::Generic::IEnumerable_1<T3>*>* collectionSelector; // 0x0
		::System::Func_2<T2, ::System::Collections::Generic::IEnumerable_1<T3>*>* __3__collectionSelector; // 0x0
		::System::Func_3<T2, T3, T3>* resultSelector; // 0x0
		::System::Func_3<T2, T3, T3>* __3__resultSelector; // 0x0
		T3 _element_5__1; // 0x0
		::System::Collections::Generic::IEnumerator_1<T2>* __7__wrap1; // 0x0
		::System::Collections::Generic::IEnumerator_1<T3>* __7__wrap2; // 0x0
	};
}
