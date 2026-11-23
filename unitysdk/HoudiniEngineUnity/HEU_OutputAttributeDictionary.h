#pragma once
#include "unitysdk/unitysdk.h"

#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTEDICTIONARY__CTOR_OFFSET UNITYSDK_OFFSET(0x383E630)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_OutputAttributeDictionary_TypeDefinitionIndex = 17940;

	class HEU_OutputAttributeDictionary
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTEDICTIONARY__CTOR_OFFSET))(this);
		}
	};
}
