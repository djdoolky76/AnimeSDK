#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Jobs
{
	inline static constexpr unsigned int ChunkJobForExtensions_ChunkJobTuple_2_TypeDefinitionIndex = 8788;

	template <typename T1, typename T2>
	struct alignas(8) ChunkJobForExtensions_ChunkJobTuple_2
	{
		T1 _jobTuple; // 0x0
		T2 _job; // 0x0
	};
}
