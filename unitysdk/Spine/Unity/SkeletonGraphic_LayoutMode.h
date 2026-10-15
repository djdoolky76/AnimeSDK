#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	enum class SkeletonGraphic_LayoutMode : ::System::Int32
	{
		None = 0,
		WidthControlsHeight = 1,
		HeightControlsWidth = 2,
		FitInParent = 3,
		EnvelopeParent = 4,
	};
}
