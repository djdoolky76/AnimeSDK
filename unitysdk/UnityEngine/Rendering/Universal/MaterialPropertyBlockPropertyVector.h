#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYVECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D28E3D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyVector_TypeDefinitionIndex = 27177;

	class MaterialPropertyBlockPropertyVector
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYVECTOR__CTOR_OFFSET))(this);
		}
	};
}
