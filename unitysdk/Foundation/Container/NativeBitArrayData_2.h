#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorage_3.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeBitArrayData_2_TypeDefinitionIndex = 8956;

	template <typename T1, typename T2>
	struct alignas(8) NativeBitArrayData_2
	{
		::Foundation::Container::NativeFlatStorage_3<::System::Object*, ::System::UInt32, T1> _data; // 0x0
	};
}
