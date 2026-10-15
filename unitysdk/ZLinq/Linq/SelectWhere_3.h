#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int SelectWhere_3_TypeDefinitionIndex = 6134;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) SelectWhere_3
	{
		::System::Func_2<T1, T2>* _selector_P; // 0x0
		::System::Func_2<T2, ::System::Boolean>* _predicate_P; // 0x0
		T3 source; // 0x0
	};
}
