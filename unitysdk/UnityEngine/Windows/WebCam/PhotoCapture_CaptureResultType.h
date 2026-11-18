#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCapture_CaptureResultType_TypeDefinitionIndex = 5470;

	enum class PhotoCapture_CaptureResultType : ::System::Int32
	{
		Success = 0,
		UnknownError = 1,
	};
}
