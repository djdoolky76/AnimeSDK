#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/DataOrientated/ArchetypeComponentData_1.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int ArchetypeComponentData_1_DisposeJob_TypeDefinitionIndex = 36401;

	template <typename T>
	struct alignas(8) ArchetypeComponentData_1_DisposeJob
	{
		::PipelineCamera::DataOrientated::ArchetypeComponentData_1<T> Data; // 0x0
	};
}
