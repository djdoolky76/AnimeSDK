#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::Jobs
{
	inline static constexpr unsigned int IJobExtensions_JobStruct_1_TypeDefinitionIndex = 3956;

	template <typename T>
	struct alignas(4) IJobExtensions_JobStruct_1
	{
		static ::System::IntPtr* StaticGet_jobReflectionData()
		{
			return (::System::IntPtr*)UnitySDK::FromName("Unity.Jobs", "JobStruct`1")->GetStaticField(0x0);
		}

	};
}
