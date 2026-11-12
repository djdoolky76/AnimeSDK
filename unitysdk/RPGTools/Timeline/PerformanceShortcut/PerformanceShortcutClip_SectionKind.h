#pragma once
#include "unitysdk/unitysdk.h"

namespace RPGTools::Timeline::PerformanceShortcut
{
	inline static constexpr unsigned int PerformanceShortcutClip_SectionKind_TypeDefinitionIndex = 49690;

	enum class PerformanceShortcutClip_SectionKind : ::System::Int32
	{
		Animator = 0,
		Emotion = 1,
		LookAt = 2,
		Steer = 3,
	};
}
