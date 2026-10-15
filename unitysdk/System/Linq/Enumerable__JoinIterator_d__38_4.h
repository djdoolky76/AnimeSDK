#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__JoinIterator_d__38_4_TypeDefinitionIndex = 3149;

	template <typename T1, typename T2, typename T3, typename T4>
	class Enumerable__JoinIterator_d__38_4 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* inner; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* __3__inner; // 0x0
		::System::Func_2<T2, T3>* innerKeySelector; // 0x0
		::System::Func_2<T2, T3>* __3__innerKeySelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T3>* comparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T3>* __3__comparer; // 0x0
		::System::Collections::Generic::IEnumerable_1<T4>* outer; // 0x0
		::System::Collections::Generic::IEnumerable_1<T4>* __3__outer; // 0x0
		::System::Linq::Lookup_2<T3, T2>* _lookup_5__1; // 0x0
		::System::Func_2<T4, T3>* outerKeySelector; // 0x0
		::System::Func_2<T4, T3>* __3__outerKeySelector; // 0x0
		::System::Func_3<T4, T2, T4>* resultSelector; // 0x0
		::System::Func_3<T4, T2, T4>* __3__resultSelector; // 0x0
		T4 _item_5__2; // 0x0
		::System::Object* _g_5__3; // 0x0
		::System::Int32 _i_5__4; // 0x0
		::System::Collections::Generic::IEnumerator_1<T4>* __7__wrap1; // 0x0
	};
}
