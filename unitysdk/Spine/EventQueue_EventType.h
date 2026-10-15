#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	enum class EventQueue_EventType : ::System::Int32
	{
		Start = 0,
		Interrupt = 1,
		End = 2,
		Dispose = 3,
		Complete = 4,
		Event = 5,
	};
}
