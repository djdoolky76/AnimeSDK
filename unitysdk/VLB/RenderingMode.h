#pragma once
#include "unitysdk/unitysdk.h"

namespace VLB
{
	enum class RenderingMode : ::System::Int32
	{
		MultiPass = 0,
		SinglePass = 1,
		GPUInstancing = 2,
	};
}
