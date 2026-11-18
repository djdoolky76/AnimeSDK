#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeHashMap_2_ParallelWriter_TypeDefinitionIndex = 18018;

	template <typename T1, typename T2>
	struct alignas(8) NativeHashMap_2_ParallelWriter
	{
		::System::Object* m_Writer; // 0x0
	};
}
