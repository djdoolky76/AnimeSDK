#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Where_2_TypeDefinitionIndex = 6143;

	template <typename T1, typename T2>
	struct alignas(8) Where_2
	{
		::System::Func_2<T1, ::System::Boolean>* _predicate_P; // 0x0
		T2 source; // 0x0
	};
}
