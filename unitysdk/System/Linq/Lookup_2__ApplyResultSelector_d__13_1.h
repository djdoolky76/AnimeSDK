#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2; }

namespace System::Linq
{
	inline static constexpr unsigned int Lookup_2__ApplyResultSelector_d__13_1_TypeDefinitionIndex = 4380;

	template <typename T1, typename T2>
	class Lookup_2__ApplyResultSelector_d__13_1 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x0
		T1 __2__current; // 0x0
		::System::Int32 __l__initialThreadId; // 0x0
		::System::Linq::Lookup_2<T2, T2>* __4__this; // 0x0
		::System::Object* _g_5__1; // 0x0
		::System::Func_3<T2, ::System::Collections::Generic::IEnumerable_1<T2>*, T2>* resultSelector; // 0x0
		::System::Func_3<T2, ::System::Collections::Generic::IEnumerable_1<T2>*, T2>* __3__resultSelector; // 0x0
	};
}
