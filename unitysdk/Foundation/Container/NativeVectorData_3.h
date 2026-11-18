#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorage_3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorData_3_TypeDefinitionIndex = 9092;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) NativeVectorData_3
	{
		::Foundation::Container::NativeFlatStorage_3<::System::Object*, T1, T2> _storage; // 0x0
	};
}
