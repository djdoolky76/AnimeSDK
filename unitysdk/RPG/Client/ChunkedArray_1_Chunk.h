#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	template <typename T>
	struct alignas(8) ChunkedArray_1_Chunk
	{
		::Il2CppArray<T>* Elements; // 0x0
	};
}
