#pragma once
#include "unitysdk/unitysdk.h"

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollToTargetResult_ResultState_TypeDefinitionIndex = 64071;

	enum class ScrollToTargetResult_ResultState : ::System::UInt64
	{
		DataIndexOutOfRange = 8194,
		RectTransformNull = 18,
		SimpleMode = 1024,
		AlignParamNull = 34,
		CanNotMoveRuntime = 6,
		ScrollByIndex = 256,
		ScrollByDelta = 512,
		TemplateNotInit = 4098,
		IsDragging = 10,
		Success = 1,
		ScrollByRectTransform = 128,
		Failed = 2,
		NotSimpleMode = 2048,
		FromDataIndexEqualToDataIndex = 16386,
		InValid = 0,
		ManualMode = 66,
	};
}
