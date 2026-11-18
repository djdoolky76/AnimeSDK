#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> class Func_9; }

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntityGetter_9_WithArgs1_TypeDefinitionIndex = 36041;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
	struct alignas(8) EcsEntityGetter_9_WithArgs1
	{
		T1 Result; // 0x0
		::System::Func_9<T2, T3, T4, T5, T6, T7, T8, T9, T9>* _getter; // 0x0
		T9 _args2; // 0x0
		T9 _args3; // 0x0
		T9 _args4; // 0x0
		T9 _args5; // 0x0
		T9 _args6; // 0x0
		T9 _args7; // 0x0
		T9 _args8; // 0x0
	};
}
