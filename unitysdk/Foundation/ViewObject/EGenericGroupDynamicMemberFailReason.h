#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int EGenericGroupDynamicMemberFailReason_TypeDefinitionIndex = 76697;

	enum class EGenericGroupDynamicMemberFailReason : ::System::Int32
	{
		None = 0,
		ViewObjectConfigNotFound = 4,
		GroupNotFound = 1,
		NoPositionSource = 7,
		FullCleanupInProgress = 11,
		GroupUnloading = 10,
		MemberIdExhausted = 8,
		PointNotFound = 6,
		InvalidMemberType = 3,
		MonsterIdUnresolvable = 5,
		BuildFailed = 9,
		GroupNotLocal = 2,
	};
}
