#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_3_WithArgs1_TypeDefinitionIndex = 35968;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) EcsEntityGetter_3_WithArgs1
	{
		T1 Result; // 0x0
		::System::Func_3<T2, T3, T3>* _getter; // 0x0
		T3 _args2; // 0x0
	};
}
