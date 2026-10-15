#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable__ZipIterator_d__65_3_TypeDefinitionIndex = 3153;

	template <typename T1, typename T2, typename T3>
	class Enumerable__ZipIterator_d__65_3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* first; // 0x0
		::System::Collections::Generic::IEnumerable_1<T2>* __3__first; // 0x0
		::System::Collections::Generic::IEnumerable_1<T3>* second; // 0x0
		::System::Collections::Generic::IEnumerable_1<T3>* __3__second; // 0x0
		::System::Func_3<T2, T3, T3>* resultSelector; // 0x0
		::System::Func_3<T2, T3, T3>* __3__resultSelector; // 0x0
		::System::Collections::Generic::IEnumerator_1<T2>* _e1_5__1; // 0x0
		::System::Collections::Generic::IEnumerator_1<T3>* _e2_5__2; // 0x0
	};
}
