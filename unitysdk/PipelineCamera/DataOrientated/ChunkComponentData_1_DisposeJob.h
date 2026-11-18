#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ChunkComponentData_1.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ChunkComponentData_1_DisposeJob_TypeDefinitionIndex = 36398;

	template <typename T>
	struct alignas(8) ChunkComponentData_1_DisposeJob
	{
		::PipelineCamera::DataOrientated::ChunkComponentData_1<T> Data; // 0x0
	};
}
