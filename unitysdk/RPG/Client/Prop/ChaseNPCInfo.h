#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChaseNPCInfo_TypeDefinitionIndex = 78223;

	struct alignas(8) ChaseNPCInfo
	{
		::System::UInt32 npcID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* uniqueName; // 0x18
	};
}
