#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine::Unity
{
	enum class SkeletonUtilityBone_UpdatePhase : ::System::Int32
	{
		Local = 0,
		World = 1,
		Complete = 2,
	};
}
