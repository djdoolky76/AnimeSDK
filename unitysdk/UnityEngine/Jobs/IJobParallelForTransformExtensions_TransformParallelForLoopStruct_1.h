#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Jobs
{
	template <typename T>
	struct alignas(4) IJobParallelForTransformExtensions_TransformParallelForLoopStruct_1
	{
		static ::System::IntPtr* StaticGet_jobReflectionData()
		{
			return (::System::IntPtr*)UnitySDK::FromName("UnityEngine.Jobs", "TransformParallelForLoopStruct`1")->GetStaticField(0x0);
		}

	};
}
