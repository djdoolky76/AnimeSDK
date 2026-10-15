#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	struct alignas(8) TeleportGateRelateInfo
	{
		::System::Int32 GateIndex; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Int32>* RelateGateIndex; // 0x18
	};
}
