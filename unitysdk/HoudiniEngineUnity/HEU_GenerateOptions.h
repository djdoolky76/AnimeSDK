#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_GenerateOptions_TypeDefinitionIndex = 40596;

	struct alignas(4) HEU_GenerateOptions
	{
		::System::Boolean _generateUVs; // 0x10
		::System::Boolean _generateTangents; // 0x11
		::System::Boolean _generateNormals; // 0x12
		::System::Boolean _useLODGroups; // 0x13
		::System::Boolean _splitPoints; // 0x14
	};
}
