#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_NOINTERPVECTOR2PARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C5F90)

namespace UnityEngine::Rendering
{
	class NoInterpVector2Parameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPVECTOR2PARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
