#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PhotoGraphAimUnionNodeType : ::System::Int32
	{
		LocalPlayer = 0,
		TargetEvaluator = 1,
		Npc = 2,
		Prop = 3,
		Tag = 4,
		GiantTarget = 5,
	};
}
