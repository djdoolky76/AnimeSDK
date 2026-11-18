#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int NodeState_TypeDefinitionIndex = 25755;

	enum class NodeState : ::System::Int32
	{
		UN_EMPTY = 15,
		UNLOCKED = 2,
		SHOW_EVENT = 4,
		DOOR = 5,
		UNSTABLE = 10,
		EMPTY = 11,
		GUIDE = 7,
		TARGET = 8,
		LOCKED = 1,
		BRIGHTEN = 6,
		LOCKED_WITH_STAMINA = 14,
		NODE_STATE_ALL = 0,
		FINISHED = 3,
		BRIGHTEN_ONLY_VISIBLE = 9,
	};
}
