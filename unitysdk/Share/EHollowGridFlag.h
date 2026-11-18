#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowGridFlag_TypeDefinitionIndex = 10261;

	enum class EHollowGridFlag : ::System::UInt32
	{
		Empty = 524288,
		Visible = 64,
		CanTriggerMultiTimes = 2048,
		TemporaryVisibleAtAround = 4096,
		CanMove = 2,
		Unlocked = 8192,
		Blocked = 1048576,
		VisibleByTriggerEvent = 256,
		VisibleAtGridAround = 128,
		Door = 1024,
		Brighten = 16384,
		ShowEventType = 8,
		CanTriggerEvent = 32,
		Guide = 32768,
		Target = 65536,
		SyncToClient = 512,
		Travelled = 4,
		ShowEventID = 16,
		BrightenOnlyVisible = 131072,
		Core = 1,
		Unstable = 262144,
	};
}
