#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_2_TypeDefinitionIndex = 35949;

	template <typename T1, typename T2>
	struct alignas(8) EcsEntityGetter_2
	{
		T1 Result; // 0x0
		::System::Func_2<T2, T2>* _getter; // 0x0
	};
}
