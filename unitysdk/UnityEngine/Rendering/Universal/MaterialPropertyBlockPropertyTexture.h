#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28E3B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyTexture_TypeDefinitionIndex = 26961;

	class MaterialPropertyBlockPropertyTexture
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYTEXTURE__CTOR_OFFSET))(this);
		}
	};
}
