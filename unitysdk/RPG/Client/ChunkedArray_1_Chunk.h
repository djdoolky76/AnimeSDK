#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChunkedArray_1_Chunk_TypeDefinitionIndex = 35199;

	template <typename T>
	struct alignas(8) ChunkedArray_1_Chunk
	{
		::Il2CppArray<T>* Elements; // 0x0
	};
}
