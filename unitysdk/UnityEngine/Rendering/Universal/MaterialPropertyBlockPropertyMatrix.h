#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED8BC0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MaterialPropertyBlockPropertyMatrix_TypeDefinitionIndex = 26216;

	class MaterialPropertyBlockPropertyMatrix
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATERIALPROPERTYBLOCKPROPERTYMATRIX__CTOR_OFFSET))(this);
		}
	};
}
