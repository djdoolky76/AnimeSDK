#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGCamera/CameraStateData.h"
#include "unitysdk/System/Object.h"

namespace RPGCamera
{
	template <typename T>
	class BaseCameraStateRunner_1 : public ::System::Object
	{
	public:
		::System::Boolean _isBackground; // 0x0
		T _state; // 0x0
		::RPGCamera::CameraStateData _retData; // 0x0
	};
}
