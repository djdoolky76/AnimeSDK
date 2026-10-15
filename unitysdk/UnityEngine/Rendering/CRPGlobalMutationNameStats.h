#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

namespace UnityEngine::Rendering
{
	struct alignas(8) CRPGlobalMutationNameStats
	{
		::System::String* name; // 0x10
		::System::Int32 count; // 0x18
	};
}
