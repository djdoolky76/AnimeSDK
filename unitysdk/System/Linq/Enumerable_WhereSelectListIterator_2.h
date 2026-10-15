#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace System::Linq
{
	template <typename T1, typename T2>
	class Enumerable_WhereSelectListIterator_2
	{
	public:
		::System::Collections::Generic::List_1<T1>* source; // 0x0
		::System::Func_2<T1, ::System::Boolean>* predicate; // 0x0
		::System::Func_2<T1, T2>* selector; // 0x0
		::System::Object* enumerator; // 0x0
	};
}
