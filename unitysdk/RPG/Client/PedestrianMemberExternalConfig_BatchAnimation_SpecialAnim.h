#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client
{
	struct alignas(8) PedestrianMemberExternalConfig_BatchAnimation_SpecialAnim
	{
		::System::String* Name; // 0x10
		::System::Int32 AnimIndex; // 0x18
	};
}
