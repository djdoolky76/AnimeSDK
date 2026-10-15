#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::Prop
{
	struct alignas(8) ChaseNPCInfo
	{
		::System::UInt32 npcID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* uniqueName; // 0x18
	};
}
