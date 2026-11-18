#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }

namespace Unity::Jobs::LowLevel::Unsafe
{
	inline static constexpr unsigned int BatchQueryJob_2_TypeDefinitionIndex = 5061;

	template <typename T1, typename T2>
	struct alignas(8) BatchQueryJob_2
	{
		::Unity::Collections::NativeArray_1<::System::Object*> commands; // 0x0
		::Unity::Collections::NativeArray_1<::System::Object*> results; // 0x0
	};
}
