#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace RPG::Client::CrowdAnimator
{
	struct alignas(8) CrowdAssetsPathConfig_CrowdVariantPathDict
	{
		::System::String* Name; // 0x10
		::System::String* Path; // 0x18
	};
}
