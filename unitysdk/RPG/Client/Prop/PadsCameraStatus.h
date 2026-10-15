#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	enum class PadsCameraStatus : ::System::Int32
	{
		Normal = 0,
		BeforeBlending = 1,
		Blending = 2,
		AfterBlending = 3,
	};
}
