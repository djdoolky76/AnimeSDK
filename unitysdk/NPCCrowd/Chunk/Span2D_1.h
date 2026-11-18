#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Chunk
{
	inline static constexpr unsigned int Span2D_1_TypeDefinitionIndex = 8848;

	template <typename T>
	struct alignas(8) Span2D_1
	{
		::System::Span_1_9011FAD97750D224<T> _data; // 0x0
		::System::Int32 _dimension; // 0x0
		::System::Int32 _length; // 0x0
	};
}
