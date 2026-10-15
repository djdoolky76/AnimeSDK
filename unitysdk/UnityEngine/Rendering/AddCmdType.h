#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	enum class AddCmdType : ::System::Int32
	{
		kAddCmdBefore = 0,
		kAddCmdAfter = 1,
		kAddCmdCustom = 2,
		kAddCmdBeforeDraw = 3,
	};
}
