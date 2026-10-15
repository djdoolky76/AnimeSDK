#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_NOINTERPVECTOR4PARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C6240)

namespace UnityEngine::Rendering
{
	class NoInterpVector4Parameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector4 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPVECTOR4PARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
