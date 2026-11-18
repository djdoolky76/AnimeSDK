#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData_TypeDefinitionIndex = 5448;

	template <typename T>
	struct alignas(4) IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TransformJobData
	{
		::System::IntPtr TransformAccessArray; // 0x0
		::System::Int32 IsReadOnly; // 0x0
	};
}
