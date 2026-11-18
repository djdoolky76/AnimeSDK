#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYFLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x16E5DCC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyFloat_TypeDefinitionIndex = 27330;

	class MaterialPropertyBlockPropertyFloat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYFLOAT__CTOR_OFFSET))(this);
		}
	};
}
