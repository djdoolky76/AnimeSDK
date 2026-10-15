#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) MonoAnimatorStateSync_AnimatorStateSync
	{
		::System::String* sourceStateName; // 0x10
		::System::String* targetStateName; // 0x18
		::System::Int32 SourceStateHash; // 0x20
		::System::Int32 TargetStateHash; // 0x24
	};
}
