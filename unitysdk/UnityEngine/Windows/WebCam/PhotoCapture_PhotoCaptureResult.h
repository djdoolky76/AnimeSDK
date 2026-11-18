#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Windows/WebCam/PhotoCapture_CaptureResultType.h"

namespace UnityEngine::Windows::WebCam
{
	inline static constexpr unsigned int PhotoCapture_PhotoCaptureResult_TypeDefinitionIndex = 5471;

	struct alignas(4) PhotoCapture_PhotoCaptureResult
	{
		::UnityEngine::Windows::WebCam::PhotoCapture_CaptureResultType resultType; // 0x10
		::System::Byte _padding0[0x4];
		::System::Int64 hResult; // 0x18
	};
}
