#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ReadOnlySpan_1_F48FB86071006F3E.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Chunk
{
	inline static constexpr unsigned int ReadOnlySpan2D_1_TypeDefinitionIndex = 8835;

	template <typename T>
	struct alignas(8) ReadOnlySpan2D_1
	{
		::System::ReadOnlySpan_1_F48FB86071006F3E<T> _data; // 0x0
		::System::Int32 _dimension; // 0x0
		::System::Int32 _length; // 0x0
	};
}
