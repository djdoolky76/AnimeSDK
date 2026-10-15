#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/GroupEvent.h"
namespace Entitas { template <typename T> class IMatcher_1; }

namespace Entitas
{
	template <typename T>
	struct alignas(8) TriggerOnEvent_1
	{
		::Entitas::IMatcher_1<T>* matcher; // 0x0
		::Entitas::GroupEvent groupEvent; // 0x0
	};
}
