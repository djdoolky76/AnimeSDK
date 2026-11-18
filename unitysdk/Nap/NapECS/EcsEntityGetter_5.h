#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5> class Func_5; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_5_TypeDefinitionIndex = 35928;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	struct alignas(8) EcsEntityGetter_5
	{
		T1 Result; // 0x0
		::System::Func_5<T2, T3, T4, T5, T5>* _getter; // 0x0
	};
}
