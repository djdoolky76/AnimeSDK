#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class AnimationCurve; }

#define UNITYENGINE_RENDERING_ANIMATIONCURVEPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x20556BE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AnimationCurveParameter_TypeDefinitionIndex = 36587;

	class AnimationCurveParameter
	{
	public:
		::System::Void _ctor(::UnityEngine::AnimationCurve* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_ANIMATIONCURVEPARAMETER_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
