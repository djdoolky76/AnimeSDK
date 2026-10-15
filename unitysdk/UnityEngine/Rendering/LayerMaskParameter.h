#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"

#define UNITYENGINE_RENDERING_LAYERMASKPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C4300)

namespace UnityEngine::Rendering
{
	class LayerMaskParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::LayerMask a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LAYERMASKPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
