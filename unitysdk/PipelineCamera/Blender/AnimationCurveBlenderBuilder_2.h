#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/Blender/DefaultBuilderCommon_2.h"

namespace UnityEngine { class AnimationCurve; }

namespace PipelineCamera::Blender
{
	inline static constexpr unsigned int AnimationCurveBlenderBuilder_2_TypeDefinitionIndex = 36652;

	template <typename T1, typename T2>
	class AnimationCurveBlenderBuilder_2
	{
	public:
		::PipelineCamera::Blender::DefaultBuilderCommon_2<T1, T2> _common; // 0x0
		::UnityEngine::AnimationCurve* _curve; // 0x0
	};
}
