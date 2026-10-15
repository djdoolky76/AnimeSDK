#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_PDG_WorkItemOutputFile_TypeDefinitionIndex = 40520;

	struct alignas(4) HAPI_PDG_WorkItemOutputFile
	{
		::System::Int32 filePathSH; // 0x10
		::System::Int32 tagSH; // 0x14
		::System::Int64 hash; // 0x18
	};
}
