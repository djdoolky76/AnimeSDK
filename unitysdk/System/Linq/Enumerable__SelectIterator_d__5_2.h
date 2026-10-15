#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	template <typename T1, typename T2>
	class Enumerable__SelectIterator_d__5_2 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* source; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* __3__source; // 0x0
		::System::Int32 _index_5__1; // 0x0
		::System::Func_3<T2, ::System::Int32, T2>* selector; // 0x0
		::System::Func_3<T2, ::System::Int32, T2>* __3__selector; // 0x0
		::System::Collections::Generic::IEnumerator_1<T2>* __7__wrap1; // 0x0
	};
}
