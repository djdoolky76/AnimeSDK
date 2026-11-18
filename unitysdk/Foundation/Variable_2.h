#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

namespace Foundation
{
	inline static constexpr unsigned int Variable_2_TypeDefinitionIndex = 9096;

	template <typename T1, typename T2>
	struct alignas(8) Variable_2
	{
		::System::Nullable_1<T1> _value; // 0x0
		::System::Func_1<T1>* _getter; // 0x0
		::System::Func_2<T2, T1>* _dependentGetter; // 0x0
	};
}
