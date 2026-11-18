#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Foundation
{
	inline static constexpr unsigned int InvocableWithRet_2_Impl_1_TypeDefinitionIndex = 8727;

	template <typename T1, typename T2>
	struct alignas(8) InvocableWithRet_2_Impl_1
	{
		::System::Func_3<T1, T2, T2>* _function; // 0x0
		T2 _data1; // 0x0
	};
}
