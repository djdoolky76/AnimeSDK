#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Jobs
{
	inline static constexpr unsigned int ChunkJobForExtensions_JobStruct_1_TypeDefinitionIndex = 8785;

	template <typename T>
	struct alignas(4) ChunkJobForExtensions_JobStruct_1
	{
		static ::System::IntPtr* StaticGet_JobReflectionData()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(ChunkJobForExtensions_JobStruct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
