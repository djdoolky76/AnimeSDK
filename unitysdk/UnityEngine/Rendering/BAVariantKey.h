#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace UnityEngine::Rendering
{
	struct alignas(8) BAVariantKey
	{
		::System::String* keyStr; // 0x10
		::System::UInt32 internalkey; // 0x18
	};
}
