#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable_WhereSelectArrayIterator_2_TypeDefinitionIndex = 3139;

	template <typename T1, typename T2>
	class Enumerable_WhereSelectArrayIterator_2
	{
	public:
		::Il2CppArray<T1>* source; // 0x0
		::System::Func_2<T1, ::System::Boolean>* predicate; // 0x0
		::System::Func_2<T1, T2>* selector; // 0x0
		::System::Int32 index; // 0x0
	};
}
