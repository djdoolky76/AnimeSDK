#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T> class Set_1; }

namespace System::Linq
{
	template <typename T>
	class Enumerable__IntersectIterator_d__74_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* comparer; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<T>* __3__comparer; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* second; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__second; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* first; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__first; // 0x0
		::System::Linq::Set_1<T>* _set_5__1; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1; // 0x0
	};
}
