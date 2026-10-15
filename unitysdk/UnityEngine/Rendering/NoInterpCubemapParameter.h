#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Cubemap; }

#define UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C5170)

namespace UnityEngine::Rendering
{
	class NoInterpCubemapParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::Cubemap* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCUBEMAPPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
