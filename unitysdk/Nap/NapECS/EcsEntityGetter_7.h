#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Func_7; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_7_TypeDefinitionIndex = 35925;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	struct alignas(8) EcsEntityGetter_7
	{
		T1 Result; // 0x0
		::System::Func_7<T2, T3, T4, T5, T6, T7, T7>* _getter; // 0x0
	};
}
