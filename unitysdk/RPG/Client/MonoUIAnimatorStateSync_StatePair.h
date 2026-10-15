#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) MonoUIAnimatorStateSync_StatePair
	{
		::System::String* SourceStateName; // 0x10
		::System::String* TargetStateName; // 0x18
	};
}
