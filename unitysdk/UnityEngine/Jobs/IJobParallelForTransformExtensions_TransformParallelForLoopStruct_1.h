#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Jobs
{
	inline static constexpr unsigned int IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1_TypeDefinitionIndex = 4428;

	template <typename T>
	struct alignas(4) IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1
	{
		static ::System::IntPtr* StaticGet_jobReflectionData()
		{
			return (::System::IntPtr*)UnitySDK::FromName("UnityEngine.Jobs", "TransformParallelForLoopStruct`1")->GetStaticField(0x0);
		}

	};
}
