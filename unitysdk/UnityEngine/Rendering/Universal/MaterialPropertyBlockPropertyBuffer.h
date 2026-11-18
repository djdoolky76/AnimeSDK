#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E381C10)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyBuffer_TypeDefinitionIndex = 27331;

	class MaterialPropertyBlockPropertyBuffer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYBUFFER__CTOR_OFFSET))(this);
		}
	};
}
