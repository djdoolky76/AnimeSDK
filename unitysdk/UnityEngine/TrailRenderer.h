#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Renderer.h"

#define UNITYENGINE_TRAILRENDERER_B10456EE796D56CF_OFFSET UNITYSDK_OFFSET(0x415A690)
#define UNITYENGINE_TRAILRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x40E9D70)

namespace UnityEngine
{
	inline static constexpr unsigned int TrailRenderer_TypeDefinitionIndex = 17414;

	class TrailRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void B10456EE796D56CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER_B10456EE796D56CF_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TRAILRENDERER__CTOR_OFFSET))(this);
		}
	};
}
