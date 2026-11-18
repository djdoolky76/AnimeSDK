#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_MESHMODIFIERREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE356C0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int MeshModifierRegistry_TypeDefinitionIndex = 18489;

	class MeshModifierRegistry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_MESHMODIFIERREGISTRY__CTOR_OFFSET))(this);
		}
	};
}
