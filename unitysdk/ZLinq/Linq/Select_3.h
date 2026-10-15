#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Select_3_TypeDefinitionIndex = 6132;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) Select_3
	{
		T1 source; // 0x0
		::System::Func_2<T2, T3>* selector; // 0x0
	};
}
