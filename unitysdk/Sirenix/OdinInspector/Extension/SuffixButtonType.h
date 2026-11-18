#pragma once
#include "unitysdk/unitysdk.h"

namespace Sirenix::OdinInspector::Extension
{
	inline static constexpr unsigned int SuffixButtonType_TypeDefinitionIndex = 8604;

	enum class SuffixButtonType : ::System::Int32
	{
		TimelineShowSetting = 2,
		GalGameShowSetting = 1,
		AnimationCurvePreview = 0,
	};
}
