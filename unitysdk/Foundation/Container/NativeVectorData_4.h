#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorage_4.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorData_4_TypeDefinitionIndex = 8783;

	template <typename T1, typename T2, typename T3, typename T4>
	struct alignas(8) NativeVectorData_4
	{
		::Foundation::Container::NativeFlatStorage_4<::System::Object*, T1, T2, T3> _storage; // 0x0
	};
}
