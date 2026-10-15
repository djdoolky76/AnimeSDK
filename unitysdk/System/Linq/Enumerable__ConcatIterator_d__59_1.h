#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	template <typename T>
	class Enumerable__ConcatIterator_d__59_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* first; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__first; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* second; // 0x0
		::System::Collections::Generic::IEnumerable_1<T>* __3__second; // 0x0
		::System::Collections::Generic::IEnumerator_1<T>* __7__wrap1; // 0x0
	};
}
