#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayRoadMapConfig_PlayPoint_TypeDefinitionIndex = 68755;

	struct alignas(8) WolfBroGunPlayRoadMapConfig_PlayPoint
	{
		::System::Single timePoint; // 0x10
		::System::Single loopTime; // 0x14
		::System::Int32 loopCount; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* targets; // 0x20
	};
}
