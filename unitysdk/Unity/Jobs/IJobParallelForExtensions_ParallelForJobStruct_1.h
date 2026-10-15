#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobParallelForExtensions_ParallelForJobStruct_1_TypeDefinitionIndex = 3960;

	template <typename T>
	struct alignas(4) IJobParallelForExtensions_ParallelForJobStruct_1
	{
		static ::System::IntPtr* StaticGet_jobReflectionData()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Unity.Jobs", "ParallelForJobStruct`1")->GetStaticField(0x0);
		}

	};
}
