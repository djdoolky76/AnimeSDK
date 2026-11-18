#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryView_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int ReadOnlyNativeMemoryRefEnumerator_1_TypeDefinitionIndex = 8708;

	template <typename T>
	struct alignas(8) ReadOnlyNativeMemoryRefEnumerator_1
	{
		::Foundation::NativeMemoryView_1<T> _view; // 0x0
		::System::Int32 _index; // 0x0
	};
}
