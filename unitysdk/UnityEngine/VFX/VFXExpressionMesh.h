#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_VFX_VFXEXPRESSIONMESH__CTOR_OFFSET UNITYSDK_OFFSET(0x2006A1F0)

namespace UnityEngine::VFX
{
	inline static constexpr unsigned int VFXExpressionMesh_TypeDefinitionIndex = 95430;

	class VFXExpressionMesh : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_VFX_VFXEXPRESSIONMESH__CTOR_OFFSET))(this);
		}
	};
}
