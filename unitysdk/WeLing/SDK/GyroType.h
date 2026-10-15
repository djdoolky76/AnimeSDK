#pragma once
#include "unitysdk/unitysdk.h"

namespace WeLing::SDK
{
	enum class GyroType : ::System::Int32
	{
		DEFAULT = 0,
		ATTITUDE = 1101,
		ROTATIONRATE = 1102,
	};
}
