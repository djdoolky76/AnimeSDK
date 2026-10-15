#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	enum class VirtualCameraCmd : ::System::Int32
	{
		VCCmdBeforeTransparent = 0,
		VCCmdAfterTransparent = 1,
		VCCmdPostTransparent = 2,
		VCCmdCount = 3,
	};
}
