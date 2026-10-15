#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTEDICTIONARY_CTOR_OFFSET UNITYSDK_OFFSET(0x1B92FCB0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_OutputAttributeDictionary_TypeDefinitionIndex = 40429;

	class HEU_OutputAttributeDictionary
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTEDICTIONARY_CTOR_OFFSET))(this);
		}

	};
}
