#pragma once
#include "unitysdk/unitysdk.h"

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int TaskPool_1_TypeDefinitionIndex = 38222;

	template <typename T>
	struct alignas(8) TaskPool_1
	{
		::System::Int32 gate; // 0x0
		::System::Int32 size; // 0x0
		T root; // 0x0
	};
}
