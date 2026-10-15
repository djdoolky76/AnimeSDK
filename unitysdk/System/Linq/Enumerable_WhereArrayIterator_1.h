#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace System::Linq
{
	template <typename T>
	class Enumerable_WhereArrayIterator_1
	{
	public:
		::Il2CppArray<T>* source; // 0x0
		::System::Func_2<T, ::System::Boolean>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}
