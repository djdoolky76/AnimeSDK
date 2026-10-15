#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int ListWhereSelect_2_TypeDefinitionIndex = 6147;

	template <typename T1, typename T2>
	struct alignas(8) ListWhereSelect_2
	{
		::System::Func_2<T1, ::System::Boolean>* _predicate_P; // 0x0
		::System::Func_2<T1, T2>* _selector_P; // 0x0
		::System::Int32 index; // 0x0
		::System::Collections::Generic::List_1<T1>* source; // 0x0
	};
}
