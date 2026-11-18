#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int DirectType_TypeDefinitionIndex = 21553;

	enum class DirectType : ::System::Int32
	{
		BIG_TV_EXIT = 7,
		DIRECT_TYPE_NONE = 0,
		TIME_REWIND_ENTER = 10,
		REPAIR_EXIT = 13,
		TIME_SEGMENT_ENTER = 12,
		SWITCH_CHESS_DOWN = 5,
		SWITCH_CHESS_UP = 4,
		BIG_TV_ENTER = 6,
		RESET_GRID = 8,
		REPAIR = 9,
		TIME_REWIND_EXIT = 11,
		CHANGE_GRID = 3,
		DIRECT_DOWN = 2,
		DIRECT_UP = 1,
	};
}
