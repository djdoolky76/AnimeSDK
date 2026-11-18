#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Jobs
{
	inline static constexpr unsigned int IChunkJobParallelForExtensions_ParallelForJobStruct_1_TypeDefinitionIndex = 9006;

	template <typename T>
	struct alignas(4) IChunkJobParallelForExtensions_ParallelForJobStruct_1
	{
		static ::System::IntPtr* StaticGet_jobReflectionData()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(IChunkJobParallelForExtensions_ParallelForJobStruct_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
